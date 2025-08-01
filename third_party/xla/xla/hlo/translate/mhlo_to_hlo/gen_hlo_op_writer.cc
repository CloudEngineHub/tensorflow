/* Copyright 2019 The OpenXLA Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include <array>
#include <string>
#include <unordered_set>
#include <utility>

#include "absl/container/flat_hash_set.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/Sequence.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/ADT/StringMap.h"
#include "llvm/Support/Casting.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/Signals.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/TableGen/Error.h"
#include "llvm/TableGen/Main.h"
#include "llvm/TableGen/Record.h"
#include "llvm/TableGen/TableGenBackend.h"
#include "mlir/TableGen/Argument.h"
#include "mlir/TableGen/Attribute.h"
#include "mlir/TableGen/Operator.h"

using llvm::interleaveComma;
using llvm::raw_ostream;
using llvm::RecordKeeper;
using llvm::StringRef;
using mlir::tblgen::Attribute;
using mlir::tblgen::NamedAttribute;
using mlir::tblgen::NamedTypeConstraint;
using mlir::tblgen::Operator;

static std::string GetDefaultAttrExport(
    const mlir::tblgen::NamedAttribute& named_attr) {
  Attribute attr = named_attr.attr;
  StringRef storage_type = attr.getStorageType();
  // For some attribute types we have a general conversion, so use that.
  if (!attr.isEnumAttr() && (storage_type.ends_with("BoolAttr") ||
                             storage_type.ends_with("FloatAttr") ||
                             storage_type.ends_with("IntegerAttr") ||
                             storage_type.ends_with("StringAttr"))) {
    // The return type may contains qualified namespaces. Split to remove them.
    std::pair<StringRef, StringRef> splits = attr.getReturnType().rsplit("::");
    StringRef symbol = splits.second;
    if (symbol.empty()) symbol = splits.first;
    return "Convert" + symbol.str();
  }
  return "Convert_" + named_attr.name.str();
}

static StringRef GetClientBuilder(const Operator& op) {
  static const auto* kOpToXLABuilderMap =
      new llvm::StringMap<StringRef>{{"ReverseOp", "Rev"},
                                     {"ConcatenateOp", "ConcatInDim"},
                                     {"ConvOp", "ConvGeneralDilated"}};

  StringRef op_name = op.getCppClassName();

  // Default case where the client builder method names closely follow the op
  // names in the dialect. For e.g., AddOp -> xla::Add method.
  if (!kOpToXLABuilderMap->count(op_name)) return op_name.drop_back(2);

  // Otherwise, if the op to client builder method mapping is provided.
  return kOpToXLABuilderMap->lookup(op_name);
}

static void BuildOperator(const Operator& op, raw_ostream& os) {
  os << "mlir::LogicalResult ExportXlaOp(" << op.getCppNamespace()
     << "::" << op.getCppClassName() << " op, OpLoweringContext ctx) {\n"
     << "  auto& value_map = *ctx.values;\n"
     << "  auto result = op.getResult();\n";

  // Build a conversion for each of the arguments.
  int operand_number = 0;
  for (int index : llvm::seq<int>(0, op.getNumArgs())) {
    auto arg = op.getArg(index);

    // Emit an argument for an operand.
    if (auto* operand_cst = arg.dyn_cast<NamedTypeConstraint*>()) {
      std::string xla_arg = "xla_arg_" + std::to_string(index);
      // Handle a non-variadic operand.
      if (!operand_cst->isVariableLength()) {
        os << "  xla::XlaOp " << xla_arg << ";\n";
        os << "  if (failed(GetXlaOp(*op.getODSOperands(" << operand_number++
           << ").begin(), value_map, &" << xla_arg << ", op)))\n";
        os << "    return mlir::failure();\n";
        continue;
      }

      // Otherwise, this is a varidiac operand list.
      os << "  std::vector<xla::XlaOp> " << xla_arg << ";\n"
         << "  for (auto operand : op.getODSOperands(" << operand_number++
         << ")) {\n";
      os << "    xla::XlaOp result;\n";
      os << "    if (failed(GetXlaOp(operand, value_map, &result, op)))\n";
      os << "      return mlir::failure();\n";
      os << "    " << xla_arg << ".push_back(result);\n";
      os << "  }\n";
      continue;
    }

    // Otherwise, this is an attribute.
    auto named_attr = arg.get<NamedAttribute*>();
    os << "  auto xla_arg_" << index << " = "
       << GetDefaultAttrExport(*named_attr) << "(op.get"
       << convertToCamelFromSnakeCase(op.getArgName(index),
                                      /*capitalizeFirst=*/true)
       << "());\n";
  }

  // Emit call to client API
  os << "  auto xla_result = xla::" << GetClientBuilder(op) << "(";

  // If all operands are variadic, then pass the builder explicitly to xla
  // client API call
  if (op.getNumOperands() == op.getNumVariableLengthOperands()) {
    os << "ctx.builder";
    if (op.getNumArgs() != 0) os << ", ";
  }

  // Emit each of the arguments.
  interleaveComma(llvm::seq<int>(0, op.getNumArgs()), os,
                  [&](int i) { os << "Unwrap(xla_arg_" << i << ')'; });
  os << ");\n";

  os << "  value_map[result] = xla_result;\n";
  os << "  return mlir::success();\n";
  os << "}\n";
}

