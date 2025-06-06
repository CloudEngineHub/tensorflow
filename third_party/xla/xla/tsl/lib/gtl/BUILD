load("//xla/tsl:tsl.bzl", "internal_visibility")
load("//xla/tsl:tsl.default.bzl", "filegroup")
load(
    "//xla/tsl/platform:build_config.bzl",
    "tsl_cc_test",
)
load(
    "//xla/tsl/platform:rules_cc.bzl",
    "cc_library",
)

package(
    # copybara:uncomment default_applicable_licenses = ["//tensorflow:license"],
    default_visibility = internal_visibility([
        # tensorflow/core:lib effectively exposes all targets under tensorflow/core/lib/**
        "//tensorflow/core:__pkg__",
        # tensorflow/core/lib/strings:proto_serialization uses on gtl:inlined_vector
        "//tensorflow/core/lib/strings:__pkg__",
        "//xla/tsl/lib/strings:__pkg__",
        # tensorflow/core/framework uses map_util, and flatmap
        "//tensorflow/core/framework:__pkg__",
        "//xla/tsl/framework:__pkg__",
        "//xla/tsl/platform/cloud:__pkg__",
        # tensorflow/core/util uses inlined_vector
        "//tensorflow/core/util:__pkg__",
        # tensorflow/core/tfrt/utils uses inlined_vector
        "//tensorflow/core/tfrt/utils:__pkg__",
        # tensorflow/examples/custom_ops_doc/simple_hash_table uses map_util
        "//tensorflow/examples/custom_ops_doc/simple_hash_table:__pkg__",
        "//xla:__subpackages__",
        "//tensorflow/core/lib/gtl:__subpackages__",
        "//xla/tsl/distributed_runtime/rpc:__pkg__",
        "//xla/tsl/profiler/utils:__pkg__",
        "//tensorflow/core/profiler/convert:__pkg__",
        # xprof /convert and /utils uses map_util and top_n
        "//third_party/xprof/convert:__pkg__",
        "//third_party/xprof/utils:__pkg__",
    ]),
    licenses = ["notice"],
)

# Todo(bmzhao): Remaining targets to add to this BUILD file are: all tests.

cc_library(
    name = "compactptrset",
    hdrs = ["compactptrset.h"],
    deps = [
        ":flatset",
        "//xla/tsl/util:safe_reinterpret_cast",
    ],
)

cc_library(
    name = "flatmap",
    hdrs = ["flatmap.h"],
    deps = [
        ":flatrep",
        "//xla/tsl/platform:logging",
        "//xla/tsl/platform:types",
        "@local_tsl//tsl/platform:hash",
    ],
)

cc_library(
    name = "flatrep",
    hdrs = ["flatrep.h"],
    deps = [
        "//xla/tsl/platform:types",
        "@com_google_absl//absl/base:prefetch",
    ],
)

cc_library(
    name = "flatset",
    hdrs = ["flatset.h"],
    deps = [
        ":flatrep",
        "//xla/tsl/platform:logging",
        "//xla/tsl/platform:types",
        "@local_tsl//tsl/platform:hash",
    ],
)

cc_library(
    name = "inlined_vector",
    hdrs = ["inlined_vector.h"],
    deps = [
        "//xla/tsl/platform:macros",
        "//xla/tsl/platform:types",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/container:inlined_vector",
    ],
)

cc_library(
    name = "int_type",
    hdrs = ["int_type.h"],
    deps = [
        "//xla/tsl/platform:macros",
        "//xla/tsl/platform:types",
    ],
)

cc_library(
    name = "iterator_range",
    hdrs = ["iterator_range.h"],
)

cc_library(
    name = "map_util",
    srcs = [
        "map_util.h",
        "//xla/tsl/lib/gtl/subtle:map_traits",
    ],
    hdrs = ["map_util.h"],
)

cc_library(
    name = "value_or_die",
    srcs = ["value_or_die.cc"],
    hdrs = ["value_or_die.h"],
    deps = [
        "//xla/tsl/platform:logging",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/status:statusor",
    ],
)

filegroup(
    name = "legacy_lib_gtl_headers",
    srcs = [
        "compactptrset.h",
        "flatmap.h",
        "flatset.h",
        "inlined_vector.h",
        "iterator_range.h",
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

filegroup(
    name = "legacy_lib_internal_public_gtl_headers",
    srcs = [
        "int_type.h",
        "map_util.h",
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

filegroup(
    name = "legacy_lib_test_internal_headers",
    srcs = [
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

filegroup(
    name = "legacy_android_gif_internal_headers",
    srcs = [
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

# Export source files needed for mobile builds, which do not use granular targets.
filegroup(
    name = "mobile_srcs_no_runtime",
    srcs = [
        "flatmap.h",
        "flatrep.h",
        "inlined_vector.h",
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
        "@local_tsl//tsl:__subpackages__",
    ]),
)

filegroup(
    name = "mobile_srcs_only_runtime",
    srcs = [
        "flatset.h",
        "int_type.h",
        "iterator_range.h",
        "map_util.h",
        "//xla/tsl/lib/gtl/subtle:map_traits",
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

filegroup(
    name = "legacy_lib_gtl_all_headers",
    srcs = [
        "compactptrset.h",
        "flatmap.h",
        "flatrep.h",
        "flatset.h",
        "inlined_vector.h",
        "int_type.h",
        "iterator_range.h",
        "map_util.h",
        "value_or_die.h",
        "//xla/tsl/lib/gtl/subtle:map_traits",
    ],
    visibility = internal_visibility([
        "//tensorflow/core:__pkg__",
        "//tensorflow/core/lib/gtl:__pkg__",
    ]),
)

tsl_cc_test(
    name = "tsl_lib_gtl_tests",
    srcs = [
        "compactptrset_test.cc",
        "flatmap_test.cc",
        "flatset_test.cc",
        "int_type_test.cc",
        "iterator_range_test.cc",
        "map_util_test.cc",
        "value_or_die_test.cc",
    ],
    deps = [
        ":compactptrset",
        ":flatmap",
        ":flatset",
        ":int_type",
        ":iterator_range",
        ":map_util",
        ":value_or_die",
        "//xla/tsl/platform:macros",
        "//xla/tsl/platform:test",
        "//xla/tsl/platform:types",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/status:statusor",
        "@com_google_googletest//:gtest_main",
        "@local_tsl//tsl/platform:hash",
    ],
)