// The function below has a non-constant reference as that is required by LLVM's
// TableGenMain.
// NOLINTNEXTLINE
static bool OperatorWritersMain(raw_ostream& os, const RecordKeeper& records) {
  // Get the list of operations that need a custom HLO converter.
  const auto* custom_convert_op_defs = llvm::dyn_cast_or_null<llvm::ListInit>(
      records.getGlobal("CustomHloConverterOps"));
  if (!custom_convert_op_defs) {
    llvm::errs() << "Failed to get CustomHloConverterOps list\n";
    return false;
  }
  // Convert the list to a set for faster lookups.
  std::unordered_set<std::string> custom_convert_op_names;
  for (const auto* op_def : custom_convert_op_defs->getElements())
    custom_convert_op_names.insert(op_def->getAsString());

  // Get the list of StableHLO operations that are allowed to be directly
  // converted to HLO without intermediate MHLO step.
  const auto* hlo_conversion_allowed_op_defs =
      llvm::dyn_cast_or_null<llvm::ListInit>(
          records.getGlobal("HloConversionAllowedOps"));
  if (!hlo_conversion_allowed_op_defs) {
    llvm::errs() << "Failed to get HloConversionAllowedOps list\n";
    return false;
  }
  // Convert the list to a set for faster lookups.
  absl::flat_hash_set<std::string> hlo_conversion_allowed_op_names;
  for (const auto* op_def : hlo_conversion_allowed_op_defs->getElements())
    hlo_conversion_allowed_op_names.insert(op_def->getAsString());

  emitSourceFileHeader("MLIR XLA Builders", os);

  // Emit all the HLO writers.
  std::array<StringRef, 2> dialect_defs = {"MHLO_Op", "StableHLO_Op"};
  for (auto dialect_def : dialect_defs) {
    for (const auto* def : records.getAllDerivedDefinitions(dialect_def)) {
      Operator op(def);

      if (dialect_def == "StableHLO_Op" &&
          !(hlo_conversion_allowed_op_names.contains(def->getName().str()))) {
        continue;
      }

      if (custom_convert_op_names.count(def->getName().str()) > 0) continue;

      BuildOperator(op, os);
    }
  }

  // Emit a function to generate an XLA operation for the operations with
  // auto-generated builders.
  os << "mlir::LogicalResult ExportXlaOperator(\n"
        "mlir::Operation* op, OpLoweringContext lowering_context) {\n\n";

  // Create a scoped object to assign sharding to generated XLA ops. Any HLO
  // can have an attribute of "sharding".
  os << "  xla::XlaScopedShardingAssignment sharding(lowering_context.builder, "
        "CreateOpShardingFromAttribute(op));\n\n";

  // Create a scoped object to assign frontend attributes to generated XLA ops.
  // Any HLO can have an attribute of "frontend_attributes", which are used to
  // pass hints / configuration options.
  os << "  xla::XlaScopedFrontendAttributesAssignment "
        "frontend_attributes(lowering_context.builder, "
        "CreateXlaFrontendAttributesFromOp(op));\n\n";

  // Create a scoped object to assign op metadata to generated XLA ops.
  os << "  xla::XlaScopedOpMetadataAssignment "
        "op_metadata(lowering_context.builder, "
        "mlir::mhlo::CreateOpMetadataFromLocation("
        "op, lowering_context.frame_index_builder));\n\n";

  // Create a scoped object to assign original values to generated XLA ops.
  os << "  xla::XlaScopedOriginalValueAssignment "
        "original_value(lowering_context.builder, "
        "CreateOriginalValueFromOp(op));\n\n";

  // Retrieve all the definitions derived from MHLO_Op and sort by record name.
  for (auto dialect_def : dialect_defs) {
    for (const auto* def : records.getAllDerivedDefinitions(dialect_def)) {
      // Skip operations that have a custom exporter.
      Operator op(def);

      if (dialect_def == "StableHLO_Op" &&
          !(hlo_conversion_allowed_op_names.contains(def->getName().str()))) {
        continue;
      }

      // Cast to the current operation and build the exporter.
      os << "  if (auto xla_op = llvm::dyn_cast<" << op.getCppNamespace()
         << "::" << op.getCppClassName() << ">(op)) {\n";
      os << "    return ";

      if (custom_convert_op_names.count(def->getName().str()) > 0)
        os << op.getCppNamespace() << "::";

      os << "ExportXlaOp(xla_op, lowering_context);\n";
      os << "  }\n";
    }
  }
  os << "  return mlir::failure();\n"
        "}\n";
  return false;
}

int main(int argc, char** argv) {
  llvm::InitLLVM y(argc, argv);
  llvm::cl::ParseCommandLineOptions(argc, argv);
  return TableGenMain(argv[0], &OperatorWritersMain);
}
