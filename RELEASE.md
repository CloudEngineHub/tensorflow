# Release 2.21.0

## TensorFlow

<INSERT SMALL BLURB ABOUT RELEASE FOCUS AREA AND POTENTIAL TOOLCHAIN CHANGES>

### Breaking Changes

* <DOCUMENT BREAKING CHANGES HERE>
* <THIS SECTION SHOULD CONTAIN API, ABI AND BEHAVIORAL BREAKING CHANGES>

### Known Caveats

* <CAVEATS REGARDING THE RELEASE (BUT NOT BREAKING CHANGES).>
* <ADDING/BUMPING DEPENDENCIES SHOULD GO HERE>
* <KNOWN LACK OF SUPPORT ON SOME PLATFORM, SHOULD GO HERE>

### Major Features and Improvements

*   <IF RELEASE CONTAINS MULTIPLE FEATURES FROM SAME AREA, GROUP THEM TOGETHER>

* `tf.lite`
    * Adds int8 and int16x8 support for SQRT operator.

### Bug Fixes and Other Changes

* <SIMILAR TO ABOVE SECTION, BUT FOR OTHER IMPORTANT CHANGES / BUG FIXES>
* <IF A CHANGE CLOSES A GITHUB ISSUE, IT SHOULD BE DOCUMENTED HERE>
* <NOTES SHOULD BE GROUPED PER AREA>

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

<INSERT>, <NAME>, <HERE>, <USING>, <GITHUB>, <HANDLE>

# Release 2.20.0

## TensorFlow

### Breaking Changes

* The `tensorflow-io-gcs-filesystem` package is now optional, due its uncertain, and limited support. To install it alongside `tensorflow`, run `pip install "tensorflow[gcs-filesystem]"`.

### Major Features and Improvements

* `tf.data`
    * Adds `autotune.min_parallelism` to `tf.data.Options` to enable faster input pipeline warm up.
* `tf.lite`
    * tf.lite will be deprecated, in favor of the new repo https://github.com/google-ai-edge/LiteRT.
    * The duplicated source will also be removed from the TF repo.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

1ndig0, 372046933, abhinav, afzpatel, Akhil Goel, Alain Carlucci, Aleksei, Alen Huang, Alex, Amrinfathima-Mcw, Aravindh Balaji, Armand Picard, Aseem Athale, Ashiq Imran, Assoap, Chao, Chase Riley Roberts, Chenhao Jiang, chunhsue, chuntl, Chunyu Jin, Corentin Kerisit, Crefeda Rodrigues, dependabot[bot], Dragan Mladjenovic, Elen Kalda, Felix Thomasmathibalan, gabeweisz, Gauri Deshpande, Georg Stefan Schmid, Guozhong Zhuang, Harsha H S, Harshith_N, Hugo Mano, Ian Tayler Lessa, Jack Wolfard, James Ward, Jane Liu, Jaroslav Sevcik, JD, Jerry-Ge, Jian Li, Jinzhe Zeng, jiunkaiy, Johannes Reifferscheid, johnnkp, junweifu, Kanvi Khanna, Kasper Nielsen, Linzb-Xyz, Luke Hutton, Mahmoud Abuzaina, Mathew Odden, Michael Platings, misterBart, Mitchell Ludwig, Mmakevic-Amd, mraunak, NamanAgarwal0905, Namrata-Ibm, Neuropilot-Captain, nhatle, Nicholas Wilson, Nikhil Shinde, Olli Lupton, Patrick J. Lopresti, Pavel Emeliyanenko, Pearu Peterson, pemeliya, Peng Sun, Philipp Hack, Pratham-Mcw, RahulSudarMCW, RakshithGB, Rakshithgb-Fujitsu, RuslanSemchenko, Ruturaj Vaidya, Sachin Muradi, sandeepgupta12, SaoirseARM, Sergey Kozub, Sevin Fide Varoglu, Shanbin Ke, Shaogang Wang, Shraiysh Vaishay, Siddhartha Menon, spiao, Swatheesh Muralidharan, Tai Ly, Terry Sun, Thibaut Goetghebuer-Planchon, Thomas Dickerson, Tilak, Tj Xu, Trevor Morris, tyb0807, vfdev, Wei Wang, wokron, wondertx, Xuefei Jiang, Yaowei Zhou, Zentrik, Ziyun Cheng, Zoranjovanovic-Ns

# Release 2.19.0

## TensorFlow

### Breaking Changes

* `LiteRT`, a.k.a. `tf.lite`:
    * C++ API:
      * The public constants `tflite::Interpreter:kTensorsReservedCapacity`
        and `tflite::Interpreter:kTensorsCapacityHeadroom` are now const
        references, rather than `constexpr` compile-time constants.
        (This is to enable better API compatibility for TFLite in Play services
        while preserving the implementation flexibility to change the values of
        these constants in the future.)
    * Python API:
      * `tf.lite.Interpreter` gives deprecation warning redirecting to its new
        location at `ai_edge_litert.interpreter`, as the API
        `tf.lite.Interpreter` will be deleted in TF 2.20. See the
        [migration guide](https://ai.google.dev/edge/litert/migration) for
        details.

### Known Caveats

### Major Features and Improvements

*  `tf.lite`
    * `tfl.Cast` op is now supporting `bfloat16` in runtime kernel.

### Bug Fixes and Other Changes

* We have stopped publishing `libtensorflow` packages but it can still be unpacked from the PyPI package.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Akhil Goel, akhilgoe, Alain Flaischer, Alex, Alexander Pivovarov, Alexander Shadchin, Alexis Praga, Amrinfathima-Mcw, Andrey Pikas, Andrey Portnoy, Ankur Singh, Ashiq Imran, Assoap, c8ef, charleshofer, Chase Riley Roberts, Chenhao Jiang, Chongyun Lee, Claudio Desouza, Corentin Godeau, Crefeda Rodrigues, Danny Burrow, dependabot[bot], Dimitris Vardoulakis, Dragan Mladjenovic, Elfie Guo, Emmanuel Ferdman, fiberflow, flyingcat, Gary Yi-Hung Chen, Georg Stefan Schmid, Gerwout Van Der Veen, Harsha H S, Harshit Monish, Hugo Mano, i.Pear, Ilia Sergachev, Jane Liu, Jaroslav Sevcik, Jc (Jonathan Chen), Jerry Ge, Jian Li, johndoknjas, Johnny, Jonathan Albrecht, Kaixi Hou, Kanvi Khanna, keerthanakadiri, Kevin Ji, Kiran Sai Ramineni, kwoncy2020, LakshmiKalaKadali, Lee, Jun Seok, Mahmoud Abuzaina, Matt Bahr, mayuyuace, Melissa Weber Mendonça, misterBart, Mkarpushin-Enhancelab, Mmakevic-Amd, mraunak, nallave, Nayana Thorat, Nayana-Ibm, nick.camarena, Nicolas Castet, Om Thakkar, oyzh, Parsa Homayouni, Patrick Toulme, Pavel Emeliyanenko, Pavithra Eswaramoorthy, Pearu Peterson, pemeliya, Philipp Hack, Ravi Kumar Soni, redwrasse, Ruturaj Vaidya, Sallenkey-Wei, Sandeep Gupta, Sergey Kozub, Sevin Fide Varoglu, Shanbin Ke, Shaogang Wang, Shixin Zhang, Shraiysh, Shu Wang, Silvio Traversaro, snadampal, Sunita Nadampalli, Tai Ly, Tatwai Chong, tchatow, tdanyluk, Terry Sun, Tilak, Tj Xu, Trevor Morris, Twice, vfdev, Vladimir Silyaev, Weisser, Pascal, wokron, Won Jeon, Xuefei Jiang, Zentrik, Zoranjovanovic-Ns

# Release 2.18.0

## TensorFlow

### Breaking Changes

* `tf.lite`
    * C API:
      * An optional, fourth parameter was added `TfLiteOperatorCreate` as a step forward towards a cleaner API for `TfLiteOperator`. Function `TfLiteOperatorCreate` was added recently, in TensorFlow Lite version 2.17.0, released on 7/11/2024, and we do not expect there will be much code using this function yet. Any code breakages can be easily resolved by passing nullptr as the new, 4th parameter.

* TensorRT support is disabled in CUDA builds for code health improvement.

* TensorFlow now supports and is compiled with NumPy 2.0 by default. Please see the [NumPy 2 release notes](https://numpy.org/doc/stable/release/2.0.0-notes.html) and the [NumPy 2 migration guide](https://numpy.org/devdocs/numpy_2_0_migration_guide.html#numpy-2-migration-guide).
  * Note that NumPy's type promotion rules have been changed(See [NEP 50](https://numpy.org/neps/nep-0050-scalar-promotion.html#nep50)for details). This may change the precision at which computations happen, leading either to type errors or to numerical changes to results.
  * Tensorflow will continue to support NumPy 1.26 until 2025, aligning with community standard deprecation timeline [here](https://scientific-python.org/specs/spec-0000/).

* Hermetic CUDA support is added.

  Hermetic CUDA uses a specific downloadable version of CUDA instead of the user’s locally installed CUDA. Bazel will download CUDA, CUDNN and NCCL distributions, and then use CUDA libraries and tools as dependencies in various Bazel targets. This enables more reproducible builds for Google ML projects and supported CUDA versions.

* Remove the `EnumNamesXNNPackFlags` function in `tensorflow/lite/acceleration/configuration/configuration_generated.h`.

  This change is a bug fix in the automatically generated code. This change is automatically generated by the new flatbuffer generator. The flatbuffers library is updated to 24.3.25 in https://github.com/tensorflow/tensorflow/commit/c17d64df85a83c1bd0fd7dcc0b1230812b0d3d48. The new flatbuffers library includes the following change https://github.com/google/flatbuffers/pull/7813 which fixed a underlying flatbuffer code generator bug.


### Known Caveats

### Major Features and Improvements

*   `tf.lite`:
    *   The LiteRT [repo](https://github.com/google-ai-edge/LiteRT) is live (see [announcement](https://developers.googleblog.com/en/tensorflow-lite-is-now-litert/)), which means that in the coming months there will be changes to the development experience for TFLite. The TF Lite Runtime source will be moved later this year, and sometime after that we will start accepting contributions through that repo.
    *   SignatureRunner is now supported for models with no signatures.

### Bug Fixes and Other Changes

* `tf.data`
    * Add optional `synchronous` argument to `map`, to specify that the `map` should run synchronously, as opposed to be parallelizable when `options.experimental_optimization.map_parallelization=True`. This saves memory compared to setting `num_parallel_calls=1`.
    * Add optional `use_unbounded_threadpool` argument to `map`, to specify that the `map` should use an unbounded threadpool instead of the default pool that is based on the number of cores on the machine. This can improve throughput for map functions which perform IO or otherwise release the CPU.
    * Add [`tf.data.experimental.get_model_proto`](https://www.tensorflow.org/api_docs/python/tf/data/experimental/get_model_proto) to allow users to peek into the analytical model inside of a dataset iterator.

* `tf.lite`
    * `Dequantize` op supports `TensorType_INT4`.
        * This change includes per-channel dequantization.
    * Add support for `stablehlo.composite`.
    * `EmbeddingLookup` op supports per-channel quantization and `TensorType_INT4` values.
    * `FullyConnected` op supports `TensorType_INT16` activation and `TensorType_Int4` weight per-channel quantization.
    * Enable per-tensor quantization support in dynamic range quantization of `TRANSPOSE_CONV` layer. Fixes TFLite converter [bug](https://github.com/tensorflow/tensorflow/issues/76624).

* `tf.tensor_scatter_update`, `tf.tensor_scatter_add` and of other reduce types.
    * Support `bad_indices_policy`.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Akhil Goel, akhilgoe, Alexander Pivovarov, Amir Samani, Andrew Goodbody, Andrey Portnoy, Anthony Platanios, bernardoArcari, Brett Taylor, buptzyb, Chao, Christian Clauss, Cocoa, Daniil Kutz, Darya Parygina, dependabot[bot], Dimitris Vardoulakis, Dragan Mladjenovic, Elfie Guo, eukub, Faijul Amin, flyingcat, Frédéric Bastien, ganyu.08, Georg Stefan Schmid, Grigory Reznikov, Harsha H S, Harshit Monish, Heiner, Ilia Sergachev, Jan, Jane Liu, Jaroslav Sevcik, Kaixi Hou, Kanvi Khanna, Kristof Maar, Kristóf Maár, LakshmiKalaKadali, Lbertho-Gpsw, lingzhi98, MarcoFalke, Masahiro Hiramori, Mmakevic-Amd, mraunak, Nobuo Tsukamoto, Notheisz57, Olli Lupton, Pearu Peterson, pemeliya, Peyara Nando, Philipp Hack, Phuong Nguyen, Pol Dellaiera, Rahul Batra, Ruturaj Vaidya, sachinmuradi, Sergey Kozub, Shanbin Ke, Sheng Yang, shengyu, Shraiysh, Shu Wang, Surya, sushreebarsa, Swatheesh-Mcw, syzygial, Tai Ly, terryysun, tilakrayal, Tj Xu, Trevor Morris, Tzung-Han Juang, wenchenvincent, wondertx, Xuefei Jiang, Ye Huang, Yimei Sun, Yunlong Liu, Zahid Iqbal, Zhan Lu, Zoranjovanovic-Ns, Zuri Obozuwa

# Release 2.17.1

### Bug Fixes and Other Changes

* Add necessary header files in the aar library. These are needed if developers build apps with header files unpacked from tflite aar files from maven.
* Implement Name() for GCSWritableFile to fix the profiler trace viewer cache file generation.
* Fix `cstring.h` missing file issue with the Libtensorflow archive.

# Release 2.17.0

## TensorFlow

### Breaking Changes

* GPU
    * Support for NVIDIA GPUs with compute capability 5.x (Maxwell generation) has been removed from TF binary distributions (Python wheels).

### Major Features and Improvements

*   Add `is_cpu_target_available`, which indicates whether or not TensorFlow was built with support for a given CPU target. This can be useful for skipping target-specific tests if a target is not supported.

*   `tf.data`
    * Support `data.experimental.distribued_save`. `distribued_save` uses tf.data service (https://www.tensorflow.org/api_docs/python/tf/data/experimental/service) to write distributed dataset snapshots. The call is non-blocking and returns without waiting for the snapshot to finish. Setting `wait=True` to `tf.data.Dataset.load` allows the snapshots to be read while they are being written.

### Bug Fixes and Other Changes

* GPU
    * Support for NVIDIA GPUs with compute capability 8.9 (e.g. L4 & L40) has been added to TF binary distributions (Python wheels).
* Replace `DebuggerOptions` of TensorFlow Quantizer, and migrate to `DebuggerConfig` of StableHLO Quantizer.
* Add TensorFlow to StableHLO converter to TensorFlow pip package.
* TensorRT support: this is the last release supporting TensorRT. It will be removed in the next release.
* NumPy 2.0 support: TensorFlow is going to support NumPy 2.0 in the next release. It may break some edge cases of TensorFlow API usage.

* `tf.lite`
    * Quantization for `FullyConnected` layer is switched from per-tensor to per-channel scales for dynamic range quantization use case (`float32` inputs / outputs and `int8` weights). The change enables new quantization schema globally in the converter and inference engine. The new behaviour can be disabled via experimental flag `converter._experimental_disable_per_channel_quantization_for_dense_layers = True`.
    * C API:
        * The experimental `TfLiteRegistrationExternal` type has been renamed as `TfLiteOperator`, and likewise for the corresponding API functions.
    * The Python TF Lite Interpreter bindings now have an option `experimental_default_delegate_latest_features` to enable all default delegate features.
    * Flatbuffer version update:
        * `GetTemporaryPointer()` bug fixed.

* `tf.data`
    * Add `wait` to `tf.data.Dataset.load`. If `True`, for snapshots written with `distributed_save`, it reads the snapshot while it is being written. For snapshots written with regular `save`, it waits for the snapshot until it's finished. The default is `False` for backward compatibility. Users of `distributed_save` are recommended to set it to `True`.

* `tf.tpu.experimental.embedding.TPUEmbeddingV2`
    * Add `compute_sparse_core_stats` for sparse core users to profile the  data with this API to get the `max_ids` and `max_unique_ids`. These numbers will be needed to configure the sparse core embedding mid level api.
    * Remove the `preprocess_features` method since that's no longer needed.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abdulaziz Aloqeely, Ahmad-M-Al-Khateeb, Akhil Goel, akhilgoe, Alexander Pivovarov, Amir Samani, Andrew Goodbody, Andrey Portnoy, Ashiq Imran, Ben Olson, Chao, Chase Riley Roberts, Clemens Giuliani, dependabot[bot], Dimitris Vardoulakis, Dragan Mladjenovic, ekuznetsov139, Elfie Guo, Faijul Amin, Gauri1 Deshpande, Georg Stefan Schmid, guozhong.zhuang, Hao Wu, Haoyu (Daniel), Harsha H S, Harsha Hs, Harshit Monish, Ilia Sergachev, Jane Liu, Jaroslav Sevcik, Jinzhe Zeng, Justin Dhillon, Kaixi Hou, Kanvi Khanna, LakshmiKalaKadali, Learning-To-Play, lingzhi98, Lu Teng, Matt Bahr, Max Ren, Meekail Zain, Mmakevic-Amd, mraunak, neverlva, nhatle, Nicola Ferralis, Olli Lupton, Om Thakkar, orangekame3, ourfor, pateldeev, Pearu Peterson, pemeliya, Peng Sun, Philipp Hack, Pratik Joshi, prrathi, rahulbatra85, Raunak, redwrasse, Robert Kalmar, Robin Zhang, RoboSchmied, Ruturaj Vaidya, sachinmuradi, Shawn Wang, Sheng Yang, Surya, Thibaut Goetghebuer-Planchon, Thomas Preud'Homme, tilakrayal, Tj Xu, Trevor Morris, wenchenvincent, Yimei Sun, zahiqbal, Zhu Jianjiang, Zoranjovanovic-Ns

# Release 2.16.2

### Bug Fixes and Other Changes

*  Fixed: Incorrect dependency metadata in TensorFlow Python packages causing installation failures with certain package managers such as Poetry.

# Release 2.16.1

## TensorFlow

*   TensorFlow Windows Build:

    *   Clang is now the default compiler to build TensorFlow CPU wheels on the
        Windows Platform starting with this release. The currently supported
        version is LLVM/clang 17. The official Wheels-published on PyPI will be
        based on Clang; however, users retain the option to build wheels using
        the MSVC compiler following the steps mentioned in
        https://www.tensorflow.org/install/source_windows as has been the case
        before

### Breaking Changes

*   `tf.summary.trace_on` now takes a `profiler_outdir` argument. This must be
    set if `profiler` arg is set to `True`.

    *   `tf.summary.trace_export`'s `profiler_outdir` arg is now a no-op.
        Enabling the profiler now requires setting `profiler_outdir` in
        `trace_on`.

*   `tf.estimator`

    *   The tf.estimator API is removed.

*   Keras 3.0 will be the default Keras version. You may need to update your
    script to use Keras 3.0.

*   Please refer to the new Keras documentation for Keras 3.0
    (https://keras.io/keras_3).

*   To continue using Keras 2.0, do the following.

*   1.  Install tf-keras via pip install tf-keras~=2.16

    1.  To switch tf.keras to use Keras 2 (tf-keras), set the environment
        variable TF_USE_LEGACY_KERAS=1 directly or in your python program by
        import os;os.environ["TF_USE_LEGACY_KERAS"]=1. Please note that this
        will set it for all packages in your Python runtime program

*   1.  Change import of keras from tensorflow as follows
*   import tensorflow.keras as keras and import keras to import tf_keras as
    keras
* **Apple Silicon users:** If you previously installed TensorFlow using
    `pip install tensorflow-macos`, please update your installation method. Use
    `pip install tensorflow` from now on.
* **Mac x86 users:** Mac x86 builds are being deprecated and will no longer be
  released as a Pip package from TF 2.17 onwards.

### Known Caveats

*  Full aarch64 Linux and Arm64 macOS wheels are now published to the
  `tensorflow` pypi repository and no longer redirect to a separate package.

### Major Features and Improvements

*  Support for Python 3.12 has been added.
*  [tensorflow-tpu](https://pypi.org/project/tensorflow-tpu/) package is now
   available for easier TPU based installs.
*  TensorFlow pip packages are now built with CUDA 12.3 and cuDNN 8.9.7
*  Added experimental support for float16 auto-mixed precision using the new AMX-FP16 instruction set on X86 CPUs.


### Bug Fixes and Other Changes

* `tf.lite`
    * Added support for `stablehlo.gather`.
    * Added support for `stablehlo.add`.
    * Added support for `stablehlo.multiply`.
    * Added support for `stablehlo.maximum`.
    * Added support for `stablehlo.minimum`.
    * Added boolean parameter support for `tfl.gather_nd`.
    * C API:
        * New API functions:
            * `tensorflow/lite/c/c_api_experimental.h`:
                * `TfLiteInterpreterGetVariableTensorCount`
                * `TfLiteInterpreterGetVariableTensor`
                * `TfLiteInterpreterGetBufferHandle`
                * `TfLiteInterpreterSetBufferHandle`
            * `tensorflow/lite/c/c_api_opaque.h`:
                * `TfLiteOpaqueTensorSetAllocationTypeToDynamic`
        * API functions promoted from experimental to stable:
            * `tensorflow/lite/c/c_api.h`:
                * `TfLiteInterpreterOptionsEnableCancellation`
                * `TfLiteInterpreterCancel`
    * C++ API:
        * New virtual methods in the `tflite::SimpleDelegateInterface` class in `tensorflow/lite/delegates/utils/simple_delegate.h`,
          and likewise in the `tflite::SimpleOpaqueDelegateInterface` class in `tensorflow/lite/delegates/utils/simple_opaque_delegate.h`:
            * `CopyFromBufferHandle`
            * `CopyToBufferHandle`
            * `FreeBufferHandle`

* `tf.train.CheckpointOptions` and `tf.saved_model.SaveOptions`
    * These now take in a new argument called `experimental_sharding_callback`.
      This is a callback function wrapper that will be executed to determine how
      tensors will be split into shards when the saver writes the checkpoint
      shards to disk. `tf.train.experimental.ShardByTaskPolicy` is the default
      sharding behavior, but `tf.train.experimental.MaxShardSizePolicy` can be
      used to shard the checkpoint with a maximum shard file size. Users with
      advanced use cases can also write their own custom
      `tf.train.experimental.ShardingCallback`s.

* `tf.train.CheckpointOptions`
    * Added `experimental_skip_slot_variables` (a boolean option) to skip
    restoring of optimizer slot variables in a checkpoint.

*   `tf.saved_model.SaveOptions`

    * `SaveOptions` now takes a new argument called
      `experimental_debug_stripper`. When enabled, this strips the debug nodes
      from both the node defs and the function defs of the graph. Note that
      this currently only strips the `Assert` nodes from the graph and
      converts them into `NoOp`s instead.

*   `tf.data`

    * `tf.data` now has an `autotune_options.initial_parallelism` option to
      control the initial parallelism setting used by autotune before the data
      pipeline has started running. The default is 16. A lower value reduces
      initial memory usage, while a higher value improves startup time.

## Keras

*  `keras.layers.experimental.DynamicEmbedding`
    * Added `DynamicEmbedding` Keras layer
    * Added 'UpdateEmbeddingCallback`
    * `DynamicEmbedding` layer allows for the continuous updating of the
      vocabulary and embeddings during the training process. This layer
      maintains a hash table to track the most up-to-date vocabulary based on
      the inputs received by the layer and the eviction policy. When this layer
      is used with an `UpdateEmbeddingCallback`, which is a time-based callback,
      the vocabulary lookup tensor is updated at the time interval set in the
      `UpdateEmbeddingCallback` based on the most up-to-date vocabulary hash
      table maintained by the layer. If this layer is not used in conjunction
      with `UpdateEmbeddingCallback` the behavior of the layer would be same as
      `keras.layers.Embedding`.
*  `keras.optimizers.Adam`
    * Added the option to set adaptive epsilon to match implementations with Jax
      and PyTorch equivalents.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aakar Dwivedi, Akhil Goel, Alexander Grund, Alexander Pivovarov, Andrew Goodbody, Andrey Portnoy, Aneta Kaczyńska, AnetaKaczynska, ArkadebMisra, Ashiq Imran, Ayan Moitra, Ben Barsdell, Ben Creech, Benedikt Lorch, Bhavani Subramanian, Bianca Van Schaik, Chao, Chase Riley Roberts, Connor Flanagan, David Hall, David Svantesson, David Svantesson-Yeung, dependabot[bot], Dr. Christoph Mittendorf, Dragan Mladjenovic, ekuznetsov139, Eli Kobrin, Eugene Kuznetsov, Faijul Amin, Frédéric Bastien, fsx950223, gaoyiyeah, Gauri1 Deshpande, Gautam, Giulio C.N, guozhong.zhuang, Harshit Monish, James Hilliard, Jane Liu, Jaroslav Sevcik, jeffhataws, Jerome Massot, Jerry Ge, jglaser, jmaksymc, Kaixi Hou, kamaljeeti, Kamil Magierski, Koan-Sin Tan, lingzhi98, looi, Mahmoud Abuzaina, Malik Shahzad Muzaffar, Meekail Zain, mraunak, Neil Girdhar, Olli Lupton, Om Thakkar, Paul Strawder, Pavel Emeliyanenko, Pearu Peterson, pemeliya, Philipp Hack, Pierluigi Urru, Pratik Joshi, radekzc, Rafik Saliev, Ragu, Rahul Batra, rahulbatra85, Raunak, redwrasse, Rodrigo Gomes, ronaghy, Sachin Muradi, Shanbin Ke, shawnwang18, Sheng Yang, Shivam Mishra, Shu Wang, Strawder, Paul, Surya, sushreebarsa, Tai Ly, talyz, Thibaut Goetghebuer-Planchon, Tj Xu, Tom Allsop, Trevor Morris, Varghese, Jojimon, weihanmines, wenchenvincent, Wenjie Zheng, Who Who Who, Yasir Ashfaq, yasiribmcon, Yoshio Soma, Yuanqiang Liu, Yuriy Chernyshov

# Release 2.15.1

### Bug Fixes and Other Changes

*  `ml_dtypes` runtime dependency is updated to `0.3.1` to fix package conflict issues

# Release 2.15.0.post1

## TensorFlow

### Bug Fixes and Other Changes

*   Hot-fix was needed for an issue affecting the TensorFlow installation
    process.
    *   TensorFlow 2.15.0 Python package was requesting `tensorrt`-related
        packages that cannot be found unless the user installs them beforehand
        or provides additional installation flags.
    *   This dependency affected anyone installing TensorFlow 2.15 alongside
        NVIDIA CUDA dependencies via `pip install tensorflow[and-cuda]`.
    *   Depending on the installation method, TensorFlow 2.14 would be installed
        instead of 2.15, or users could receive an installation error due to
        those missing dependencies.
*   TensorFlow 2.15.0.post1 is being released for Linux x86_64 to resolve this
    issue as quickly as possible.
    *   This version removes the `tensorrt` Python package dependencies from the
        tensorflow[and-cuda] installation method to ensure `pip install
        tensorflow[and-cuda]` works as originally intended for TensorFlow 2.15.
    *   Support for TensorRT is otherwise unaffected as long as TensorRT is
        already installed on the system.
*   Using .post1 instead of a full minor release allowed us to push this release
    out quickly. However, please note the following caveat:
    *   For users wishing to pin their Python dependency in a requirements file
        or other situation, under Python's version specification rules,
        `tensorflow[and-cuda]==2.15.0` will not install this fixed version.
        Please use `==2.15.0.post1` to specify this exact version on Linux
        platforms, or a fuzzy version specification, such as `==2.15.*`, to
        specify the most recent compatible version of TensorFlow 2.15 on all
        platforms.

# Release 2.15.0

## TensorFlow

### Breaking Changes

* `tf.types.experimental.GenericFunction` has been renamed to `tf.types.experimental.PolymorphicFunction`.

### Known Caveats

### Major Features and Improvements

*   [oneDNN CPU performance optimizations](https://github.com/tensorflow/community/blob/master/rfcs/20210930-enable-onednn-ops.md)
    Windows x64 & x86.

    *   **Windows x64 & x86 packages:**
        *   oneDNN optimizations are *enabled by default* on X86 CPUs
    *   To explicitly enable or disable oneDNN optimizations, set the environment variable `TF_ENABLE_ONEDNN_OPTS` to `1` (enable) or `0` (disable) before running TensorFlow. To fall back to default settings, unset the environment variable.
    *   oneDNN optimizations can yield slightly different numerical results compared to when oneDNN optimizations are disabled due to floating-point round-off errors from
 different computation approaches and orders.
    *   To verify if oneDNN optimizations are on, look for a message with *"oneDNN custom operations are on"* in the log. If the exact phrase is not there, it means they are off.

* Making the `tf.function` type system fully available:

    * `tf.types.experimental.TraceType` now allows custom tf.function inputs to declare Tensor decomposition and type casting support.
    * Introducing `tf.types.experimental.FunctionType` as the comprehensive representation of the signature of `tf.function` callables. It can be accessed through the `function_type` property of `tf.function`s and `ConcreteFunction`s. See the `tf.types.experimental.FunctionType` documentation for more details.

* Introducing `tf.types.experimental.AtomicFunction` as the fastest way to perform TF computations in Python.

    * Can be accessed through `inference_fn` property of `ConcreteFunction`s
    * Does not support gradients.
    * See `tf.types.experimental.AtomicFunction` documentation for how to call and use it.

*   `tf.data`:

    *   Moved option `warm_start` from `tf.data.experimental.OptimizationOptions` to `tf.data.Options`.

*   `tf.lite`:

    *   `sub_op` and `mul_op` support broadcasting up to 6 dimensions.

    *  The `tflite::SignatureRunner` class, which provides support for named parameters and for multiple named computations within a single TF Lite model, is no longer considered experimental. Likewise for the following signature-related methods of `tflite::Interpreter`:

       *   `tflite::Interpreter::GetSignatureRunner`
       *   `tflite::Interpreter::signature_keys`
       *   `tflite::Interpreter::signature_inputs`
       *   `tflite::Interpreter::signature_outputs`
       *   `tflite::Interpreter::input_tensor_by_signature`
       *   `tflite::Interpreter::output_tensor_by_signature`

    *  Similarly, the following signature runner functions in the TF Lite C API are no longer considered experimental:

       *    `TfLiteInterpreterGetSignatureCount`
       *    `TfLiteInterpreterGetSignatureKey`
       *    `TfLiteInterpreterGetSignatureRunner`
       *    `TfLiteSignatureRunnerAllocateTensors`
       *    `TfLiteSignatureRunnerGetInputCount`
       *    `TfLiteSignatureRunnerGetInputName`
       *    `TfLiteSignatureRunnerGetInputTensor`
       *    `TfLiteSignatureRunnerGetOutputCount`
       *    `TfLiteSignatureRunnerGetOutputName`
       *    `TfLiteSignatureRunnerGetOutputTensor`
       *    `TfLiteSignatureRunnerInvoke`
       *    `TfLiteSignatureRunnerResizeInputTensor`

    * New C API function `TfLiteExtensionApisVersion` added to `tensorflow/lite/c/c_api.h`.

    * Add int8 and int16x8 support for RSQRT operator

* Android NDK r25 is supported.

### Bug Fixes and Other Changes

*   Add TensorFlow Quantizer to TensorFlow pip package.

*   `tf.sparse.segment_sum` `tf.sparse.segment_mean` `tf.sparse.segment_sqrt_n` `SparseSegmentSum/Mean/SqrtN[WithNumSegments]`

    *   Added `sparse_gradient` option (default=false) that makes the gradient of these functions/ops sparse (`IndexedSlices`) instead of dense (`Tensor`), using new `SparseSegmentSum/Mean/SqrtNGradV2` ops.

*   `tf.nn.embedding_lookup_sparse`

    *   Optimized this function for some cases by fusing internal operations.

*   `tf.saved_model.SaveOptions`

    *   Provided a new `experimental_skip_saver` argument which, if specified, will suppress the addition of `SavedModel`-native save and restore ops to the `SavedModel`, for cases where users already build custom save/restore ops and checkpoint formats for the model being saved, and the creation of the SavedModel-native save/restore ops simply cause longer model serialization times.

* Add ops to `tensorflow.raw_ops` that were missing.

* `tf.CheckpointOptions`
    * It now takes in a new argument called `experimental_write_callbacks`. These are callbacks that will be executed after a saving event finishes writing the checkpoint file.

* Add an option `disable_eager_executer_streaming_enqueue` to `tensorflow.ConfigProto.Experimental` to control the eager runtime's behavior around parallel remote function invocations; when set to `True`, the eager runtime will be allowed to execute multiple function invocations in parallel.

* `tf.constant_initializer`
    * It now takes a new argument called `support_partition`. If True, constant_initializers can create sharded variables. This is disabled by default, similar to existing behavior.

* `tf.lite`
    * Added support for `stablehlo.scatter`.

* `tf.estimator`
    * The tf.estimator API removal is in progress and will be targeted for the 2.16 release.

## Keras

* This will be the final release before the launch of Keras 3.0, when Keras will become multi-backend. For the compatibility page and other info, please see: https://github.com/keras-team/keras-core

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aiden Grossman, Akash Patel, Akhil Goel, Alexander Pivovarov, Andrew Goodbody, Ayan Moitra, Ben Barsdell, Ben Olson, Bhavani Subramanian, Boian Petkantchin, Bruce Lai, Chao Chen, Christian Steinmeyer, cjflan, David Korczynski, Donghak Park, Dragan Mladjenovic, Eli Kobrin, Fadi Arafeh, Feiyue Chen, Frédéric Bastien, guozhong.zhuang, halseycamilla, Harshavardhan Bellamkonda, James Ward, jameshollyer, Jane Liu, johnnkp, jswag180, justkw, Kanvi Khanna, Keith Smiley, Koan-Sin Tan, Kulin Seth, Kun-Lu, kushanam, Lu Teng, mdfaijul, Mehdi Drissi, mgokulkrish, mraunak, Mustafa Uzun, Namrata Bhave, Pavel Emeliyanenko, pemeliya, Peng Sun, Philipp Hack, Pratik Joshi, Rahul Batra, Raunak, redwrasse, Saoirse Stewart, SaoirseARM, seanshpark, Shanbin Ke, Spenser Bauman, Surya, sushreebarsa, Tai Ly, Thibaut Goetghebuer-Planchon, tilakrayal, Tirumalesh, Tj Xu, Vladislav, weihanmines, Wen Chen, wenchenvincent, wenscarl, William Muir, Zhoulong, Jiang

# Release 2.14.0

## Tensorflow

### Breaking Changes

*   Support for Python 3.8 has been removed starting with TF 2.14. The TensorFlow 2.13.1 patch release will still have Python 3.8 support.

*  `tf.Tensor`
    * The class hierarchy for `tf.Tensor` has changed, and there are now explicit `EagerTensor` and `SymbolicTensor` classes for eager and tf.function respectively. Users who relied on the exact type of Tensor (e.g. `type(t) == tf.Tensor`) will need to update their code to use `isinstance(t, tf.Tensor)`. The `tf.is_symbolic_tensor` helper added in 2.13 may be used when it is necessary to determine if a value is specifically a symbolic tensor.

*   `tf.compat.v1.Session`
    * `tf.compat.v1.Session.partial_run` and `tf.compat.v1.Session.partial_run_setup` will be deprecated in the next release.

### Known Caveats

* `tf.lite`
    * when converter flag "_experimenal_use_buffer_offset" is enabled, additional metadata is automatically excluded from the generated model. The behaviour is the same as "exclude_conversion_metadata" is set
    * If the model is larger than 2GB, then we also require "exclude_conversion_metadata" flag to be set

### Major Features and Improvements

*   The `tensorflow` pip package has a new, optional installation method for Linux that installs necessary Nvidia CUDA libraries through pip. As long as the Nvidia driver is already installed on the system, you may now run `pip install tensorflow[and-cuda]` to install TensorFlow's Nvidia CUDA library dependencies in the Python environment. Aside from the Nvidia driver, no other pre-existing Nvidia CUDA packages are necessary.

*   Enable JIT-compiled i64-indexed kernels on GPU for large tensors with more than 2**32 elements.
    *   Unary GPU kernels: Abs, Atanh, Acos, Acosh, Asin, Asinh, Atan, Cos, Cosh, Sin, Sinh, Tan, Tanh.
    *   Binary GPU kernels: AddV2, Sub, Div, DivNoNan, Mul, MulNoNan, FloorDiv, Equal, NotEqual, Greater, GreaterEqual, LessEqual, Less.

* `tf.lite`
    * Add experimental supports conversion of models that may be larger than 2GB before buffer deduplication

### Bug Fixes and Other Changes

* `tf.py_function` and `tf.numpy_function` can now be used as function decorators for clearer code:
   ```
   @tf.py_function(Tout=tf.float32)
   def my_fun(x):
     print("This always executes eagerly.")
     return x+1
   ```

* `tf.lite`
    * Strided_Slice now supports `UINT32`.

* `tf.config.experimental.enable_tensor_float_32_execution`
    * Disabling TensorFloat-32 execution now causes TPUs to use float32 precision for float32 matmuls and other ops. TPUs have always used bfloat16 precision for certain ops, like matmul, when such ops had float32 inputs. Now, disabling TensorFloat-32 by calling `tf.config.experimental.enable_tensor_float_32_execution(False)` will cause TPUs to use float32 precision for such ops instead of bfloat16.

*  `tf.experimental.dtensor`
    * API changes for Relayout. Added a new API, `dtensor.relayout_like`, for relayouting a tensor according to the layout of another tensor.
    * Added `dtensor.get_default_mesh`, for retrieving the current default mesh under the dtensor context.
    * \*fft\* ops now support dtensors with any layout. Fixed bug in 'fft2d/fft3d', 'ifft2d/ifft3d', 'rfft2d/rfft3d', and 'irfft2d/irfft3d' for sharde input. Refer to this [blog post](https://blog.tensorflow.org/2023/08/distributed-fast-fourier-transform-in-tensorflow.html) for details.

*  `tf.experimental.strict_mode`
    * Added a new API, `strict_mode`, which converts all deprecation warnings into runtime errors with instructions on switching to a recommended  substitute.

*   TensorFlow Debugger (tfdbg) CLI: ncurses-based CLI for tfdbg v1 was removed.

*   TensorFlow now supports C++ RTTI on mobile and Android. To enable this feature, pass the flag `--define=tf_force_rtti=true` to Bazel when building TensorFlow. This may be needed when linking TensorFlow into RTTI-enabled programs since mixing RTTI and non-RTTI code can cause ABI issues.

* `tf.ones`, `tf.zeros`, `tf.fill`, `tf.ones_like`, `tf.zeros_like` now take an additional Layout argument that controls the output layout of their results.

* `tf.nest` and `tf.data` now support user defined classes implementing `__tf_flatten__` and `__tf_unflatten__` methods. See [nest_util code examples](https://github.com/tensorflow/tensorflow/blob/04869b4e63bfc03cb13627b3e1b879fdd0f69e34/tensorflow/python/util/nest_util.py#L97)
for an example.

*  TensorFlow IO support is now available for Apple Silicon packages.

*  Refactor CpuExecutable to propagate LLVM errors.

## Keras

Keras is a framework built on top of the TensorFlow. See more details on the Keras [website](https://keras.io/).

### Major Features and Improvements

* `tf.keras`
    * `Model.compile` now support `steps_per_execution='auto'` as a parameter, allowing automatic tuning of steps per execution during `Model.fit`,
    `Model.predict`, and `Model.evaluate` for a significant performance boost.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aakar Dwivedi, Adrian Popescu, ag.ramesh, Akhil Goel, Albert Zeyer, Alex Rosen, Alexey Vishnyakov, Andrew Goodbody, angerson, Ashiq Imran, Ayan Moitra, Ben Barsdell, Bhavani Subramanian, Boian Petkantchin, BrianWieder, Chris Mc, cloudhan, Connor Flanagan, Daniel Lang, Daniel Yudelevich, Darya Parygina, David Korczynski, David Svantesson, dingyuqing05, Dragan Mladjenovic, dskkato, Eli Kobrin, Erick Ochoa, Erik Schultheis, Frédéric Bastien, gaikwadrahul8, Gauri1 Deshpande, guozhong.zhuang, H. Vetinari, Isaac Cilia Attard, Jake Hall, Jason Furmanek, Jerry Ge, Jinzhe Zeng, JJ, johnnkp, Jonathan Albrecht, jongkweh, justkw, Kanvi Khanna, kikoxia, Koan-Sin Tan, Kun-Lu, ltsai1, Lu Teng, luliyucoordinate, Mahmoud Abuzaina, mdfaijul, Milos Puzovic, Nathan Luehr, Om Thakkar, pateldeev, Peng Sun, Philipp Hack, pjpratik, Poliorcetics, rahulbatra85, rangjiaheng, Renato Arantes, Robert Kalmar, roho, Rylan Justice, Sachin Muradi, samypr100, Saoirse Stewart, Shanbin Ke, Shivam Mishra, shuw, Song Ziming, Stephan Hartmann, Sulav, sushreebarsa, T Coxon, Tai Ly, talyz, Thibaut Goetghebuer-Planchon, Thomas Preud'Homme, tilakrayal, Tirumalesh, Tj Xu, Tom Allsop, Trevor Morris, Varghese, Jojimon, Wen Chen, Yaohui Liu, Yimei Sun, Zhoulong Jiang, Zhoulong, Jiang

# Release 2.13.0

## TensorFlow

### Breaking Changes

* The LMDB kernels have been changed to return an error. This is in preparation for completely removing them from TensorFlow. The LMDB dependency that these kernels are bringing to TensorFlow has been dropped, thus making the build slightly faster and more secure.

### Major Features and Improvements

*   `tf.lite`

    *   Added 16-bit and 64-bit float type support for built-in op `cast`.
    *   The Python TF Lite Interpreter bindings now have an option `experimental_disable_delegate_clustering` to turn-off delegate clustering.
    *   Added int16x8 support for the built-in op `exp`
    *   Added int16x8 support for the built-in op `mirror_pad`
    *   Added int16x8 support for the built-in ops `space_to_batch_nd` and `batch_to_space_nd`
    *   Added 16-bit int type support for built-in op `less`, `greater_than`, `equal`
    *   Added 8-bit and 16-bit support for `floor_div` and `floor_mod`.
    *   Added 16-bit and 32-bit int support for the built-in op `bitcast`.
    *   Added 8-bit/16-bit/32-bit int/uint support for the built-in op `bitwise_xor`
    *   Added int16 indices support for built-in op `gather` and `gather_nd`.
    *   Added 8-bit/16-bit/32-bit int/uint support for the built-in op `right_shift`
    *   Added reference implementation for 16-bit int unquantized `add`.
    *   Added reference implementation for 16-bit int and 32-bit unsigned int unquantized `mul`.
    *   `add_op` supports broadcasting up to 6 dimensions.
    *   Added 16-bit support for `top_k`.

*   `tf.function`

    *   ConcreteFunction (`tf.types.experimental.ConcreteFunction`) as generated through `get_concrete_function` now performs holistic input validation similar to calling `tf.function` directly. This can cause breakages where existing calls pass Tensors with the wrong shape or omit certain non-Tensor arguments (including default values).

*   `tf.nn`

    *   `tf.nn.embedding_lookup_sparse` and `tf.nn.safe_embedding_lookup_sparse` now support ids and weights described by `tf.RaggedTensor`s.
    *   Added a new boolean argument `allow_fast_lookup` to `tf.nn.embedding_lookup_sparse` and `tf.nn.safe_embedding_lookup_sparse`, which enables a simplified and typically faster lookup procedure.

*   `tf.data`

    *   `tf.data.Dataset.zip` now supports Python-style zipping, i.e. `Dataset.zip(a, b, c)`.
    * `tf.data.Dataset.shuffle` now supports `tf.data.UNKNOWN_CARDINALITY` When doing a "full shuffle" using  `dataset = dataset.shuffle(dataset.cardinality())`. But remember, a "full shuffle" will load the full dataset into memory so that it can be shuffled, so make sure to only use this with small datasets or datasets of small objects (like filenames).

*   `tf.math`

    * `tf.nn.top_k` now supports specifying the output index type via parameter `index_type`.  Supported types are `tf.int16`, `tf.int32` (default), and `tf.int64`.

*   `tf.SavedModel`

    *   Introduced class method `tf.saved_model.experimental.Fingerprint.from_proto(proto)`, which can be used to construct a `Fingerprint` object directly from a protobuf.
    *   Introduced member method `tf.saved_model.experimental.Fingerprint.singleprint()`, which provides a convenient way to uniquely identify a SavedModel.

### Bug Fixes and Other Changes

*   `tf.Variable`

    *   Changed resource variables to inherit from `tf.compat.v2.Variable` instead of `tf.compat.v1.Variable`. Some checks for `isinstance(v, tf compat.v1.Variable)` that previously returned True may now return False.

*   `tf.distribute`

    *   Opened an experimental API, `tf.distribute.experimental.coordinator.get_current_worker_index`, for retrieving the worker index from within a worker, when using parameter server training with a custom training loop.

*   `tf.experimental.dtensor`

    *   Deprecated `dtensor.run_on` in favor of `dtensor.default_mesh` to correctly indicate that the context does not override the mesh that the ops and functions will run on, it only sets a fallback default mesh.
    *   List of members of `dtensor.Layout` and `dtensor.Mesh` have slightly changed as part of efforts to consolidate the C++ and Python source code with pybind11. Most notably, `dtensor.Layout.serialized_string` is removed.
    *   Minor API changes to represent Single Device Layout for non-distributed Tensors inside DTensor functions. Runtime support will be added soon.

*   `tf.experimental.ExtensionType`

    *   `tf.experimental.ExtensionType` now supports Python `tuple` as the type annotation of its fields.

*   `tf.nest`

    *   Deprecated API `tf.nest.is_sequence` has now been deleted. Please use `tf.nest.is_nested` instead.

## Keras

Keras is a framework built on top of the TensorFlow. See more details on the [Keras website](https://keras.io/).

### Breaking Changes

*  Removed the Keras scikit-learn API wrappers (`KerasClassifier` and `KerasRegressor`), which had been deprecated in August 2021. We recommend using [SciKeras](https://github.com/adriangb/scikeras) instead.
*  The default Keras model saving format is now the Keras v3 format: calling `model.save("xyz.keras")` will no longer create a H5 file, it will create a native Keras model file. This will only be breaking for you if you were manually inspecting or modifying H5 files saved by Keras under a `.keras` extension. If this breaks you, simply add `save_format="h5"` to your `.save()` call to revert back to the prior behavior.
*  Added `keras.utils.TimedThread` utility to run a timed thread every x seconds. It can be used to run a threaded function alongside model training or any other snippet of code.
*  In the `keras` PyPI package, accessible symbols are now restricted to symbols that are intended to be public. This may affect your code if you were using `import keras` and you used `keras` functions that were not public APIs, but were accessible in earlier versions with direct imports. In those cases, please use the following guideline:
        -  The API may be available in the public Keras API under a different name, so make sure to look for it on keras.io or TensorFlow docs and switch to the public version.
        -  It could also be a simple python or TF utility that you could easily copy over to your own codebase. In those case, just make it your own!
        -  If you believe it should definitely be a public Keras API, please open a feature request in keras GitHub repo.
        -  As a workaround, you could import the same private symbol keras `keras.src`, but keep in mind the `src` namespace is not stable and those APIs may change or be removed in the future.

### Major Features and Improvements

*   Added F-Score metrics `tf.keras.metrics.FBetaScore`, `tf.keras.metrics.F1Score`, and `tf.keras.metrics.R2Score`.
*   Added activation function `tf.keras.activations.mish`.
*   Added experimental `keras.metrics.experimental.PyMetric` API for metrics that run Python code on the host CPU (compiled outside of the TensorFlow graph). This can be used for integrating metrics from external Python libraries (like sklearn or pycocotools) into Keras as first-class Keras metrics.
*   Added `tf.keras.optimizers.Lion` optimizer.
*   Added `tf.keras.layers.SpectralNormalization` layer wrapper to perform spectral normalization on the weights of a target layer.
*   The `SidecarEvaluatorModelExport` callback has been added to Keras as `keras.callbacks.SidecarEvaluatorModelExport`. This callback allows for exporting the model the best-scoring model as evaluated by a `SidecarEvaluator` evaluator. The evaluator regularly evaluates the model and exports it if the user-defined comparison function determines that it is an improvement.
*   Added warmup capabilities to `tf.keras.optimizers.schedules.CosineDecay` learning rate scheduler. You can now specify an initial and target learning rate, and our scheduler will perform a linear interpolation between the two after which it will begin a decay phase.
*   Added experimental support for an exactly-once visitation guarantee for evaluating Keras models trained with `tf.distribute ParameterServerStrategy`, via the `exact_evaluation_shards` argument in `Model.fit` and `Model.evaluate`.
*   Added `tf.keras.__internal__.KerasTensor`,`tf.keras.__internal__.SparseKerasTensor`, and `tf.keras.__internal__.RaggedKerasTensor` classes. You can use these classes to do instance type checking and type annotations for layer/model inputs and outputs.
*   All the `tf.keras.dtensor.experimental.optimizers` classes have been merged with `tf.keras.optimizers`. You can migrate your code to use `tf.keras.optimizers` directly. The API namespace for `tf.keras.dtensor.experimental.optimizers` will be removed in future releases.
*   Added support for `class_weight` for 3+ dimensional targets (e.g. image segmentation masks) in `Model.fit`.
*   Added a new loss, `keras.losses.CategoricalFocalCrossentropy`.
*   Remove the `tf.keras.dtensor.experimental.layout_map_scope()`. You can user the `tf.keras.dtensor.experimental.LayoutMap.scope()` instead.

## Security

*   Fixes correct values rank in UpperBound and LowerBound [CVE-2023-33976](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-33976)

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

103yiran, 8bitmp3, Aakar, Aakar Dwivedi, Abinash Satapathy, Aditya Kane, ag.ramesh, Alexander Grund, Andrei Pikas, andreii, Andrew Goodbody, angerson, Anthony_256, Ashay Rane, Ashiq Imran, Awsaf, Balint Cristian, Banikumar Maiti (Intel Aipg), Ben Barsdell, bhack, cfRod, Chao Chen, chenchongsong, Chris Mc, Daniil Kutz, David Rubinstein, dianjiaogit, dixr, Dongfeng Yu, dongfengy, drah, Eric Kunze, Feiyue Chen, Frederic Bastien, Gauri1 Deshpande, guozhong.zhuang, hDn248, HYChou, ingkarat, James Hilliard, Jason Furmanek, Jaya, Jens Glaser, Jerry Ge, Jiao Dian'S Power Plant, Jie Fu, Jinzhe Zeng, Jukyy, Kaixi Hou, Kanvi Khanna, Karel Ha, karllessard, Koan-Sin Tan, Konstantin Beluchenko, Kulin Seth, Kun Lu, Kyle Gerard Felker, Leopold Cambier, Lianmin Zheng, linlifan, liuyuanqiang, Lukas Geiger, Luke Hutton, Mahmoud Abuzaina, Manas Mohanty, Mateo Fidabel, Maxiwell S. Garcia, Mayank Raunak, mdfaijul, meatybobby, Meenakshi Venkataraman, Michael Holman, Nathan John Sircombe, Nathan Luehr, nitins17, Om Thakkar, Patrice Vignola, Pavani Majety, per1234, Philipp Hack, pollfly, Prianka Liz Kariat, Rahul Batra, rahulbatra85, ratnam.parikh, Rickard Hallerbäck, Roger Iyengar, Rohit Santhanam, Roman Baranchuk, Sachin Muradi, sanadani, Saoirse Stewart, seanshpark, Shawn Wang, shuw, Srinivasan Narayanamoorthy, Stewart Miles, Sunita Nadampalli, SuryanarayanaY, Takahashi Shuuji, Tatwai Chong, Thibaut Goetghebuer-Planchon, tilakrayal, Tirumalesh, TJ, Tony Sung, Trevor Morris, unda, Vertexwahn, venkat2469, William Muir, Xavier Bonaventura, xiang.zhang, Xiao-Yong Jin, yleeeee, Yong Tang, Yuriy Chernyshov, Zhang, Xiangze, zhaozheng09

# Release 2.12.1

### Bug Fixes and Other Changes

*  The use of the ambe config to build and test aarch64 is not needed. The ambe config will be removed in the future. Making cpu_arm64_pip.sh and cpu_arm64_nonpip.sh more similar for easier future maintenance.

# Release 2.12.0

### Breaking Changes

*   Build, Compilation and Packaging

    *   Removed redundant packages `tensorflow-gpu` and `tf-nightly-gpu`. These packages were removed and replaced with packages that direct users to switch to `tensorflow` or `tf-nightly` respectively. Since TensorFlow 2.1, the only difference between these two sets of packages was their names, so there is no loss of functionality or GPU support. See https://pypi.org/project/tensorflow-gpu for more details.

*   `tf.function`:

    *   `tf.function` now uses the Python inspect library directly for parsing the signature of the Python function it is decorated on. This change may break code where the function signature is malformed, but was ignored previously, such as:
        *   Using `functools.wraps` on a function with different signature
        *   Using `functools.partial` with an invalid `tf.function` input
    *   `tf.function` now enforces input parameter names to be valid Python identifiers. Incompatible names are automatically sanitized similarly to existing SavedModel signature behavior.
    *   Parameterless `tf.function`s are assumed to have an empty `input_signature` instead of an undefined one even if the `input_signature` is unspecified.
    *   `tf.types.experimental.TraceType` now requires an additional `placeholder_value` method to be defined.
    *   `tf.function` now traces with placeholder values generated by TraceType instead of the value itself.

*   Experimental APIs `tf.config.experimental.enable_mlir_graph_optimization` and `tf.config.experimental.disable_mlir_graph_optimization` were removed.

### Major Features and Improvements

*  Support for Python 3.11 has been added.
*  Support for Python 3.7 has been removed. We are not releasing any more patches for Python 3.7.

*   `tf.lite`:

    *   Add 16-bit float type support for built-in op `fill`.
    *   Transpose now supports 6D tensors.
    *   Float LSTM now supports diagonal recurrent tensors: https://arxiv.org/abs/1903.08023

*   `tf.experimental.dtensor`:

    *   Coordination service now works with `dtensor.initialize_accelerator_system`, and enabled by default.
    *   Add `tf.experimental.dtensor.is_dtensor` to check if a tensor is a DTensor instance.

*   `tf.data`:

    *   Added support for alternative checkpointing protocol which makes it possible to checkpoint the state of the input pipeline without having to store the contents of internal buffers. The new functionality can be enabled through the `experimental_symbolic_checkpoint` option of `tf.data.Options()`.
    *   Added a new `rerandomize_each_iteration` argument for the `tf.data.Dataset.random()` operation, which controls whether the sequence of generated random numbers should be re-randomized every epoch or not (the default behavior). If `seed` is set and `rerandomize_each_iteration=True`, the `random()` operation will produce a different (deterministic) sequence of numbers every epoch.
    *   Added a new `rerandomize_each_iteration` argument for the `tf.data.Dataset.sample_from_datasets()` operation, which controls whether the sequence of generated random numbers used for sampling should be re-randomized every epoch or not. If `seed` is set and `rerandomize_each_iteration=True`, the `sample_from_datasets()` operation will use a different (deterministic) sequence of numbers every epoch.

*   `tf.test`:

    *   Added `tf.test.experimental.sync_devices`, which is useful for accurately measuring performance in benchmarks.

*   `tf.experimental.dtensor`:

    *   Added experimental support to ReduceScatter fuse on GPU (NCCL).

### Bug Fixes and Other Changes

*   `tf.SavedModel`:
    * Introduced new class `tf.saved_model.experimental.Fingerprint` that contains the fingerprint of the SavedModel. See the [SavedModel Fingerprinting RFC](https://github.com/tensorflow/community/pull/415) for details.
    * Introduced API `tf.saved_model.experimental.read_fingerprint(export_dir)` for reading the fingerprint of a SavedModel.
* `tf.random`
  * Added non-experimental aliases for `tf.random.split` and `tf.random.fold_in`, the experimental endpoints are still available so no code changes are necessary.
* `tf.experimental.ExtensionType`
  * Added function `experimental.extension_type.as_dict()`, which converts an instance of `tf.experimental.ExtensionType` to a `dict` representation.
* `stream_executor`
  * Top level `stream_executor` directory has been deleted, users should use equivalent headers and targets under `compiler/xla/stream_executor`.
* `tf.nn`
  * Added `tf.nn.experimental.general_dropout`, which is similar to `tf.random.experimental.stateless_dropout` but accepts a custom sampler function.
* `tf.types.experimental.GenericFunction`
  * The `experimental_get_compiler_ir` method supports tf.TensorSpec compilation arguments.
*  `tf.config.experimental.mlir_bridge_rollout`
    *   Removed enums `MLIR_BRIDGE_ROLLOUT_SAFE_MODE_ENABLED` and `MLIR_BRIDGE_ROLLOUT_SAFE_MODE_FALLBACK_ENABLED` which are no longer used by the tf2xla bridge

## Keras

 Keras is a framework built on top of the TensorFlow. See more details on the Keras [website](https://keras.io/).

### Breaking Changes


`tf.keras`:

* Moved all saving-related utilities to a new namespace, `keras.saving`, for example: `keras.saving.load_model`, `keras.saving.save_model`, `keras.saving.custom_object_scope`, `keras.saving.get_custom_objects`, `keras.saving.register_keras_serializable`,`keras.saving.get_registered_name` and `keras.saving.get_registered_object`. The previous API locations (in `keras.utils` and `keras.models`) will be available indefinitely, but we recommend you update your code to point to the new API locations.
 * Improvements and fixes in Keras loss masking:
    * Whether you represent a ragged tensor as a `tf.RaggedTensor` or using [keras masking](https://www.tensorflow.org/guide/keras/masking_and_padding), the returned loss values should be the identical to each other. In previous versions Keras may have silently ignored the mask.
 * If you use masked losses with Keras the loss values may be different in TensorFlow `2.12` compared to previous versions.
 * In cases where the mask was previously ignored, you will now get an error if you pass a mask with an incompatible shape.

### Major Features and Improvements

`tf.keras`:

 *   The new Keras model saving format (`.keras`) is available. You can start using it via `model.save(f"{fname}.keras", save_format="keras_v3")`. In the future it will become the default for all files with the `.keras` extension. This file format targets the Python runtime only and makes it possible to reload Python objects identical to the saved originals. The format supports non-numerical state such as vocabulary files and lookup tables, and it is easy to customize in the case of custom layers with exotic elements of state (e.g. a FIFOQueue). The format does not rely on bytecode or pickling, and is safe by default. Note that as a result, Python `lambdas` are disallowed at loading time. If you want to use `lambdas`, you can pass `safe_mode=False` to the loading method (only do this if you trust the source of the model).
*   Added a `model.export(filepath)` API to create a lightweight SavedModel artifact that can be used for inference (e.g. with TF-Serving).
*   Added `keras.export.ExportArchive` class for low-level customization of the process of exporting SavedModel artifacts for inference. Both ways of exporting models are based on `tf.function` tracing and produce a TF program composed of TF ops. They are meant primarily for environments where the TF runtime is available, but not the Python interpreter, as is typical for production with TF Serving.
 *   Added utility `tf.keras.utils.FeatureSpace`, a one-stop shop for structured data preprocessing and encoding.
 *   Added `tf.SparseTensor` input support to `tf.keras.layers.Embedding` layer. The layer now accepts a new boolean argument `sparse`. If `sparse` is set to True, the layer returns a SparseTensor instead of a dense Tensor. Defaults to False.
 *   Added `jit_compile` as a settable property to `tf.keras.Model`.
 *   Added `synchronized` optional parameter to `layers.BatchNormalization`.
 *   Added deprecation warning to `layers.experimental.SyncBatchNormalization` and suggested to use `layers.BatchNormalization` with `synchronized=True` instead.
 *   Updated `tf.keras.layers.BatchNormalization` to support masking of the inputs (`mask` argument) when computing the mean and variance.
 *   Add `tf.keras.layers.Identity`, a placeholder pass-through layer.
 *   Add `show_trainable` option to `tf.keras.utils.model_to_dot` to display layer trainable status in model plots.
 *   Add ability to save a `tf.keras.utils.FeatureSpace` object, via `feature_space.save("myfeaturespace.keras")`, and reload it via `feature_space = tf.keras.models.load_model("myfeaturespace.keras")`.
*   Added utility `tf.keras.utils.to_ordinal` to convert class vector to ordinal regression / classification matrix.

### Bug Fixes and Other Changes

*   N/A

## Security

*   Moving forward, TensorFlow will no longer update [TFSAs](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/security). Please refer instead to our [GitHub security advisories](https://github.com/tensorflow/tensorflow/security/advisories), which are attached to [CVEs](https://cve.mitre.org/cve/).
*   Fixes an FPE in TFLite in conv kernel [CVE-2023-27579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-27579)
*   Fixes a double free in Fractional(Max/Avg)Pool [CVE-2023-25801](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25801)
*   Fixes a null dereference on ParallelConcat with XLA [CVE-2023-25676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25676)
*   Fixes a segfault in Bincount with XLA [CVE-2023-25675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25675)
*   Fixes an NPE in RandomShuffle with XLA enable [CVE-2023-25674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25674)
*   Fixes an FPE in TensorListSplit with XLA [CVE-2023-25673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25673)
*   Fixes segmentation fault in tfg-translate [CVE-2023-25671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25671)
*   Fixes an NPE in QuantizedMatMulWithBiasAndDequantize [CVE-2023-25670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25670)
*   Fixes an FPE in AvgPoolGrad with XLA [CVE-2023-25669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25669)
*   Fixes a heap out-of-buffer read vulnerability in the QuantizeAndDequantize operation [CVE-2023-25668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25668)
*   Fixes a segfault when opening multiframe gif [CVE-2023-25667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25667)
*   Fixes an NPE in SparseSparseMaximum [CVE-2023-25665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25665)
*   Fixes an FPE in AudioSpectrogram [CVE-2023-25666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25666)
*   Fixes a heap-buffer-overflow in AvgPoolGrad  [CVE-2023-25664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25664)
*   Fixes a NPE in TensorArrayConcatV2  [CVE-2023-25663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25663)
*   Fixes a Integer overflow in EditDistance  [CVE-2023-25662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25662)
*   Fixes a Seg fault in `tf.raw_ops.Print` [CVE-2023-25660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25660)
*   Fixes a OOB read in DynamicStitch [CVE-2023-25659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25659)
*   Fixes a OOB Read in GRUBlockCellGrad [CVE-2023-25658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25658)

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

103yiran, 8bitmp3, Aakar, Aakar Dwivedi, Abinash Satapathy, Aditya Kane, ag.ramesh, Alexander Grund, Andrei Pikas, andreii, Andrew Goodbody, angerson, Anthony_256, Ashay Rane, Ashiq Imran, Awsaf, Balint Cristian, Banikumar Maiti (Intel Aipg), Ben Barsdell, bhack, cfRod, Chao Chen, chenchongsong, Chris Mc, Daniil Kutz, David Rubinstein, dianjiaogit, dixr, Dongfeng Yu, dongfengy, drah, Eric Kunze, Feiyue Chen, Frederic Bastien, Gauri1 Deshpande, guozhong.zhuang, hDn248, HYChou, ingkarat, James Hilliard, Jason Furmanek, Jaya, Jens Glaser, Jerry Ge, Jiao Dian'S Power Plant, Jie Fu, Jinzhe Zeng, Jukyy, Kaixi Hou, Kanvi Khanna, Karel Ha, karllessard, Koan-Sin Tan, Konstantin Beluchenko, Kulin Seth, Kun Lu, Kyle Gerard Felker, Leopold Cambier, Lianmin Zheng, linlifan, liuyuanqiang, Lukas Geiger, Luke Hutton, Mahmoud Abuzaina, Manas Mohanty, Mateo Fidabel, Maxiwell S. Garcia, Mayank Raunak, mdfaijul, meatybobby, Meenakshi Venkataraman, Michael Holman, Nathan John Sircombe, Nathan Luehr, nitins17, Om Thakkar, Patrice Vignola, Pavani Majety, per1234, Philipp Hack, pollfly, Prianka Liz Kariat, Rahul Batra, rahulbatra85, ratnam.parikh, Rickard Hallerbäck, Roger Iyengar, Rohit Santhanam, Roman Baranchuk, Sachin Muradi, sanadani, Saoirse Stewart, seanshpark, Shawn Wang, shuw, Srinivasan Narayanamoorthy, Stewart Miles, Sunita Nadampalli, SuryanarayanaY, Takahashi Shuuji, Tatwai Chong, Thibaut Goetghebuer-Planchon, tilakrayal, Tirumalesh, TJ, Tony Sung, Trevor Morris, unda, Vertexwahn, Vinila S, William Muir, Xavier Bonaventura, xiang.zhang, Xiao-Yong Jin, yleeeee, Yong Tang, Yuriy Chernyshov, Zhang, Xiangze, zhaozheng09


# Release 2.11.1

**Note**: TensorFlow 2.10 was the last TensorFlow release that supported GPU on native-Windows. Starting with TensorFlow 2.11, you will need to install TensorFlow in WSL2, or install tensorflow-cpu and, optionally, try the TensorFlow-DirectML-Plugin.
*   Security vulnerability fixes will no longer be patched to this Tensorflow version. The latest Tensorflow version includes the security vulnerability fixes. You can update to the latest version (recommended) or patch security vulnerabilities yourself [steps](https://github.com/tensorflow/tensorflow#patching-guidelines). You can refer to the [release notes](https://github.com/tensorflow/tensorflow/releases) of the latest Tensorflow version for a list of newly fixed vulnerabilities. If you have any questions, please create a GitHub issue to let us know.

This release also introduces several vulnerability fixes:

*   Fixes an FPE in TFLite in conv kernel [CVE-2023-27579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-27579)
*   Fixes a double free in Fractional(Max/Avg)Pool [CVE-2023-25801](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25801)
*   Fixes a null dereference on ParallelConcat with XLA [CVE-2023-25676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25676)
*   Fixes a segfault in Bincount with XLA [CVE-2023-25675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25675)
*   Fixes an NPE in RandomShuffle with XLA enable [CVE-2023-25674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25674)
*   Fixes an FPE in TensorListSplit with XLA [CVE-2023-25673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25673)
*   Fixes segmentation fault in tfg-translate [CVE-2023-25671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25671)
*   Fixes an NPE in QuantizedMatMulWithBiasAndDequantize [CVE-2023-25670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25670)
*   Fixes an FPE in AvgPoolGrad with XLA [CVE-2023-25669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25669)
*   Fixes a heap out-of-buffer read vulnerability in the QuantizeAndDequantize operation [CVE-2023-25668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25668)
*   Fixes a segfault when opening multiframe gif [CVE-2023-25667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25667)
*   Fixes an NPE in SparseSparseMaximum [CVE-2023-25665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25665)
*   Fixes an FPE in AudioSpectrogram [CVE-2023-25666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25666)
*   Fixes a heap-buffer-overflow in AvgPoolGrad  [CVE-2023-25664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25664)
*   Fixes a NPE in TensorArrayConcatV2  [CVE-2023-25663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25663)
*   Fixes a Integer overflow in EditDistance  [CVE-2023-25662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25662)
*   Fixes a Seg fault in `tf.raw_ops.Print` [CVE-2023-25660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25660)
*   Fixes a OOB read in DynamicStitch [CVE-2023-25659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25659)
*   Fixes a OOB Read in GRUBlockCellGrad [CVE-2023-25658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2023-25658)


# Release 2.11.0

## Breaking Changes
*   `tf.keras.optimizers.Optimizer` now points to the new Keras optimizer, and
    old optimizers have moved to the `tf.keras.optimizers.legacy` namespace.
    If you find your workflow failing due to this change,
    you may be facing one of the following issues:

    *   **Checkpoint loading failure.** The new optimizer handles optimizer
        state differently from the old optimizer, which simplies the logic of
        checkpoint saving/loading, but at the cost of breaking checkpoint
        backward compatibility in some cases. If you want to keep using an old
        checkpoint, please change your optimizer to
        `tf.keras.optimizers.legacy.XXX` (e.g.
        `tf.keras.optimizers.legacy.Adam`).
    *   **TF1 compatibility.** The new optimizer does not support TF1 any more,
        so please use the legacy optimizer `tf.keras.optimizer.legacy.XXX`.
        We highly recommend to migrate your workflow to TF2 for stable
        support and new features.
    *   **API not found.** The new optimizer has a different set of public APIs
        from the old optimizer. These API changes are mostly related to
        getting rid of slot variables and TF1 support. Please check the API
        documentation to find alternatives to the missing API. If you must
        call the deprecated API, please change your optimizer to the legacy
        optimizer.
    *   **Learning rate schedule access.** When using a `LearningRateSchedule`,
        The new optimizer's `learning_rate` property returns the
        current learning rate value instead of a `LearningRateSchedule` object
        as before. If you need to access the `LearningRateSchedule` object,
        please use `optimizer._learning_rate`.
    *   **You implemented a custom optimizer based on the old optimizer.**
        Please set your optimizer to subclass
        `tf.keras.optimizer.legacy.XXX`. If you want to migrate to the new
        optimizer and find it does not support your optimizer, please file
        an issue in the Keras GitHub repo.
    *   **Error such as `Cannot recognize variable...`.** The new optimizer
        requires all optimizer variables to be created at the first
        `apply_gradients()` or `minimize()` call. If your workflow calls
        optimizer to update different parts of model in multiple stages,
        please call `optimizer.build(model.trainable_variables)` before the
        training loop.
    *   **Performance regression on `ParameterServerStrategy`.** This could be
        significant if you have many PS servers. We are aware of this issue and
        working on fixes, for now we suggest using the legacy optimizers when
        using `ParameterServerStrategy`.
    *   **Timeout or performance loss.** We don't anticipate this to happen, but
        if you see such issues, please use the legacy optimizer, and file
        an issue in the Keras GitHub repo.

    The old Keras optimizer will never be deleted, but will not see any
    new feature additions.
    New optimizers (e.g., `Adafactor`) will
    only be implemented based on `tf.keras.optimizers.Optimizer`, the new
    base class.

## Major Features and Improvements

*   `tf.lite`:

    *   New operations supported:
          * tf.unsortedsegmentmin op is supported.
          * tf.atan2 op is supported.
          * tf.sign op is supported.
    *   Updates to existing operations:
          * tfl.mul now supports complex32 inputs.

*   `tf.experimental.StructuredTensor`

    *   Introduced `tf.experimental.StructuredTensor`, which provides a flexible
        and Tensorflow-native way to encode structured data such as protocol
        buffers or pandas dataframes.

*   `tf.keras`:

    *   Added method `get_metrics_result()` to `tf.keras.models.Model`.
        *   Returns the current metrics values of the model as a dict.
    *   Added group normalization layer `tf.keras.layers.GroupNormalization`.
    *   Added weight decay support for all Keras optimizers.
    *   Added Adafactor optimizer `tf.keras.optimizers.Adafactor`.
    *   Added `warmstart_embedding_matrix` to `tf.keras.utils`.
        This utility can be used to warmstart an embeddings matrix so you
        reuse previously-learned word embeddings when working with a new set
        of words which may include previously unseen words (the embedding
        vectors for unseen words will be randomly initialized).

*   `tf.Variable`:

    *   Added `CompositeTensor` as a baseclass to `ResourceVariable`. This
        allows `tf.Variable`s to be nested in `tf.experimental.ExtensionType`s.
    *   Added a new constructor argument `experimental_enable_variable_lifting`
        to `tf.Variable`, defaulting to True. When it's `False`, the variable
        won't be lifted out of `tf.function`, thus it can be used as a
        `tf.function`-local variable: during each execution of the
        `tf.function`, the variable will be created and then disposed, similar
        to a local (i.e. stack-allocated) variable in C/C++. Currently
        `experimental_enable_variable_lifting=False` only works on non-XLA
        devices (e.g. under `@tf.function(jit_compile=False)`).

*   TF SavedModel:
    *   Added `fingerprint.pb` to the SavedModel directory. The `fingerprint.pb`
        file is a protobuf containing the "fingerprint" of the SavedModel. See
        the [RFC](https://github.com/tensorflow/community/pull/415) for more
        details regarding its design and properties.

*   `tf.data`:
    *   Graduated experimental APIs:
        * [`tf.data.Dataset.ragged_batch`](https://www.tensorflow.org/api_docs/python/tf/data/Dataset/#ragged_batch), which batches elements of `tf.data.Dataset`s into `tf.RaggedTensor`s.
        * [`tf.data.Dataset.sparse_batch`](https://www.tensorflow.org/api_docs/python/tf/data/Dataset/#sparse_batch), which batches elements of `tf.data.Dataset`s into `tf.sparse.SparseTensor`s.

## Bug Fixes and Other Changes

*   `tf.image`
    *   Added an optional parameter `return_index_map` to `tf.image.ssim` which
        causes the returned value to be the local SSIM map instead of the global
        mean.

*   TF Core:

    *   `tf.custom_gradient` can now be applied to functions that accept
        "composite" tensors, such as `tf.RaggedTensor`, as inputs.
    *   Fix device placement issues related to datasets with ragged tensors of
        strings (i.e. variant encoded data with types not supported on GPU).
    *   'experimental_follow_type_hints' for tf.function has been deprecated.
        Please use input_signature or reduce_retracing to minimize retracing.

*   `tf.SparseTensor`:
    *   Introduced `set_shape`, which sets the static dense shape of the sparse tensor and has the same semantics as `tf.Tensor.set_shape`.

## Security

* TF is currently using giflib 5.2.1 which has [CVE-2022-28506](https://nvd.nist.gov/vuln/detail/CVE-2022-28506). TF is not affected by the CVE as it does not use `DumpScreen2RGB` at all.
*   Fixes an OOB seg fault in `DynamicStitch` due to missing validation ([CVE-2022-41883](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41883))
*   Fixes an overflow in `tf.keras.losses.poisson` ([CVE-2022-41887](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41887))
*   Fixes a heap OOB failure in `ThreadUnsafeUnigramCandidateSampler` caused by missing validation ([CVE-2022-41880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41880))
*   Fixes a segfault in `ndarray_tensor_bridge` ([CVE-2022-41884](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41884))
*   Fixes an overflow in `FusedResizeAndPadConv2D` ([CVE-2022-41885](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41885))
*   Fixes a overflow in `ImageProjectiveTransformV2` ([CVE-2022-41886](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41886))
*   Fixes an FPE in `tf.image.generate_bounding_box_proposals` on GPU ([CVE-2022-41888](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41888))
*   Fixes a segfault in `pywrap_tfe_src` caused by invalid attributes ([CVE-2022-41889](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41889))
*   Fixes a `CHECK` fail in `BCast` ([CVE-2022-41890](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41890))
*   Fixes a segfault in `TensorListConcat` ([CVE-2022-41891](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41891))
*   Fixes a `CHECK_EQ` fail in `TensorListResize` ([CVE-2022-41893](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41893))
*   Fixes an overflow in `CONV_3D_TRANSPOSE` on TFLite ([CVE-2022-41894](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41894))
*   Fixes a heap OOB in `MirrorPadGrad` ([CVE-2022-41895](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41895))
*   Fixes a crash in `Mfcc` ([CVE-2022-41896](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41896))
*   Fixes a heap OOB in `FractionalMaxPoolGrad` ([CVE-2022-41897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41897))
*   Fixes a `CHECK` fail in `SparseFillEmptyRowsGrad` ([CVE-2022-41898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41898))
*   Fixes a `CHECK` fail in `SdcaOptimizer` ([CVE-2022-41899](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41899))
*   Fixes a heap OOB in `FractionalAvgPool` and `FractionalMaxPool`([CVE-2022-41900](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41900))
*   Fixes a `CHECK_EQ` in `SparseMatrixNNZ` ([CVE-2022-41901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41901))
*   Fixes an OOB write in grappler ([CVE-2022-41902](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41902))
*   Fixes a overflow in `ResizeNearestNeighborGrad` ([CVE-2022-41907](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41907))
*   Fixes a `CHECK` fail in `PyFunc` ([CVE-2022-41908](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41908))
*   Fixes a segfault in `CompositeTensorVariantToComponents` ([CVE-2022-41909](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41909))
*   Fixes a invalid char to bool conversion in printing a tensor ([CVE-2022-41911](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41911))
*   Fixes a heap overflow in `QuantizeAndDequantizeV2` ([CVE-2022-41910](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41910))
*   Fixes a `CHECK` failure in `SobolSample` via missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` in eager mode ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

103yiran, 8bitmp3, Aakar Dwivedi, Alexander Grund, alif_elham, Aman Agarwal,
amoitra, Andrei Ivanov, andreii, Andrew Goodbody, angerson, Ashay Rane,
Azeem Shaikh, Ben Barsdell, bhack, Bhavani Subramanian, Cedric Nugteren,
Chandra Kumar Ramasamy, Christopher Bate, CohenAriel, Cotarou, cramasam,
Enrico Minack, Francisco Unda, Frederic Bastien, gadagashwini, Gauri1 Deshpande,
george, Jake, Jeff, Jerry Ge, Jingxuan He, Jojimon Varghese, Jonathan Dekhtiar,
Kaixi Hou, Kanvi Khanna, kcoul, Keith Smiley, Kevin Hu, Kun Lu, kushanam,
Lianmin Zheng, liuyuanqiang, Louis Sugy, Mahmoud Abuzaina, Marius Brehler,
mdfaijul, Meenakshi Venkataraman, Milos Puzovic, mohantym, Namrata-Ibm,
Nathan John Sircombe, Nathan Luehr, Olaf Lipinski, Om Thakkar, Osman F Bayram,
Patrice Vignola, Pavani Majety, Philipp Hack, Prianka Liz Kariat, Rahul Batra,
RajeshT, Renato Golin, riestere, Roger Iyengar, Rohit Santhanam, Rsanthanam-Amd,
Sadeed Pv, Samuel Marks, Shimokawa, Naoaki, Siddhesh Kothadi, Simengliu-Nv,
Sindre Seppola, snadampal, Srinivasan Narayanamoorthy, sushreebarsa,
syedshahbaaz, Tamas Bela Feher, Tatwai Chong, Thibaut Goetghebuer-Planchon,
tilakrayal, Tom Anderson, Tomohiro Endo, Trevor Morris, vibhutisawant,
Victor Zhang, Vremold, Xavier Bonaventura, Yanming Wang, Yasir Modak,
Yimei Sun, Yong Tang, Yulv-Git, zhuoran.liu, zotanika

# Release 2.10.1

This release introduces several vulnerability fixes:

*   Fixes an OOB seg fault in `DynamicStitch` due to missing validation ([CVE-2022-41883](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41883))
*   Fixes an overflow in `tf.keras.losses.poisson` ([CVE-2022-41887](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41887))
*   Fixes a heap OOB failure in `ThreadUnsafeUnigramCandidateSampler` caused by missing validation ([CVE-2022-41880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41880))
*   Fixes a segfault in `ndarray_tensor_bridge` ([CVE-2022-41884](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41884))
*   Fixes an overflow in `FusedResizeAndPadConv2D` ([CVE-2022-41885](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41885))
*   Fixes a overflow in `ImageProjectiveTransformV2` ([CVE-2022-41886](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41886))
*   Fixes an FPE in `tf.image.generate_bounding_box_proposals` on GPU ([CVE-2022-41888](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41888))
*   Fixes a segfault in `pywrap_tfe_src` caused by invalid attributes ([CVE-2022-41889](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41889))
*   Fixes a `CHECK` fail in `BCast` ([CVE-2022-41890](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41890))
*   Fixes a segfault in `TensorListConcat` ([CVE-2022-41891](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41891))
*   Fixes a `CHECK_EQ` fail in `TensorListResize` ([CVE-2022-41893](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41893))
*   Fixes an overflow in `CONV_3D_TRANSPOSE` on TFLite ([CVE-2022-41894](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41894))
*   Fixes a heap OOB in `MirrorPadGrad` ([CVE-2022-41895](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41895))
*   Fixes a crash in `Mfcc` ([CVE-2022-41896](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41896))
*   Fixes a heap OOB in `FractionalMaxPoolGrad` ([CVE-2022-41897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41897))
*   Fixes a `CHECK` fail in `SparseFillEmptyRowsGrad` ([CVE-2022-41898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41898))
*   Fixes a `CHECK` fail in `SdcaOptimizer` ([CVE-2022-41899](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41899))
*   Fixes a heap OOB in `FractionalAvgPool` and `FractionalMaxPool`([CVE-2022-41900](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41900))
*   Fixes a `CHECK_EQ` in `SparseMatrixNNZ` ([CVE-2022-41901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41901))
*   Fixes an OOB write in grappler ([CVE-2022-41902](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41902))
*   Fixes a overflow in `ResizeNearestNeighborGrad` ([CVE-2022-41907](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41907))
*   Fixes a `CHECK` fail in `PyFunc` ([CVE-2022-41908](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41908))
*   Fixes a segfault in `CompositeTensorVariantToComponents` ([CVE-2022-41909](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41909))
*   Fixes a invalid char to bool conversion in printing a tensor ([CVE-2022-41911](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41911))
*   Fixes a heap overflow in `QuantizeAndDequantizeV2` ([CVE-2022-41910](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41910))
*   Fixes a `CHECK` failure in `SobolSample` via missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` in eager mode ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))

# Release 2.9.3

This release introduces several vulnerability fixes:

*   Fixes an overflow in `tf.keras.losses.poisson` ([CVE-2022-41887](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41887))
*   Fixes a heap OOB failure in `ThreadUnsafeUnigramCandidateSampler` caused by missing validation ([CVE-2022-41880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41880))
*   Fixes a segfault in `ndarray_tensor_bridge` ([CVE-2022-41884](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41884))
*   Fixes an overflow in `FusedResizeAndPadConv2D` ([CVE-2022-41885](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41885))
*   Fixes a overflow in `ImageProjectiveTransformV2` ([CVE-2022-41886](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41886))
*   Fixes an FPE in `tf.image.generate_bounding_box_proposals` on GPU ([CVE-2022-41888](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41888))
*   Fixes a segfault in `pywrap_tfe_src` caused by invalid attributes ([CVE-2022-41889](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41889))
*   Fixes a `CHECK` fail in `BCast` ([CVE-2022-41890](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41890))
*   Fixes a segfault in `TensorListConcat` ([CVE-2022-41891](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41891))
*   Fixes a `CHECK_EQ` fail in `TensorListResize` ([CVE-2022-41893](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41893))
*   Fixes an overflow in `CONV_3D_TRANSPOSE` on TFLite ([CVE-2022-41894](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41894))
*   Fixes a heap OOB in `MirrorPadGrad` ([CVE-2022-41895](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41895))
*   Fixes a crash in `Mfcc` ([CVE-2022-41896](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41896))
*   Fixes a heap OOB in `FractionalMaxPoolGrad` ([CVE-2022-41897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41897))
*   Fixes a `CHECK` fail in `SparseFillEmptyRowsGrad` ([CVE-2022-41898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41898))
*   Fixes a `CHECK` fail in `SdcaOptimizer` ([CVE-2022-41899](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41899))
*   Fixes a heap OOB in `FractionalAvgPool` and `FractionalMaxPool`([CVE-2022-41900](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41900))
*   Fixes a `CHECK_EQ` in `SparseMatrixNNZ` ([CVE-2022-41901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41901))
*   Fixes an OOB write in grappler ([CVE-2022-41902](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41902))
*   Fixes a overflow in `ResizeNearestNeighborGrad` ([CVE-2022-41907](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41907))
*   Fixes a `CHECK` fail in `PyFunc` ([CVE-2022-41908](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41908))
*   Fixes a segfault in `CompositeTensorVariantToComponents` ([CVE-2022-41909](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41909))
*   Fixes a invalid char to bool conversion in printing a tensor ([CVE-2022-41911](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41911))
*   Fixes a heap overflow in `QuantizeAndDequantizeV2` ([CVE-2022-41910](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41910))
*   Fixes a `CHECK` failure in `SobolSample` via missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` in eager mode ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))

# Release 2.8.4

This release introduces several vulnerability fixes:

*   Fixes a heap OOB failure in `ThreadUnsafeUnigramCandidateSampler` caused by missing validation ([CVE-2022-41880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41880))
*   Fixes a segfault in `ndarray_tensor_bridge` ([CVE-2022-41884](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41884))
*   Fixes an overflow in `FusedResizeAndPadConv2D` ([CVE-2022-41885](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41885))
*   Fixes a overflow in `ImageProjectiveTransformV2` ([CVE-2022-41886](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41886))
*   Fixes an FPE in `tf.image.generate_bounding_box_proposals` on GPU ([CVE-2022-41888](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41888))
*   Fixes a segfault in `pywrap_tfe_src` caused by invalid attributes ([CVE-2022-41889](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41889))
*   Fixes a `CHECK` fail in `BCast` ([CVE-2022-41890](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41890))
*   Fixes a segfault in `TensorListConcat` ([CVE-2022-41891](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41891))
*   Fixes a `CHECK_EQ` fail in `TensorListResize` ([CVE-2022-41893](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41893))
*   Fixes an overflow in `CONV_3D_TRANSPOSE` on TFLite ([CVE-2022-41894](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41894))
*   Fixes a heap OOB in `MirrorPadGrad` ([CVE-2022-41895](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41895))
*   Fixes a crash in `Mfcc` ([CVE-2022-41896](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41896))
*   Fixes a heap OOB in `FractionalMaxPoolGrad` ([CVE-2022-41897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41897))
*   Fixes a `CHECK` fail in `SparseFillEmptyRowsGrad` ([CVE-2022-41898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41898))
*   Fixes a `CHECK` fail in `SdcaOptimizer` ([CVE-2022-41899](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41899))
*   Fixes a heap OOB in `FractionalAvgPool` and `FractionalMaxPool`([CVE-2022-41900](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41900))
*   Fixes a `CHECK_EQ` in `SparseMatrixNNZ` ([CVE-2022-41901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41901))
*   Fixes an OOB write in grappler ([CVE-2022-41902](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41902))
*   Fixes a overflow in `ResizeNearestNeighborGrad` ([CVE-2022-41907](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41907))
*   Fixes a `CHECK` fail in `PyFunc` ([CVE-2022-41908](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41908))
*   Fixes a segfault in `CompositeTensorVariantToComponents` ([CVE-2022-41909](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41909))
*   Fixes a invalid char to bool conversion in printing a tensor ([CVE-2022-41911](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41911))
*   Fixes a heap overflow in `QuantizeAndDequantizeV2` ([CVE-2022-41910](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-41910))
*   Fixes a `CHECK` failure in `SobolSample` via missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` in eager mode ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))

# Release 2.10.0

## Breaking Changes

*   Causal attention in `keras.layers.Attention` and
    `keras.layers.AdditiveAttention` is now specified in the `call()` method via
    the `use_causal_mask` argument (rather than in the constructor), for
    consistency with other layers.
*   Some files in `tensorflow/python/training` have been moved to
    `tensorflow/python/tracking` and `tensorflow/python/checkpoint`. Please
    update your imports accordingly, the old files will be removed in Release
    2.11.
*   `tf.keras.optimizers.experimental.Optimizer` will graduate in Release 2.11,
    which means `tf.keras.optimizers.Optimizer` will be an alias of
    `tf.keras.optimizers.experimental.Optimizer`. The current
    `tf.keras.optimizers.Optimizer` will continue to be supported as
    `tf.keras.optimizers.legacy.Optimizer`,
    e.g.,`tf.keras.optimizers.legacy.Adam`. Most users won't be affected by this
    change, but please check the
    [API doc](https://www.tensorflow.org/api_docs/python/tf/keras/optimizers/experimental)
    if any API used in your workflow is changed or deprecated, and make
    adaptations. If you decide to keep using the old optimizer, please
    explicitly change your optimizer to `tf.keras.optimizers.legacy.Optimizer`.
*   RNG behavior change for `tf.keras.initializers`. Keras initializers will now
    use stateless random ops to generate random numbers.
    *   Both seeded and unseeded initializers will always generate the same
        values every time they are called (for a given variable shape). For
        unseeded initializers (`seed=None`), a random seed will be created and
        assigned at initializer creation (different initializer instances get
        different seeds).
    *   An unseeded initializer will raise a warning if it is reused (called)
        multiple times. This is because it would produce the same values each
        time, which may not be intended.
*   API changes under `tf.experimental.dtensor`:
    *   New API for initialization of CPU/GPU/TPU in dtensor.
        `dtensor.initialize_accelerator_system` and
        `dtensor.shutdown_accelerator_system`.
    *   The following existing API will be removed:
        `dtensor.initialize_multi_client`, `dtensor.initialize_tpu_system`, and
        `dtensor.shutdown_tpu_system`.

## Deprecations

*   The C++ `tensorflow::Code` and `tensorflow::Status` will become aliases of
    respectively `absl::StatusCode` and `absl::Status` in some future release.
    *   Use `tensorflow::OkStatus()` instead of `tensorflow::Status::OK()`.
    *   Stop constructing `Status` objects from `tensorflow::error::Code`.
    *   One MUST NOT access `tensorflow::errors::Code` fields. Accessing
        `tensorflow::error::Code` fields is fine.
        *   Use the constructors such as `tensorflow::errors:InvalidArgument` to
            create status using an error code without accessing it.
        *   Use the free functions such as
            `tensorflow::errors::IsInvalidArgument` if needed.
        *   In the last resort, use
            e.g.`static_cast<tensorflow::errors::Code>(error::Code::INVALID_ARGUMENT)`
            or `static_cast<int>(code)` for comparisons.
*   `tensorflow::StatusOr` will also become in the future an alias to
    `absl::StatusOr`, so use `StatusOr::value` instead of
    `StatusOr::ConsumeValueOrDie`.

## Major Features and Improvements

*   `tf.lite`:

    *   New operations supported:
        *   tflite SelectV2 now supports 5D.
        *   `tf.einsum` is supported with multiple unknown shapes.
        *   `tf.unsortedsegmentprod` op is supported.
        *   `tf.unsortedsegmentmax` op is supported.
        *   `tf.unsortedsegmentsum` op is supported.
    *   Updates to existing operations:
        *   `tfl.scatter_nd` now supports I1 for the `update` arg.
    *   Upgrade Flatbuffers v2.0.5 from v1.12.0

*   `tf.keras`:

    *   `EinsumDense` layer is moved from experimental to core. Its import path
        is moved from `tf.keras.layers.experimental.EinsumDense` to
        `tf.keras.layers.EinsumDense`.
    *   Added `tf.keras.utils.audio_dataset_from_directory` utility to easily
        generate audio classification datasets from directories of `.wav` files.
    *   Added `subset="both"` support in
        `tf.keras.utils.image_dataset_from_directory`,`tf.keras.utils.text_dataset_from_directory`,
        and `audio_dataset_from_directory`, to be used with the
        `validation_split` argument, for returning both dataset splits at once,
        as a tuple.
    *   Added `tf.keras.utils.split_dataset` utility to split a `Dataset` object
        or a list/tuple of arrays into two `Dataset` objects (e.g. train/test).
    *   Added step granularity to `BackupAndRestore` callback for handling
        distributed training failures & restarts. The training state can now be
        restored at the exact epoch and step at which it was previously saved
        before failing.
    *   Added
        [`tf.keras.dtensor.experimental.optimizers.AdamW`](https://www.tensorflow.org/api_docs/python/tf/keras/dtensor/experimental/optimizers/AdamW).
        This optimizer is similar to the existing
        [`keras.optimizers.experimental.AdamW`](https://www.tensorflow.org/api_docs/python/tf/keras/optimizers/experimental/AdamW),
        and works in the DTensor training use case.
    *   Improved masking support for
        [`tf.keras.layers.MultiHeadAttention`](https://www.tensorflow.org/api_docs/python/tf/keras/layers/MultiHeadAttention).
        *   Implicit masks for `query`, `key` and `value` inputs will
            automatically be used to compute a correct attention mask for the
            layer. These padding masks will be combined with any
            `attention_mask` passed in directly when calling the layer. This can
            be used with
            [`tf.keras.layers.Embedding`](https://www.tensorflow.org/api_docs/python/tf/keras/layers/Embedding)
            with `mask_zero=True` to automatically infer a correct padding mask.
        *   Added a `use_causal_mask` call time argument to the layer. Passing
            `use_causal_mask=True` will compute a causal attention mask, and
            optionally combine it with any `attention_mask` passed in directly
            when calling the layer.
    *   Added `ignore_class` argument in the loss
        `SparseCategoricalCrossentropy` and metrics `IoU` and `MeanIoU`, to
        specify a class index to be ignored during loss/metric computation (e.g.
        a background/void class).
    *   Added
        [`tf.keras.models.experimental.SharpnessAwareMinimization`](https://www.tensorflow.org/api_docs/python/tf/keras/models/experimental/SharpnessAwareMinimization).
        This class implements the sharpness-aware minimization technique, which
        boosts model performance on various tasks, e.g., ResNet on image
        classification.

*   `tf.data`:

    *   Added support for cross-trainer data caching in tf.data service. This
        saves computation resources when concurrent training jobs train from the
        same dataset. See
        (https://www.tensorflow.org/api_docs/python/tf/data/experimental/service#sharing_tfdata_service_with_concurrent_trainers)
        for more details.
    *   Added `dataset_id` to `tf.data.experimental.service.register_dataset`.
        If provided, `tf.data` service will use the provided ID for the dataset.
        If the dataset ID already exists, no new dataset will be registered.
        This is useful if multiple training jobs need to use the same dataset
        for training. In this case, users should call `register_dataset` with
        the same `dataset_id`.
    *   Added a new field, `inject_prefetch`, to
        `tf.data.experimental.OptimizationOptions`. If it is set to
        `True`,`tf.data` will now automatically add a `prefetch` transformation
        to datasets that end in synchronous transformations. This enables data
        generation to be overlapped with data consumption. This may cause a
        small increase in memory usage due to buffering. To enable this
        behavior, set `inject_prefetch=True` in
        `tf.data.experimental.OptimizationOptions`.
    *   Added a new value to `tf.data.Options.autotune.autotune_algorithm`:
        `STAGE_BASED`. If the autotune algorithm is set to `STAGE_BASED`, then
        it runs a new algorithm that can get the same performance with lower
        CPU/memory usage.
    *   Added
        [`tf.data.experimental.from_list`](https://www.tensorflow.org/api_docs/python/tf/data/experimental/from_list),
        a new API for creating `Dataset`s from lists of elements.
    *   Graduated experimental APIs:
        *   [`tf.data.Dataset.counter`](https://www.tensorflow.org/api_docs/python/tf/data/Dataset/#counter),
            which creates `Dataset`s of indefinite sequences of numbers.
        *   [`tf.data.Dataset.ignore_errors`](https://www.tensorflow.org/api_docs/python/tf/data/Dataset/#ignore_errors),
            which drops erroneous elements from `Dataset`s.
    *   Added
        [`tf.data.Dataset.rebatch`](https://www.tensorflow.org/api_docs/python/tf/data/Dataset#rebatch),
        a new API for rebatching the elements of a dataset.

*   `tf.distribute`:

    *   Added
        [`tf.distribute.experimental.PreemptionCheckpointHandler`](https://www.tensorflow.org/api_docs/python/tf/distribute/experimental/PreemptionCheckpointHandler)
        to handle worker preemption/maintenance and cluster-wise consistent
        error reporting for `tf.distribute.MultiWorkerMirroredStrategy`.
        Specifically, for the type of interruption with advance notice, it
        automatically saves a checkpoint, exits the program without raising an
        unrecoverable error, and restores the progress when training restarts.

*   `tf.math`:

    *   Added `tf.math.approx_max_k` and `tf.math.approx_min_k` which are the
        optimized alternatives to `tf.math.top_k` on TPU. The performance
        difference ranges from 8 to 100 times depending on the size of k. When
        running on CPU and GPU, a non-optimized XLA kernel is used.

*   `tf.train`:

    *   Added `tf.train.TrackableView` which allows users to inspect the
        TensorFlow Trackable object (e.g. `tf.Module`, Keras Layers and models).

*   `tf.vectorized_map`:

    *   Added an optional parameter: `warn`. This parameter controls whether or
        not warnings will be printed when operations in the provided `fn` fall
        back to a while loop.

*   XLA:

    *   `tf.distribute.MultiWorkerMirroredStrategy` is now compilable with XLA.
    *   [Compute Library for the Arm® Architecture (ACL)](https://github.com/ARM-software/ComputeLibrary)
        is supported for aarch64 CPU XLA runtime

*   CPU performance optimizations:

    *   **x86 CPUs**:
        [oneDNN](https://github.com/tensorflow/community/blob/master/rfcs/20210930-enable-onednn-ops.md)
        bfloat16 auto-mixed precision grappler graph optimization pass has been
        renamed from `auto_mixed_precision_mkl` to
        `auto_mixed_precision_onednn_bfloat16`. See example usage
        [here](https://www.intel.com/content/www/us/en/developer/articles/guide/getting-started-with-automixedprecisionmkl.html).
    *   **aarch64 CPUs:** Experimental performance optimizations from
        [Compute Library for the Arm® Architecture (ACL)](https://github.com/ARM-software/ComputeLibrary)
        are available through oneDNN in the default Linux aarch64 package (`pip
        install tensorflow`).
        *   The optimizations are disabled by default.
        *   Set the environment variable `TF_ENABLE_ONEDNN_OPTS=1` to enable the
            optimizations. Setting the variable to 0 or unsetting it will
            disable the optimizations.
        *   These optimizations can yield slightly different numerical results
            from when they are off due to floating-point round-off errors from
            different computation approaches and orders.
        *   To verify that the optimizations are on, look for a message with
            "*oneDNN custom operations are on*" in the log. If the exact phrase
            is not there, it means they are off.

## Bug Fixes and Other Changes

*   New argument `experimental_device_ordinal` in `LogicalDeviceConfiguration`
    to control the order of logical devices (GPU only).

*   `tf.keras`:

    *   Changed the TensorBoard tag names produced by the
        `tf.keras.callbacks.TensorBoard` callback, so that summaries logged
        automatically for model weights now include either a `/histogram` or
        `/image` suffix in their tag names, in order to prevent tag name
        collisions across summary types.

*   When running on GPU (with cuDNN version 7.6.3 or
    later),`tf.nn.depthwise_conv2d` backprop to `filter` (and therefore also
    `tf.keras.layers.DepthwiseConv2D`) now operate deterministically (and
    `tf.errors.UnimplementedError` is no longer thrown) when op-determinism has
    been enabled via `tf.config.experimental.enable_op_determinism`. This closes
    issue [47174](https://github.com/tensorflow/tensorflow/issues/47174).

*   `tf.random`

    *   Added `tf.random.experimental.stateless_shuffle`, a stateless version of
        `tf.random.shuffle`.

## Security

*   Fixes a `CHECK` failure in tf.reshape caused by overflows ([CVE-2022-35934](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35934))
*   Fixes a `CHECK` failure in `SobolSample` caused by missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes an OOB read in `Gather_nd` op in TF Lite ([CVE-2022-35937](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35937))
*   Fixes a `CHECK` failure in `TensorListReserve` caused by missing validation ([CVE-2022-35960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35960))
*   Fixes an OOB write in `Scatter_nd` op in TF Lite ([CVE-2022-35939](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35939))
*   Fixes an integer overflow in `RaggedRangeOp` ([CVE-2022-35940](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35940))
*   Fixes a `CHECK` failure in `AvgPoolOp` ([CVE-2022-35941](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35941))
*   Fixes a `CHECK` failures in `UnbatchGradOp` ([CVE-2022-35952](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35952))
*   Fixes a segfault TFLite converter on per-channel quantized transposed convolutions ([CVE-2022-36027](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36027))
*   Fixes a `CHECK` failures in `AvgPool3DGrad` ([CVE-2022-35959](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35959))
*   Fixes a `CHECK` failures in `FractionalAvgPoolGrad` ([CVE-2022-35963](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35963))
*   Fixes a segfault in `BlockLSTMGradV2` ([CVE-2022-35964](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35964))
*   Fixes a segfault in `LowerBound` and `UpperBound` ([CVE-2022-35965](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35965))
*   Fixes a segfault in `QuantizedAvgPool` ([CVE-2022-35966](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35966))
*   Fixes a segfault in `QuantizedAdd` ([CVE-2022-35967](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35967))
*   Fixes a `CHECK` fail in `AvgPoolGrad` ([CVE-2022-35968](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35968))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35969](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35969))
*   Fixes a segfault in `QuantizedInstanceNorm` ([CVE-2022-35970](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35970))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVars` ([CVE-2022-35971](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35971))
*   Fixes a segfault in `Requantize` ([CVE-2022-36017](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36017))
*   Fixes a segfault in `QuantizedBiasAdd` ([CVE-2022-35972](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35972))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannel` ([CVE-2022-36019](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36019))
*   Fixes a segfault in `QuantizedMatMul` ([CVE-2022-35973](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35973))
*   Fixes a segfault in `QuantizeDownAndShrinkRange` ([CVE-2022-35974](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35974))
*   Fixes segfaults in `QuantizedRelu` and `QuantizedRelu6` ([CVE-2022-35979](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35979))
*   Fixes a `CHECK` fail in `FractionalMaxPoolGrad` ([CVE-2022-35981](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35981))
*   Fixes a `CHECK` fail in `RaggedTensorToVariant` ([CVE-2022-36018](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36018))
*   Fixes a `CHECK` fail in `QuantizeAndDequantizeV3` ([CVE-2022-36026](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36026))
*   Fixes a segfault in `SparseBincount` ([CVE-2022-35982](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35982))
*   Fixes a `CHECK` fail in `Save` and `SaveSlices` ([CVE-2022-35983](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35983))
*   Fixes a `CHECK` fail in `ParameterizedTruncatedNormal` ([CVE-2022-35984](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35984))
*   Fixes a `CHECK` fail in `LRNGrad` ([CVE-2022-35985](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35985))
*   Fixes a segfault in `RaggedBincount` ([CVE-2022-35986](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35986))
*   Fixes a `CHECK` fail in `DenseBincount` ([CVE-2022-35987](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35987))
*   Fixes a `CHECK` fail in `tf.linalg.matrix_rank` ([CVE-2022-35988](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35988))
*   Fixes a `CHECK` fail in `MaxPool` ([CVE-2022-35989](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35989))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35999](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35999))
*   Fixes a `CHECK` fail in `EmptyTensorList` ([CVE-2022-35998](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35998))
*   Fixes a `CHECK` fail in `tf.sparse.cross` ([CVE-2022-35997](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35997))
*   Fixes a floating point exception in `Conv2D` ([CVE-2022-35996](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35996))
*   Fixes a `CHECK` fail in `AudioSummaryV2` ([CVE-2022-35995](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35995))
*   Fixes a `CHECK` fail in `CollectiveGather` ([CVE-2022-35994](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35994))
*   Fixes a `CHECK` fail in `SetSize` ([CVE-2022-35993](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35993))
*   Fixes a `CHECK` fail in `TensorListFromTensor` ([CVE-2022-35992](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35992))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` ([CVE-2022-35991](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35991))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannelGradient` ([CVE-2022-35990](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35990))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsGradient` ([CVE-2022-36005](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36005))
*   Fixes a `CHECK` fail in `tf.random.gamma` ([CVE-2022-36004](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36004))
*   Fixes a `CHECK` fail in `RandomPoissonV2` ([CVE-2022-36003](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36003))
*   Fixes a `CHECK` fail in `Unbatch` ([CVE-2022-36002](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36002))
*   Fixes a `CHECK` fail in `DrawBoundingBoxes` ([CVE-2022-36001](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36001))
*   Fixes a `CHECK` fail in `Eig` ([CVE-2022-36000](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36000))
*   Fixes a null dereference on MLIR on empty function attributes ([CVE-2022-36011](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36011))
*   Fixes an assertion failure on MLIR empty edge names ([CVE-2022-36012](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36012))
*   Fixes a null-dereference in `mlir::tfg::GraphDefImporter::ConvertNodeDef` ([CVE-2022-36013](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36013))
*   Fixes a null-dereference in `mlir::tfg::TFOp::nameAttr` ([CVE-2022-36014](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36014))
*   Fixes an integer overflow in math ops ([CVE-2022-36015](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36015))
*   Fixes a `CHECK`-fail in `tensorflow::full_type::SubstituteFromAttrs` ([CVE-2022-36016](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36016))
*   Fixes an OOB read in `Gather_nd` op in TF Lite Micro ([CVE-2022-35938](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35938))

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abolfazl Shahbazi, Adam Lanicek, Amin Benarieb, andreii, Andrew Fitzgibbon, Andrew Goodbody, angerson, Ashiq Imran, Aurélien Geron, Banikumar Maiti (Intel Aipg), Ben Barsdell, Ben Mares, bhack, Bhavani Subramanian, Bill Schnurr, Byungsoo Oh, Chandra Sr Potula, Chengji Yao, Chris Carpita, Christopher Bate, chunduriv, Cliff Woolley, Cliffs Dover, Cloud Han, Code-Review-Doctor, DEKHTIARJonathan, Deven Desai, Djacon, Duncan Riach, fedotoff, fo40225, Frederic Bastien, gadagashwini, Gauri1 Deshpande, guozhong.zhuang, Hui Peng, James Gerity, Jason Furmanek, Jonathan Dekhtiar, Jueon Park, Kaixi Hou, Kanvi Khanna, Keith Smiley, Koan-Sin Tan, Kulin Seth, kushanam, Learning-To-Play, Li-Wen Chang, lipracer, liuyuanqiang, Louis Sugy, Lucas David, Lukas Geiger, Mahmoud Abuzaina, Marius Brehler, Maxiwell S. Garcia, mdfaijul, Meenakshi Venkataraman, Michal Szutenberg, Michele Di Giorgio, Mickaël Salamin, Nathan John Sircombe, Nathan Luehr, Neil Girdhar, Nils Reichardt, Nishidha Panpaliya, Nobuo Tsukamoto, Om Thakkar, Patrice Vignola, Philipp Hack, Pooya Jannaty, Prianka Liz Kariat, pshiko, Rajeshwar Reddy T, rdl4199, Rohit Santhanam, Rsanthanam-Amd, Sachin Muradi, Saoirse Stewart, Serge Panev, Shu Wang, Srinivasan Narayanamoorthy, Stella Stamenova, Stephan Hartmann, Sunita Nadampalli, synandi, Tamas Bela Feher, Tao Xu, Thibaut Goetghebuer-Planchon, Trevor Morris, Xiaoming (Jason) Cui, Yimei Sun, Yong Tang, Yuanqiang Liu, Yulv-Git, Zhoulong Jiang, ZihengJiang

# Release 2.9.2

This releases introduces several vulnerability fixes:

*   Fixes a `CHECK` failure in tf.reshape caused by overflows ([CVE-2022-35934](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35934))
*   Fixes a `CHECK` failure in `SobolSample` caused by missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes an OOB read in `Gather_nd` op in TF Lite ([CVE-2022-35937](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35937))
*   Fixes a `CHECK` failure in `TensorListReserve` caused by missing validation ([CVE-2022-35960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35960))
*   Fixes an OOB write in `Scatter_nd` op in TF Lite ([CVE-2022-35939](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35939))
*   Fixes an integer overflow in `RaggedRangeOp` ([CVE-2022-35940](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35940))
*   Fixes a `CHECK` failure in `AvgPoolOp` ([CVE-2022-35941](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35941))
*   Fixes a `CHECK` failures in `UnbatchGradOp` ([CVE-2022-35952](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35952))
*   Fixes a segfault TFLite converter on per-channel quantized transposed convolutions ([CVE-2022-36027](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36027))
*   Fixes a `CHECK` failures in `AvgPool3DGrad` ([CVE-2022-35959](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35959))
*   Fixes a `CHECK` failures in `FractionalAvgPoolGrad` ([CVE-2022-35963](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35963))
*   Fixes a segfault in `BlockLSTMGradV2` ([CVE-2022-35964](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35964))
*   Fixes a segfault in `LowerBound` and `UpperBound` ([CVE-2022-35965](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35965))
*   Fixes a segfault in `QuantizedAvgPool` ([CVE-2022-35966](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35966))
*   Fixes a segfault in `QuantizedAdd` ([CVE-2022-35967](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35967))
*   Fixes a `CHECK` fail in `AvgPoolGrad` ([CVE-2022-35968](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35968))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35969](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35969))
*   Fixes a segfault in `QuantizedInstanceNorm` ([CVE-2022-35970](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35970))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVars` ([CVE-2022-35971](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35971))
*   Fixes a segfault in `Requantize` ([CVE-2022-36017](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36017))
*   Fixes a segfault in `QuantizedBiasAdd` ([CVE-2022-35972](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35972))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannel` ([CVE-2022-36019](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36019))
*   Fixes a segfault in `QuantizedMatMul` ([CVE-2022-35973](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35973))
*   Fixes a segfault in `QuantizeDownAndShrinkRange` ([CVE-2022-35974](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35974))
*   Fixes segfaults in `QuantizedRelu` and `QuantizedRelu6` ([CVE-2022-35979](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35979))
*   Fixes a `CHECK` fail in `FractionalMaxPoolGrad` ([CVE-2022-35981](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35981))
*   Fixes a `CHECK` fail in `RaggedTensorToVariant` ([CVE-2022-36018](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36018))
*   Fixes a `CHECK` fail in `QuantizeAndDequantizeV3` ([CVE-2022-36026](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36026))
*   Fixes a segfault in `SparseBincount` ([CVE-2022-35982](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35982))
*   Fixes a `CHECK` fail in `Save` and `SaveSlices` ([CVE-2022-35983](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35983))
*   Fixes a `CHECK` fail in `ParameterizedTruncatedNormal` ([CVE-2022-35984](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35984))
*   Fixes a `CHECK` fail in `LRNGrad` ([CVE-2022-35985](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35985))
*   Fixes a segfault in `RaggedBincount` ([CVE-2022-35986](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35986))
*   Fixes a `CHECK` fail in `DenseBincount` ([CVE-2022-35987](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35987))
*   Fixes a `CHECK` fail in `tf.linalg.matrix_rank` ([CVE-2022-35988](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35988))
*   Fixes a `CHECK` fail in `MaxPool` ([CVE-2022-35989](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35989))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35999](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35999))
*   Fixes a `CHECK` fail in `EmptyTensorList` ([CVE-2022-35998](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35998))
*   Fixes a `CHECK` fail in `tf.sparse.cross` ([CVE-2022-35997](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35997))
*   Fixes a floating point exception in `Conv2D` ([CVE-2022-35996](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35996))
*   Fixes a `CHECK` fail in `AudioSummaryV2` ([CVE-2022-35995](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35995))
*   Fixes a `CHECK` fail in `CollectiveGather` ([CVE-2022-35994](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35994))
*   Fixes a `CHECK` fail in `SetSize` ([CVE-2022-35993](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35993))
*   Fixes a `CHECK` fail in `TensorListFromTensor` ([CVE-2022-35992](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35992))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` ([CVE-2022-35991](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35991))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannelGradient` ([CVE-2022-35990](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35990))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsGradient` ([CVE-2022-36005](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36005))
*   Fixes a `CHECK` fail in `tf.random.gamma` ([CVE-2022-36004](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36004))
*   Fixes a `CHECK` fail in `RandomPoissonV2` ([CVE-2022-36003](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36003))
*   Fixes a `CHECK` fail in `Unbatch` ([CVE-2022-36002](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36002))
*   Fixes a `CHECK` fail in `DrawBoundingBoxes` ([CVE-2022-36001](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36001))
*   Fixes a `CHECK` fail in `Eig` ([CVE-2022-36000](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36000))
*   Fixes a null dereference on MLIR on empty function attributes ([CVE-2022-36011](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36011))
*   Fixes an assertion failure on MLIR empty edge names ([CVE-2022-36012](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36012))
*   Fixes a null-dereference in `mlir::tfg::GraphDefImporter::ConvertNodeDef` ([CVE-2022-36013](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36013))
*   Fixes a null-dereference in `mlir::tfg::TFOp::nameAttr` ([CVE-2022-36014](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36014))
*   Fixes an integer overflow in math ops ([CVE-2022-36015](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36015))
*   Fixes a `CHECK`-fail in `tensorflow::full_type::SubstituteFromAttrs` ([CVE-2022-36016](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36016))
*   Fixes an OOB read in `Gather_nd` op in TF Lite Micro ([CVE-2022-35938](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35938))

# Release 2.8.3

This releases introduces several vulnerability fixes:
*   Fixes a `CHECK` failure in tf.reshape caused by overflows ([CVE-2022-35934](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35934))
*   Fixes a `CHECK` failure in `SobolSample` caused by missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes an OOB read in `Gather_nd` op in TF Lite ([CVE-2022-35937](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35937))
*   Fixes a `CHECK` failure in `TensorListReserve` caused by missing validation ([CVE-2022-35960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35960))
*   Fixes an OOB write in `Scatter_nd` op in TF Lite ([CVE-2022-35939](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35939))
*   Fixes an integer overflow in `RaggedRangeOp` ([CVE-2022-35940](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35940))
*   Fixes a `CHECK` failure in `AvgPoolOp` ([CVE-2022-35941](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35941))
*   Fixes a `CHECK` failures in `UnbatchGradOp` ([CVE-2022-35952](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35952))
*   Fixes a segfault TFLite converter on per-channel quantized transposed convolutions ([CVE-2022-36027](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36027))
*   Fixes a `CHECK` failures in `AvgPool3DGrad` ([CVE-2022-35959](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35959))
*   Fixes a `CHECK` failures in `FractionalAvgPoolGrad` ([CVE-2022-35963](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35963))
*   Fixes a segfault in `BlockLSTMGradV2` ([CVE-2022-35964](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35964))
*   Fixes a segfault in `LowerBound` and `UpperBound` ([CVE-2022-35965](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35965))
*   Fixes a segfault in `QuantizedAvgPool` ([CVE-2022-35966](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35966))
*   Fixes a segfault in `QuantizedAdd` ([CVE-2022-35967](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35967))
*   Fixes a `CHECK` fail in `AvgPoolGrad` ([CVE-2022-35968](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35968))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35969](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35969))
*   Fixes a segfault in `QuantizedInstanceNorm` ([CVE-2022-35970](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35970))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVars` ([CVE-2022-35971](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35971))
*   Fixes a segfault in `Requantize` ([CVE-2022-36017](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36017))
*   Fixes a segfault in `QuantizedBiasAdd` ([CVE-2022-35972](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35972))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannel` ([CVE-2022-36019](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36019))
*   Fixes a segfault in `QuantizedMatMul` ([CVE-2022-35973](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35973))
*   Fixes a segfault in `QuantizeDownAndShrinkRange` ([CVE-2022-35974](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35974))
*   Fixes segfaults in `QuantizedRelu` and `QuantizedRelu6` ([CVE-2022-35979](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35979))
*   Fixes a `CHECK` fail in `FractionalMaxPoolGrad` ([CVE-2022-35981](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35981))
*   Fixes a `CHECK` fail in `RaggedTensorToVariant` ([CVE-2022-36018](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36018))
*   Fixes a `CHECK` fail in `QuantizeAndDequantizeV3` ([CVE-2022-36026](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36026))
*   Fixes a segfault in `SparseBincount` ([CVE-2022-35982](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35982))
*   Fixes a `CHECK` fail in `Save` and `SaveSlices` ([CVE-2022-35983](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35983))
*   Fixes a `CHECK` fail in `ParameterizedTruncatedNormal` ([CVE-2022-35984](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35984))
*   Fixes a `CHECK` fail in `LRNGrad` ([CVE-2022-35985](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35985))
*   Fixes a segfault in `RaggedBincount` ([CVE-2022-35986](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35986))
*   Fixes a `CHECK` fail in `DenseBincount` ([CVE-2022-35987](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35987))
*   Fixes a `CHECK` fail in `tf.linalg.matrix_rank` ([CVE-2022-35988](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35988))
*   Fixes a `CHECK` fail in `MaxPool` ([CVE-2022-35989](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35989))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35999](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35999))
*   Fixes a `CHECK` fail in `EmptyTensorList` ([CVE-2022-35998](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35998))
*   Fixes a `CHECK` fail in `tf.sparse.cross` ([CVE-2022-35997](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35997))
*   Fixes a floating point exception in `Conv2D` ([CVE-2022-35996](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35996))
*   Fixes a `CHECK` fail in `AudioSummaryV2` ([CVE-2022-35995](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35995))
*   Fixes a `CHECK` fail in `CollectiveGather` ([CVE-2022-35994](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35994))
*   Fixes a `CHECK` fail in `SetSize` ([CVE-2022-35993](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35993))
*   Fixes a `CHECK` fail in `TensorListFromTensor` ([CVE-2022-35992](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35992))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` ([CVE-2022-35991](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35991))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannelGradient` ([CVE-2022-35990](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35990))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsGradient` ([CVE-2022-36005](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36005))
*   Fixes a `CHECK` fail in `tf.random.gamma` ([CVE-2022-36004](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36004))
*   Fixes a `CHECK` fail in `RandomPoissonV2` ([CVE-2022-36003](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36003))
*   Fixes a `CHECK` fail in `Unbatch` ([CVE-2022-36002](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36002))
*   Fixes a `CHECK` fail in `DrawBoundingBoxes` ([CVE-2022-36001](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36001))
*   Fixes a `CHECK` fail in `Eig` ([CVE-2022-36000](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36000))
*   Fixes a null dereference on MLIR on empty function attributes ([CVE-2022-36011](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36011))
*   Fixes an assertion failure on MLIR empty edge names ([CVE-2022-36012](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36012))
*   Fixes a null-dereference in `mlir::tfg::GraphDefImporter::ConvertNodeDef` ([CVE-2022-36013](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36013))
*   Fixes a null-dereference in `mlir::tfg::TFOp::nameAttr` ([CVE-2022-36014](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36014))
*   Fixes an integer overflow in math ops ([CVE-2022-36015](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36015))
*   Fixes a `CHECK`-fail in `tensorflow::full_type::SubstituteFromAttrs` ([CVE-2022-36016](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36016))
*   Fixes an OOB read in `Gather_nd` op in TF Lite Micro ([CVE-2022-35938](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35938))

# Release 2.7.4

**Note**: This is the last release in the 2.7.x series

This releases introduces several vulnerability fixes:

*   Fixes a `CHECK` failure in tf.reshape caused by overflows ([CVE-2022-35934](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35934))
*   Fixes a `CHECK` failure in `SobolSample` caused by missing validation ([CVE-2022-35935](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35935))
*   Fixes an OOB read in `Gather_nd` op in TF Lite ([CVE-2022-35937](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35937))
*   Fixes a `CHECK` failure in `TensorListReserve` caused by missing validation ([CVE-2022-35960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35960))
*   Fixes an OOB write in `Scatter_nd` op in TF Lite ([CVE-2022-35939](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35939))
*   Fixes an integer overflow in `RaggedRangeOp` ([CVE-2022-35940](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35940))
*   Fixes a `CHECK` failure in `AvgPoolOp` ([CVE-2022-35941](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35941))
*   Fixes a `CHECK` failures in `UnbatchGradOp` ([CVE-2022-35952](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35952))
*   Fixes a segfault TFLite converter on per-channel quantized transposed convolutions ([CVE-2022-36027](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36027))
*   Fixes a `CHECK` failures in `AvgPool3DGrad` ([CVE-2022-35959](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35959))
*   Fixes a `CHECK` failures in `FractionalAvgPoolGrad` ([CVE-2022-35963](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35963))
*   Fixes a segfault in `BlockLSTMGradV2` ([CVE-2022-35964](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35964))
*   Fixes a segfault in `LowerBound` and `UpperBound` ([CVE-2022-35965](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35965))
*   Fixes a segfault in `QuantizedAvgPool` ([CVE-2022-35966](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35966))
*   Fixes a segfault in `QuantizedAdd` ([CVE-2022-35967](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35967))
*   Fixes a `CHECK` fail in `AvgPoolGrad` ([CVE-2022-35968](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35968))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35969](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35969))
*   Fixes a segfault in `QuantizedInstanceNorm` ([CVE-2022-35970](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35970))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVars` ([CVE-2022-35971](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35971))
*   Fixes a segfault in `Requantize` ([CVE-2022-36017](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36017))
*   Fixes a segfault in `QuantizedBiasAdd` ([CVE-2022-35972](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35972))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannel` ([CVE-2022-36019](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36019))
*   Fixes a segfault in `QuantizedMatMul` ([CVE-2022-35973](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35973))
*   Fixes a segfault in `QuantizeDownAndShrinkRange` ([CVE-2022-35974](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35974))
*   Fixes segfaults in `QuantizedRelu` and `QuantizedRelu6` ([CVE-2022-35979](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35979))
*   Fixes a `CHECK` fail in `FractionalMaxPoolGrad` ([CVE-2022-35981](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35981))
*   Fixes a `CHECK` fail in `RaggedTensorToVariant` ([CVE-2022-36018](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36018))
*   Fixes a `CHECK` fail in `QuantizeAndDequantizeV3` ([CVE-2022-36026](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36026))
*   Fixes a segfault in `SparseBincount` ([CVE-2022-35982](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35982))
*   Fixes a `CHECK` fail in `Save` and `SaveSlices` ([CVE-2022-35983](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35983))
*   Fixes a `CHECK` fail in `ParameterizedTruncatedNormal` ([CVE-2022-35984](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35984))
*   Fixes a `CHECK` fail in `LRNGrad` ([CVE-2022-35985](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35985))
*   Fixes a segfault in `RaggedBincount` ([CVE-2022-35986](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35986))
*   Fixes a `CHECK` fail in `DenseBincount` ([CVE-2022-35987](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35987))
*   Fixes a `CHECK` fail in `tf.linalg.matrix_rank` ([CVE-2022-35988](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35988))
*   Fixes a `CHECK` fail in `MaxPool` ([CVE-2022-35989](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35989))
*   Fixes a `CHECK` fail in `Conv2DBackpropInput` ([CVE-2022-35999](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35999))
*   Fixes a `CHECK` fail in `EmptyTensorList` ([CVE-2022-35998](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35998))
*   Fixes a `CHECK` fail in `tf.sparse.cross` ([CVE-2022-35997](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35997))
*   Fixes a floating point exception in `Conv2D` ([CVE-2022-35996](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35996))
*   Fixes a `CHECK` fail in `AudioSummaryV2` ([CVE-2022-35995](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35995))
*   Fixes a `CHECK` fail in `CollectiveGather` ([CVE-2022-35994](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35994))
*   Fixes a `CHECK` fail in `SetSize` ([CVE-2022-35993](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35993))
*   Fixes a `CHECK` fail in `TensorListFromTensor` ([CVE-2022-35992](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35992))
*   Fixes a `CHECK` fail in `TensorListScatter` and `TensorListScatterV2` ([CVE-2022-35991](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35991))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsPerChannelGradient` ([CVE-2022-35990](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35990))
*   Fixes a `CHECK` fail in `FakeQuantWithMinMaxVarsGradient` ([CVE-2022-36005](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36005))
*   Fixes a `CHECK` fail in `tf.random.gamma` ([CVE-2022-36004](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36004))
*   Fixes a `CHECK` fail in `RandomPoissonV2` ([CVE-2022-36003](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36003))
*   Fixes a `CHECK` fail in `Unbatch` ([CVE-2022-36002](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36002))
*   Fixes a `CHECK` fail in `DrawBoundingBoxes` ([CVE-2022-36001](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36001))
*   Fixes a `CHECK` fail in `Eig` ([CVE-2022-36000](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36000))
*   Fixes a null dereference on MLIR on empty function attributes ([CVE-2022-36011](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36011))
*   Fixes an assertion failure on MLIR empty edge names ([CVE-2022-36012](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36012))
*   Fixes a null-dereference in `mlir::tfg::GraphDefImporter::ConvertNodeDef` ([CVE-2022-36013](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36013))
*   Fixes a null-dereference in `mlir::tfg::TFOp::nameAttr` ([CVE-2022-36014](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36014))
*   Fixes an integer overflow in math ops ([CVE-2022-36015](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36015))
*   Fixes a `CHECK`-fail in `tensorflow::full_type::SubstituteFromAttrs` ([CVE-2022-36016](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-36016))
*   Fixes an OOB read in `Gather_nd` op in TF Lite Micro ([CVE-2022-35938](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-35938))

# Release 2.9.1

Add an upper bound for `protobuf` in `setup.py` since `protobuf` after version 3.20 is currently incompatible with TensorFlow. See https://github.com/tensorflow/tensorflow/issues/53234, https://github.com/protocolbuffers/protobuf/issues/9954 and https://github.com/tensorflow/tensorflow/issues/56077.

# Release 2.8.2

Add an upper bound for `protobuf` in `setup.py` since `protobuf` after version 3.20 is currently incompatible with TensorFlow. See https://github.com/tensorflow/tensorflow/issues/53234, https://github.com/protocolbuffers/protobuf/issues/9954 and https://github.com/tensorflow/tensorflow/issues/56077.

# Release 2.7.3

Add an upper bound for `protobuf` in `setup.py` since `protobuf` after version 3.20 is currently incompatible with TensorFlow. See https://github.com/tensorflow/tensorflow/issues/53234, https://github.com/protocolbuffers/protobuf/issues/9954 and https://github.com/tensorflow/tensorflow/issues/56077.

# Release 2.6.5

Add an upper bound for `protobuf` in `setup.py` since `protobuf` after version 3.20 is currently incompatible with TensorFlow. See https://github.com/tensorflow/tensorflow/issues/53234, https://github.com/protocolbuffers/protobuf/issues/9954 and https://github.com/tensorflow/tensorflow/issues/56077.

# Release 2.9.0

## Breaking Changes

*   Due to security issues in TF 2.8, all boosted trees code has now been removed (after being deprecated in TF 2.8). Users should switch to [TensorFlow Decision Forests](https://github.com/tensorflow/decision-forests).
*   Build, Compilation and Packaging
    * TensorFlow is now compiled with `_GLIBCXX_USE_CXX11_ABI=1`. Downstream projects that encounter `std::__cxx11` or `[abi:cxx11]` linker errors will need to adopt this compiler option. See [the GNU C++ Library docs on Dual ABI](https://gcc.gnu.org/onlinedocs/libstdc++/manual/using_dual_abi.html).
    * TensorFlow Python wheels now specifically conform to [manylinux2014](https://peps.python.org/pep-0599/), an upgrade from manylinux2010. The minimum Pip version supporting manylinux2014 is Pip 19.3 (see [pypa/manylinux](https://github.com/pypa/manylinux). This change may affect you if you have been using TensorFlow on a very old platform equivalent to CentOS 6, as manylinux2014 targets CentOS 7 as a compatibility base. Note that TensorFlow does not officially support either platform.
    * Discussion for these changes can be found on SIG Build's [TensorFlow Community Forum thread](https://discuss.tensorflow.org/t/tensorflow-linux-wheels-are-being-upgraded-to-manylinux2014/8339)
*   The `tf.keras.mixed_precision.experimental` API has been removed. The non-experimental symbols under `tf.keras.mixed_precision` have been available since TensorFlow 2.4 and should be used instead.
    * The non-experimental API has some minor differences from the experimental API. In most cases, you only need to make three minor changes:
      * Remove the word "experimental" from `tf.keras.mixed_precision` symbols. E.g., replace `tf.keras.mixed_precision.experimental.global_policy` with `tf.keras.mixed_precision.global_policy`.
      * Replace `tf.keras.mixed_precision.experimental.set_policy` with `tf.keras.mixed_precision.set_global_policy`. The experimental symbol `set_policy` was renamed to `set_global_policy` in the non-experimental API.
      * Replace `LossScaleOptimizer(opt, "dynamic")` with `LossScaleOptimizer(opt)`. If you pass anything other than `"dynamic"` to the second argument, see (1) of the next section.
    * In the following rare cases, you need to make more changes when switching to the non-experimental API:
      * If you passed anything other than `"dynamic"` to the `loss_scale` argument (the second argument) of `LossScaleOptimizer`:
          * The LossScaleOptimizer constructor takes in different arguments. See the [TF 2.7 documentation of tf.keras.mixed_precision.experimental.LossScaleOptimizer](https://www.tensorflow.org/versions/r2.7/api_docs/python/tf/keras/mixed_precision/experimental/LossScaleOptimizer) for details on the differences, which has examples on how to convert to the non-experimental LossScaleOptimizer.
      * If you passed a value to the `loss_scale` argument (the second argument) of `Policy`:
          * The experimental version of `Policy` optionally took in a `tf.compat.v1.mixed_precision.LossScale` in the constructor, which defaulted to a dynamic loss scale for the `"mixed_float16"` policy and no loss scale for other policies. In `Model.compile`, if the model's policy had a loss scale, the optimizer would be wrapped with a `LossScaleOptimizer`. With the non-experimental `Policy`, there is no loss scale associated with the `Policy`, and `Model.compile` wraps the optimizer with a `LossScaleOptimizer` if and only if the policy is a `"mixed_float16"` policy. If you previously passed a `LossScale` to the experimental `Policy`, consider just removing it, as the default loss scaling behavior is usually what you want. If you really want to customize the loss scaling behavior, you can wrap your optimizer with a `LossScaleOptimizer` before passing it to `Model.compile`.
      * If you use the very rarely-used function `tf.keras.mixed_precision.experimental.get_layer_policy`:
          * Replace `tf.keras.mixed_precision.experimental.get_layer_policy(layer)` with `layer.dtype_policy`.
* `tf.mixed_precision.experimental.LossScale` and its subclasses have been removed from the TF2 namespace. This symbols were very rarely used and were only useful in TF2 for use in the now-removed `tf.keras.mixed_precision.experimental` API. The symbols are still available under `tf.compat.v1.mixed_precision`.
* The `experimental_relax_shapes` heuristic for `tf.function` has been deprecated and replaced with `reduce_retracing` which encompasses broader heuristics to reduce the number of retraces (see below)

## Major Features and Improvements

*   `tf.keras`:

    *   Added `tf.keras.applications.resnet_rs` models. This includes the
        `ResNetRS50`, `ResNetRS101`, `ResNetRS152`, `ResNetRS200`,
        `ResNetRS270`, `ResNetRS350` and `ResNetRS420` model architectures. The
        ResNetRS models are based on the architecture described in
        [Revisiting ResNets: Improved Training and Scaling Strategies](https://arxiv.org/pdf/2103.07579.pdf)
    *   Added `tf.keras.optimizers.experimental.Optimizer`. The reworked
        optimizer gives more control over different phases of optimizer calls,
        and is easier to customize. We provide Adam, SGD, Adadelta, AdaGrad and
        RMSprop optimizers based on
        `tf.keras.optimizers.experimental.Optimizer`. Generally the new
        optimizers work in the same way as the old ones, but support new
        constructor arguments. In the future, the symbols
        `tf.keras.optimizers.Optimizer`/`Adam`/etc will point to the new
        optimizers, and the previous generation of optimizers will be moved to
        `tf.keras.optimizers.legacy.Optimizer`/`Adam`/etc.
    *   Added L2 unit normalization layer `tf.keras.layers.UnitNormalization`.
    *   Added `tf.keras.regularizers.OrthogonalRegularizer`, a new regularizer
        that encourages orthogonality between the rows (or columns) or a weight
        matrix.
    *   Added `tf.keras.layers.RandomBrightness` layer for image preprocessing.
    *   Added APIs for switching between interactive logging and absl logging.
        By default, Keras always writes the logs to stdout. However, this is not
        optimal in a non-interactive environment, where you don't have access to
        stdout, but can only view the logs. You can use
        `tf.keras.utils.disable_interactive_logging()` to write the logs to ABSL
        logging. You can also use `tf.keras.utils.enable_interactive_logging()`
        to change it back to stdout, or
        `tf.keras.utils.is_interactive_logging_enabled()` to check if
        interactive logging is enabled.
    *   Changed default value for the `verbose` argument of `Model.evaluate()`
        and `Model.predict()` to `"auto"`, which defaults to `verbose=1` for
        most cases and defaults to `verbose=2` when used with
        `ParameterServerStrategy` or with interactive logging disabled.
    *   Argument `jit_compile` in `Model.compile()` now applies to
        `Model.evaluate()` and `Model.predict()`. Setting `jit_compile=True` in
        `compile()` compiles the model's training, evaluation, and inference
        steps to [XLA](https://www.tensorflow.org/xla). Note that
        `jit_compile=True` may not necessarily work for all models.
    *   Added DTensor-related Keras APIs under `tf.keras.dtensor` namespace. The
        APIs are still classified as experimental. You are welcome to try it
        out. Please check the tutorial and guide on https://www.tensorflow.org/
        for more details about DTensor.

*   `tf.lite`:

    *   Added TFLite builtin op support for the following TF ops:
        *   `tf.math.argmin`/`tf.math.argmax` for input data type `tf.bool` on
            CPU.
        *   `tf.nn.gelu` op for output data type `tf.float32` and quantization
            on CPU.
    *   Add nominal support for unsigned 16-bit integer tensor types. Note that
        very few TFLite kernels support this type natively, so its use in mobile
        ML authoring is generally discouraged.
    *   Add support for unsigned 16-bit integer tensor types in cast op.
    *   Experimental support for lowering `list_ops.tensor_list_set_item` with
        `DynamicUpdateSlice`.
    *   Enabled a new MLIR-based dynamic range quantization backend by default
        *   The new backend is used for post-training int8 dynamic range
            quantization and post-training float16 quantization.
        *   Set `experimental_new_dynamic_range_quantizer` in
            tf.lite.TFLiteConverter to False to disable this change
    *   Native TF Lite variables are now enabled during conversion by default on
        all v2 TfLiteConverter entry points.
        `experimental_enable_resource_variables` on tf.lite.TFLiteConverter is
        now True by default and will be removed in the future.

*   `tf.function`:

    *   Custom classes used as arguments for `tf.function` can now specify rules
        regarding when retracing needs to occur by implementing the Tracing
        Protocol available through
        `tf.types.experimental.SupportsTracingProtocol`.
    *   `TypeSpec` classes (as associated with `ExtensionTypes`) also implement
        the Tracing Protocol which can be overridden if necessary.
    *   The newly introduced `reduce_retracing` option also uses the Tracing
        Protocol to proactively generate generalized traces similar to
        `experimental_relax_shapes` (which has now been deprecated).

*   Unified eager and `tf.function` execution:

    *   Eager mode can now execute each op as a `tf.function`, allowing for more
        consistent feature support in future releases.
    *   It is available for immediate use.
        *   See the `TF_RUN_EAGER_OP_AS_FUNCTION` environment variable in
            [eager context](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/python/eager/context.py).
        *   Eager performance should be similar with this feature enabled.
            *   A roughly 5us per-op overhead may be observed when running many
                small functions.
            *   Note a
                [known issue](https://github.com/tensorflow/tensorflow/issues/55414)
                with GPU performance.
        *   The behavior of `tf.function` itself is unaffected.
    *   Note: This feature will be enabled by default in an upcoming version of
        TensorFlow.

*   `tf.experimental.dtensor`: Added DTensor, an extension to TensorFlow for
    large-scale modeling with minimal changes to user code. You are welcome to
    try it out, though be aware that the DTensor API is experimental and up-to
    backward-incompatible changes. DTensor and Keras integration is published
    under `tf.keras.dtensor` in this release (refer to the `tf.keras` entry).
    The tutoral and guide for DTensor will be published on
    https://www.tensorflow.org/. Please stay tuned.

*   [oneDNN CPU performance optimizations](https://github.com/tensorflow/community/blob/master/rfcs/20210930-enable-onednn-ops.md)
    are available in Linux x86, Windows x86, and Linux aarch64 packages.

    *   **Linux x86 packages:**
        *   oneDNN optimizations are *enabled by default* on CPUs with
            neural-network-focused hardware features such as AVX512_VNNI,
            AVX512_BF16, AMX, etc.
            ([Intel Cascade Lake](https://www.intel.com/content/www/us/en/products/platforms/details/cascade-lake.html)
            and newer CPUs.)
            *   [Example performance speedups.](https://medium.com/intel-analytics-software/leverage-intel-deep-learning-optimizations-in-tensorflow-129faa80ee07)
        *   For older CPUs, oneDNN optimizations are disabled by default.
    *   **Windows x86 package:** oneDNN optimizations are disabled by default.
    *   **Linux aach64 (`--config=mkl_aarch64`) package:**
        *   Experimental oneDNN optimizations are disabled by default.
        *   If you experience issues with oneDNN optimizations on, we recommend
            turning them off.
    *   To explicitly enable or disable oneDNN optimizations, set the
        environment variable `TF_ENABLE_ONEDNN_OPTS` to `1` (enable) or `0`
        (disable) before running TensorFlow. (The variable is checked during
        `import tensorflow`.) To fall back to default settings, unset the
        environment variable.
    *   These optimizations can yield slightly different numerical results from
        when they are off due to floating-point round-off errors from different
        computation approaches and orders.
    *   To verify that the optimizations are on, look for a message with
        *"oneDNN custom operations are on"* in the log. If the exact phrase is
        not there, it means they are off.

## Bug Fixes and Other Changes

*   `tf.data`:
    *   Fixed bug in `tf.data.experimental.parse_example_dataset` when `tf.io.RaggedFeatures` would specify `value_key` but no `partitions`. Before the fix, setting `value_key` but no `partitions` would result in the feature key being replaced by the value key, e.g. `{'value_key': <RaggedTensor>}` instead of `{'key': <RaggedTensor>}`. Now the correct feature key will be used. This aligns the behavior of `tf.data.experimental.parse_example_dataset` to match the behavior of `tf.io.parse_example`.
    *   Added a new field, `filter_parallelization`, to `tf.data.experimental.OptimizationOptions`. If it is set to `True`, tf.data will run `Filter` transformation with multiple threads. Its default value is `False` if not specified.

*   `tf.keras`:
    *   Fixed bug in optimizers that prevented them from properly checkpointing slot variables when they are `ShardedVariable`s (used for training with `tf.distribute.experimental.ParameterServerStrategy`).

*   `tf.random`:
    * Added `tf.random.experimental.index_shuffle`, for shuffling a sequence without materializing the sequence in memory.

*   `tf.RaggedTensor`:
    *   Introduced `tf.experimental.RowPartition`, which encodes how one dimension in a RaggedTensor relates to another, into the public API.
    *   Introduced `tf.experimental.DynamicRaggedShape`, which represents the shape of a RaggedTensor.

## Security

*   Fixes a code injection in `saved_model_cli` ([CVE-2022-29216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29216))
*   Fixes a missing validation which causes `TensorSummaryV2` to crash ([CVE-2022-29193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29193))
*   Fixes a missing validation which crashes `QuantizeAndDequantizeV4Grad` ([CVE-2022-29192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29192))
*   Fixes a missing validation which causes denial of service via `DeleteSessionTensor` ([CVE-2022-29194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29194))
*   Fixes a missing validation which causes denial of service via `GetSessionTensor` ([CVE-2022-29191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29191))
*   Fixes a missing validation which causes denial of service via `StagePeek` ([CVE-2022-29195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29195))
*   Fixes a missing validation which causes denial of service via `UnsortedSegmentJoin` ([CVE-2022-29197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29197))
*   Fixes a missing validation which causes denial of service via `LoadAndRemapMatrix` ([CVE-2022-29199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29199))
*   Fixes a missing validation which causes denial of service via `SparseTensorToCSRSparseMatrix` ([CVE-2022-29198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29198))
*   Fixes a missing validation which causes denial of service via `LSTMBlockCell` ([CVE-2022-29200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29200))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29196))
*   Fixes a `CHECK` failure in depthwise ops via overflows ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes issues arising from undefined behavior stemming from users supplying invalid resource handles ([CVE-2022-29207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29207))
*   Fixes a segfault due to missing support for quantized types ([CVE-2022-29205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29205))
*   Fixes a missing validation which results in undefined behavior in `SparseTensorDenseAdd` ([CVE-2022-29206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29206))
*   Fixes a missing validation which results in undefined behavior in `QuantizedConv2D` ([CVE-2022-29201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29201))
*   Fixes an integer overflow in `SpaceToBatchND` ([CVE-2022-29203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29203))
*   Fixes a segfault and OOB write due to incomplete validation in `EditDistance` ([CVE-2022-29208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29208))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29204))
*   Fixes a denial of service in `tf.ragged.constant` due to lack of validation ([CVE-2022-29202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29202))
*   Fixes a segfault when `tf.histogram_fixed_width` is called with NaN values ([CVE-2022-29211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29211))
*   Fixes a core dump when loading TFLite models with quantization ([CVE-2022-29212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29212))
*   Fixes crashes stemming from incomplete validation in signal ops ([CVE-2022-29213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29213))
*   Fixes a type confusion leading to `CHECK`-failure based denial of service ([CVE-2022-29209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29209))
*   Fixes a heap buffer overflow due to incorrect hash function ([CVE-2022-29210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29210))
*   Updates `curl` to `7.83.1` to handle ([CVE-2022-22576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-22576), ([CVE-2022-27774](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27774), ([CVE-2022-27775](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27775), ([CVE-2022-27776](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27776), ([CVE-2022-27778](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27778), ([CVE-2022-27779](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27779), ([CVE-2022-27780](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27780), ([CVE-2022-27781](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27781), ([CVE-2022-27782](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27782) and ([CVE-2022-30115](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-30115)
*   Updates `zlib` to `1.2.12` after `1.2.11` was pulled due to [security issue](https://www.openwall.com/lists/oss-security/2022/03/28/1)

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aaron Debattista, Abel Soares Siqueira, Abhishek Varma, Andrei Ivanov, andreii, Andrew Goodbody, apeltop, Arnab Dutta, Ashiq Imran, Banikumar Maiti (Intel Aipg), Ben Greiner, Benjamin Peterson, bhack, Christopher Bate, chunduriv, Copybara-Service, DEKHTIARJonathan, Deven Desai, Duncan Riach, Eric Kunze, Everton Constantino, Faruk D, Fredrik Knutsson, gadagashwini, Gauri1 Deshpande, gtiHibGele, Guozhong Zhuang, Islem-Esi, Ivanov Viktor, Jason Furmanek, Jason Zaman, Jim, Jinzhe Zeng, John Laxson, Jonas Eschle, Jonas Eschle 'Mayou36, Jonathan Dekhtiar, Kaixi Hou, Kanvi Khanna, KaurkerDevourer, Koan-Sin Tan, kushanam, Laramie Leavitt, Li-Wen Chang, lipracer, Louis Sugy, Lu Teng, Mahmoud Abuzaina, Malcolm Slaney, Malik Shahzad Muzaffar, Marek Šuppa, Matt Conley, Michael Melesse, Milos Puzovic, mohantym, Nathan John Sircombe, Nathan Luehr, Nilesh Agarwalla, Patrice Vignola, peterjc123, Philip Turner, Rajeshwar Reddy T, Robert Kalmar, Rodrigo Formigone, Rohit Santhanam, rui, Sachin Muradi, Saduf2019, sandip, Scott Leishman, Serge Panev, Shi,Guangyong, Srinivasan Narayanamoorthy, stanley, Steven I Reeves, stevenireeves, sushreebarsa, Tamas Bela Feher, Tao He, Thomas Schmeyer, Tiago Almeida, Trevor Morris, Uday Bondhugula, Uwe L. Korn, Varghese, Jojimon, Vishnuvardhan Janapati, William Muir, William Raveane, xutianming, Yasuhiro Matsumoto, Yimei Sun, Yong Tang, Yu Feng, Yuriy Chernyshov, zhaozheng09

# Release 2.8.1

This releases introduces several vulnerability fixes:

*   Fixes a code injection in `saved_model_cli` ([CVE-2022-29216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29216))
*   Fixes a missing validation which causes `TensorSummaryV2` to crash ([CVE-2022-29193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29193))
*   Fixes a missing validation which crashes `QuantizeAndDequantizeV4Grad` ([CVE-2022-29192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29192))
*   Fixes a missing validation which causes denial of service via `DeleteSessionTensor` ([CVE-2022-29194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29194))
*   Fixes a missing validation which causes denial of service via `GetSessionTensor` ([CVE-2022-29191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29191))
*   Fixes a missing validation which causes denial of service via `StagePeek` ([CVE-2022-29195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29195))
*   Fixes a missing validation which causes denial of service via `UnsortedSegmentJoin` ([CVE-2022-29197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29197))
*   Fixes a missing validation which causes denial of service via `LoadAndRemapMatrix` ([CVE-2022-29199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29199))
*   Fixes a missing validation which causes denial of service via `SparseTensorToCSRSparseMatrix` ([CVE-2022-29198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29198))
*   Fixes a missing validation which causes denial of service via `LSTMBlockCell` ([CVE-2022-29200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29200))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29196))
*   Fixes a `CHECK` failure in depthwise ops via overflows ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes issues arising from undefined behavior stemming from users supplying invalid resource handles ([CVE-2022-29207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29207))
*   Fixes a segfault due to missing support for quantized types ([CVE-2022-29205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29205))
*   Fixes a missing validation which results in undefined behavior in `SparseTensorDenseAdd` ([CVE-2022-29206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29206))
*   Fixes a missing validation which results in undefined behavior in `QuantizedConv2D` ([CVE-2022-29201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29201))
*   Fixes an integer overflow in `SpaceToBatchND` ([CVE-2022-29203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29203))
*   Fixes a segfault and OOB write due to incomplete validation in `EditDistance` ([CVE-2022-29208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29208))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29204))
*   Fixes a denial of service in `tf.ragged.constant` due to lack of validation ([CVE-2022-29202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29202))
*   Fixes a segfault when `tf.histogram_fixed_width` is called with NaN values ([CVE-2022-29211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29211))
*   Fixes a core dump when loading TFLite models with quantization ([CVE-2022-29212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29212))
*   Fixes crashes stemming from incomplete validation in signal ops ([CVE-2022-29213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29213))
*   Fixes a type confusion leading to `CHECK`-failure based denial of service ([CVE-2022-29209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29209))
*   Fixes a heap buffer overflow due to incorrect hash function ([CVE-2022-29210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29210))
*   Updates `curl` to `7.83.1` to handle ([CVE-2022-22576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-22576), ([CVE-2022-27774](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27774), ([CVE-2022-27775](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27775), ([CVE-2022-27776](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27776), ([CVE-2022-27778](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27778), ([CVE-2022-27779](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27779), ([CVE-2022-27780](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27780), ([CVE-2022-27781](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27781), ([CVE-2022-27782](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27782) and ([CVE-2022-30115](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-30115)
*   Updates `zlib` to `1.2.12` after `1.2.11` was pulled due to [security issue](https://www.openwall.com/lists/oss-security/2022/03/28/1)
# Release 2.7.2

This releases introduces several vulnerability fixes:

*   Fixes a code injection in `saved_model_cli` ([CVE-2022-29216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29216))
*   Fixes a missing validation which causes `TensorSummaryV2` to crash ([CVE-2022-29193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29193))
*   Fixes a missing validation which crashes `QuantizeAndDequantizeV4Grad` ([CVE-2022-29192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29192))
*   Fixes a missing validation which causes denial of service via `DeleteSessionTensor` ([CVE-2022-29194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29194))
*   Fixes a missing validation which causes denial of service via `GetSessionTensor` ([CVE-2022-29191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29191))
*   Fixes a missing validation which causes denial of service via `StagePeek` ([CVE-2022-29195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29195))
*   Fixes a missing validation which causes denial of service via `UnsortedSegmentJoin` ([CVE-2022-29197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29197))
*   Fixes a missing validation which causes denial of service via `LoadAndRemapMatrix` ([CVE-2022-29199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29199))
*   Fixes a missing validation which causes denial of service via `SparseTensorToCSRSparseMatrix` ([CVE-2022-29198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29198))
*   Fixes a missing validation which causes denial of service via `LSTMBlockCell` ([CVE-2022-29200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29200))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29196))
*   Fixes a `CHECK` failure in depthwise ops via overflows ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes issues arising from undefined behavior stemming from users supplying invalid resource handles ([CVE-2022-29207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29207))
*   Fixes a segfault due to missing support for quantized types ([CVE-2022-29205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29205))
*   Fixes a missing validation which results in undefined behavior in `SparseTensorDenseAdd` ([CVE-2022-29206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29206))
*   Fixes a missing validation which results in undefined behavior in `QuantizedConv2D` ([CVE-2022-29201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29201))
*   Fixes an integer overflow in `SpaceToBatchND` ([CVE-2022-29203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29203))
*   Fixes a segfault and OOB write due to incomplete validation in `EditDistance` ([CVE-2022-29208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29208))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29204))
*   Fixes a denial of service in `tf.ragged.constant` due to lack of validation ([CVE-2022-29202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29202))
*   Fixes a segfault when `tf.histogram_fixed_width` is called with NaN values ([CVE-2022-29211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29211))
*   Fixes a core dump when loading TFLite models with quantization ([CVE-2022-29212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29212))
*   Fixes crashes stemming from incomplete validation in signal ops ([CVE-2022-29213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29213))
*   Fixes a type confusion leading to `CHECK`-failure based denial of service ([CVE-2022-29209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29209))
*   Updates `curl` to `7.83.1` to handle ([CVE-2022-22576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-22576), ([CVE-2022-27774](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27774), ([CVE-2022-27775](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27775), ([CVE-2022-27776](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27776), ([CVE-2022-27778](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27778), ([CVE-2022-27779](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27779), ([CVE-2022-27780](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27780), ([CVE-2022-27781](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27781), ([CVE-2022-27782](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27782) and ([CVE-2022-30115](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-30115)
*   Updates `zlib` to `1.2.12` after `1.2.11` was pulled due to [security issue](https://www.openwall.com/lists/oss-security/2022/03/28/1)

# Release 2.6.4

This releases introduces several vulnerability fixes:

*   Fixes a code injection in `saved_model_cli` ([CVE-2022-29216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29216))
*   Fixes a missing validation which causes `TensorSummaryV2` to crash ([CVE-2022-29193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29193))
*   Fixes a missing validation which crashes `QuantizeAndDequantizeV4Grad` ([CVE-2022-29192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29192))
*   Fixes a missing validation which causes denial of service via `DeleteSessionTensor` ([CVE-2022-29194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29194))
*   Fixes a missing validation which causes denial of service via `GetSessionTensor` ([CVE-2022-29191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29191))
*   Fixes a missing validation which causes denial of service via `StagePeek` ([CVE-2022-29195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29195))
*   Fixes a missing validation which causes denial of service via `UnsortedSegmentJoin` ([CVE-2022-29197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29197))
*   Fixes a missing validation which causes denial of service via `LoadAndRemapMatrix` ([CVE-2022-29199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29199))
*   Fixes a missing validation which causes denial of service via `SparseTensorToCSRSparseMatrix` ([CVE-2022-29198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29198))
*   Fixes a missing validation which causes denial of service via `LSTMBlockCell` ([CVE-2022-29200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29200))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29196))
*   Fixes a `CHECK` failure in depthwise ops via overflows ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes issues arising from undefined behavior stemming from users supplying invalid resource handles ([CVE-2022-29207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29207))
*   Fixes a segfault due to missing support for quantized types ([CVE-2022-29205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29205))
*   Fixes a missing validation which results in undefined behavior in `SparseTensorDenseAdd` ([CVE-2022-29206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29206))
*   Fixes a missing validation which results in undefined behavior in `QuantizedConv2D` ([CVE-2022-29201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29201))
*   Fixes an integer overflow in `SpaceToBatchND` ([CVE-2022-29203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29203))
*   Fixes a segfault and OOB write due to incomplete validation in `EditDistance` ([CVE-2022-29208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29208))
*   Fixes a missing validation which causes denial of service via `Conv3DBackpropFilterV2` ([CVE-2022-29204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29204))
*   Fixes a denial of service in `tf.ragged.constant` due to lack of validation ([CVE-2022-29202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29202))
*   Fixes a segfault when `tf.histogram_fixed_width` is called with NaN values ([CVE-2022-29211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29211))
*   Fixes a core dump when loading TFLite models with quantization ([CVE-2022-29212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29212))
*   Fixes crashes stemming from incomplete validation in signal ops ([CVE-2022-29213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29213))
*   Fixes a type confusion leading to `CHECK`-failure based denial of service ([CVE-2022-29209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-29209))
*   Updates `curl` to `7.83.1` to handle ([CVE-2022-22576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-22576), ([CVE-2022-27774](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27774), ([CVE-2022-27775](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27775), ([CVE-2022-27776](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27776), ([CVE-2022-27778](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27778), ([CVE-2022-27779](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27779), ([CVE-2022-27780](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27780), ([CVE-2022-27781](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27781), ([CVE-2022-27782](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-27782) and ([CVE-2022-30115](https://cve.mitre.org/cgi-bin/cvename.cgi?name=VE-2022-30115)
*   Updates `zlib` to `1.2.12` after `1.2.11` was pulled due to [security issue](https://www.openwall.com/lists/oss-security/2022/03/28/1)

# Release 2.8.0

## Major Features and Improvements

*   `tf.lite`:

    *   Added TFLite builtin op support for the following TF ops:
        *   `tf.raw_ops.Bucketize` op on CPU.
        *   `tf.where` op for data types
            `tf.int32`/`tf.uint32`/`tf.int8`/`tf.uint8`/`tf.int64`.
        *   `tf.random.normal` op for output data type `tf.float32` on CPU.
        *   `tf.random.uniform` op for output data type `tf.float32` on CPU.
        *   `tf.random.categorical` op for output data type `tf.int64` on CPU.

*   `tensorflow.experimental.tensorrt`:

    *   `conversion_params` is now deprecated inside `TrtGraphConverterV2` in
        favor of direct arguments: `max_workspace_size_bytes`, `precision_mode`,
        `minimum_segment_size`, `maximum_cached_engines`, `use_calibration` and
        `allow_build_at_runtime`.
    *   Added a new parameter called `save_gpu_specific_engines` to the
        `.save()` function inside `TrtGraphConverterV2`. When `False`, the
        `.save()` function won't save any TRT engines that have been built. When
        `True` (default), the original behavior is preserved.
    *   `TrtGraphConverterV2` provides a new API called `.summary()` which
        outputs a summary of the inference converted by TF-TRT. It namely shows
        each `TRTEngineOp` with their input(s)' and output(s)' shape and dtype.
        A detailed version of the summary is available which prints additionally
        all the TensorFlow OPs included in each of the `TRTEngineOp`s.

*   `tf.tpu.experimental.embedding`:

    *   `tf.tpu.experimental.embedding.FeatureConfig` now takes an additional
        argument `output_shape` which can specify the shape of the output
        activation for the feature.
    *   `tf.tpu.experimental.embedding.TPUEmbedding` now has the same behavior
        as `tf.tpu.experimental.embedding.serving_embedding_lookup` which can
        take arbitrary rank of dense and sparse tensor. For ragged tensor,
        though the input tensor remains to be rank 2, the activations now can be
        rank 2 or above by specifying the output shape in the feature config or
        via the build method.

*   Add
    [`tf.config.experimental.enable_op_determinism`](https://www.tensorflow.org/api_docs/python/tf/config/experimental/enable_op_determinism),
    which makes TensorFlow ops run deterministically at the cost of performance.
    Replaces the `TF_DETERMINISTIC_OPS` environmental variable, which is now
    deprecated. The "Bug Fixes and Other Changes" section lists more
    determinism-related changes.

*   (Since TF 2.7) Add
    [PluggableDevice](https://blog.tensorflow.org/2021/06/pluggabledevice-device-plugins-for-TensorFlow.html)
    support to
    [TensorFlow Profiler](https://github.com/tensorflow/community/blob/master/rfcs/20210513-pluggable-profiler-for-tensorflow.md).

## Bug Fixes and Other Changes

*   `tf.data`:

    *   Fixed a bug where setting `options.deterministic = False` would only
        modify one transformation to run non-deterministically, leaving other
        transformations deterministic. The option will now apply the same across
        all transformations.
    *   The optimization `parallel_batch` now becomes default if not disabled by
        users, which will parallelize copying of batch elements.
    *   Added the ability for `TensorSliceDataset` to identify and handle inputs
        that are files. This enables creating hermetic SavedModels when using
        datasets created from files.

*   `tf.lite`:

    *   Adds GPU Delegation support for serialization to Java API. This boosts
        initialization time up to 90% when OpenCL is available.
    *   Deprecated `Interpreter::SetNumThreads`, in favor of
        `InterpreterBuilder::SetNumThreads`.

*   `tf.keras`:

    *   Adds `tf.compat.v1.keras.utils.get_or_create_layer` to aid migration to
        TF2 by enabling tracking of nested keras models created in TF1-style,
        when used with the `tf.compat.v1.keras.utils.track_tf1_style_variables`
        decorator.
    *   Added a `tf.keras.layers.experimental.preprocessing.HashedCrossing`
        layer which applies the hashing trick to the concatenation of crossed
        scalar inputs. This provides a stateless way to try adding feature
        crosses of integer or string data to a model.
    *   Removed `keras.layers.experimental.preprocessing.CategoryCrossing`.
        Users should migrate to the `HashedCrossing` layer or use
        `tf.sparse.cross`/`tf.ragged.cross` directly.
    *   Added additional `standardize` and `split` modes to `TextVectorization`:
        *   `standardize="lower"` will lowercase inputs.
        *   `standardize="string_punctuation"` will remove all punctuation.
        *   `split="character"` will split on every unicode character.
    *   Added an `output_mode` argument to the `Discretization` and `Hashing`
        layers with the same semantics as other preprocessing layers. All
        categorical preprocessing layers now support `output_mode`.
    *   All preprocessing layer output will follow the compute dtype of a
        `tf.keras.mixed_precision.Policy`, unless constructed with
        `output_mode="int"` in which case output will be `tf.int64`. The output
        type of any preprocessing layer can be controlled individually by
        passing a `dtype` argument to the layer.
    *   `tf.random.Generator` for keras initializers and all RNG code.
    *   Added 3 new APIs for enable/disable/check the usage of
        `tf.random.Generator` in keras backend, which will be the new backend
        for all the RNG in Keras. We plan to switch on the new code path by
        default in tf 2.8, and the behavior change will likely to cause some
        breakage on user side (eg if the test is checking against some golden
        number). These 3 APIs will allow user to disable and switch back to
        legacy behavior if they prefer. In future (eg TF 2.10), we expect to
        totally remove the legacy code path (stateful random Ops), and these 3
        APIs will be removed as well.
    *   `tf.keras.callbacks.experimental.BackupAndRestore` is now available as
        `tf.keras.callbacks.BackupAndRestore`. The experimental endpoint is
        deprecated and will be removed in a future release.
    *   `tf.keras.experimental.SidecarEvaluator` is now available as
        `tf.keras.utils.SidecarEvaluator`. The experimental endpoint is
        deprecated and will be removed in a future release.
    *   Metrics update and collection logic in default `Model.train_step()` is
        now customizable via overriding `Model.compute_metrics()`.
    *   Losses computation logic in default `Model.train_step()` is now
        customizable via overriding `Model.compute_loss()`.
    *   `jit_compile` added to `Model.compile()` on an opt-in basis to compile
        the model's training step with [XLA](https://www.tensorflow.org/xla).
        Note that `jit_compile=True` may not necessarily work for all models.

*   Deterministic Op Functionality:

    *   Fix regression in deterministic selection of deterministic cuDNN
        convolution algorithms, a regression that was introduced in v2.5. Note
        that nondeterministic out-of-memory events while selecting algorithms
        could still lead to nondeterminism, although this is very unlikely. This
        additional, unlikely source will be eliminated in a later version.
    *   Add deterministic GPU implementations of:
        *   `tf.function(jit_compile=True)`'s that use `Scatter`.
        *   (since v2.7) Stateful ops used in `tf.data.Dataset`
        *   (since v2.7) `tf.convert_to_tensor` when fed with (sparse)
            `tf.IndexedSlices` (because it uses `tf.math.unsorted_segment_sum`)
        *   (since v2.7) `tf.gather` backprop (because `tf.convert_to_tensor`
            reduces `tf.gather`'s (sparse) `tf.IndexedSlices` gradients into its
            dense `params` input)
        *   (since v2.7) `tf.math.segment_mean`
        *   (since v2.7) `tf.math.segment_prod`
        *   (since v2.7) `tf.math.segment_sum`
        *   (since v2.7) `tf.math.unsorted_segment_mean`
        *   (since v2.7) `tf.math.unsorted_segment_prod`
        *   (since v2.7) `tf.math.unsorted_segment_sum`
        *   (since v2.7) `tf.math.unsorted_segment_sqrt`
        *   (since v2.7) `tf.nn.ctc_loss` (resolved, possibly in prior release,
            and confirmed with tests)
        *   (since v2.7)`tf.nn.sparse_softmax_crossentropy_with_logits`
    *   (since v2.7) Run `tf.scatter_nd` and other related scatter functions,
        such as `tf.tensor_scatter_nd_update`, on CPU (with significant
        performance penalty).
    *   Add determinism-unimplemented exception-throwing to the following ops.
        When op-determinism is expected (i.e. after
        `tf.config.experimental.enable_op_determinism` has been called), an
        attempt to use the specified paths through the following ops on a GPU
        will cause `tf.errors.UnimplementedError` (with an understandable
        message), unless otherwise specified, to be thrown.
        *   `FakeQuantWithMinMaxVarsGradient` and
            `FakeQuantWithMinMaxVarsPerChannelGradient`
        *   (since v2.7) `tf.compat.v1.get_seed` if the global random seed has
            not yet been set (via `tf.random.set_seed`). Throws `RuntimeError`
            from Python or `InvalidArgument` from C++
        *   (since v2.7) `tf.compat.v1.nn.fused_batch_norm` backprop to `offset`
            when `is_training=False`
        *   (since v2.7) `tf.image.adjust_contrast` forward
        *   (since v2.7) `tf.image.resize` with `method=ResizeMethod.NEAREST`
            backprop
        *   (since v2.7) `tf.linalg.svd`
        *   (since v2.7) `tf.math.bincount`
        *   (since v2.7) `tf.nn.depthwise_conv2d` backprop to `filter` when not
            using cuDNN convolution
        *   (since v2.7) `tf.nn.dilation2d` gradient
        *   (since v2.7) `tf.nn.max_pool_with_argmax` gradient
        *   (since v2.7) `tf.raw_ops.DebugNumericSummary` and
            `tf.raw_ops.DebugNumericSummaryV2`
        *   (since v2.7) `tf.timestamp`. Throws `FailedPrecondition`
        *   (since v2.7) `tf.Variable.scatter_add` (and other scatter methods,
            both on ref and resource variables)
        *   (since v2.7) The random-number-generating ops in the `tf.random`
            module when the global random seed has not yet been set (via
            `tf.random.set_seed`). Throws `RuntimeError` from Python or
            `InvalidArgument` from C++

*   TensorFlow-oneDNN no longer supports
    [explicit use of oneDNN blocked tensor format](https://github.com/tensorflow/tensorflow/pull/53288),
    e.g., setting the environment variable `TF_ENABLE_MKL_NATIVE_FORMAT` will
    not have any effect.

*   TensorFlow has been validated on Windows Subsystem for Linux 2 (aka WSL 2)
    for both GPUs and CPUs.

*   Due to security issues (see section below), all boosted trees code has been
    deprecated. Users should switch to
    [TensorFlow Decision Forests](https://github.com/tensorflow/decision-forests).
    TF's boosted trees code will be eliminated before the branch cut for TF 2.9
    and will no longer be present since that release.

## Security

*   Fixes a floating point division by 0 when executing convolution operators
    ([CVE-2022-21725](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21725))
*   Fixes a heap OOB read in shape inference for `ReverseSequence`
    ([CVE-2022-21728](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21728))
*   Fixes a heap OOB access in `Dequantize`
    ([CVE-2022-21726](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21726))
*   Fixes an integer overflow in shape inference for `Dequantize`
    ([CVE-2022-21727](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21727))
*   Fixes a heap OOB access in `FractionalAvgPoolGrad`
    ([CVE-2022-21730](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21730))
*   Fixes an overflow and divide by zero in `UnravelIndex`
    ([CVE-2022-21729](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21729))
*   Fixes a type confusion in shape inference for `ConcatV2`
    ([CVE-2022-21731](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21731))
*   Fixes an OOM in `ThreadPoolHandle`
    ([CVE-2022-21732](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21732))
*   Fixes an OOM due to integer overflow in `StringNGrams`
    ([CVE-2022-21733](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21733))
*   Fixes more issues caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes an integer overflows in most sparse component-wise ops
    ([CVE-2022-23567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23567))
*   Fixes an integer overflows in `AddManySparseToTensorsMap`
    ([CVE-2022-23568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23568))
*   Fixes a number of `CHECK`-failures in `MapStage`
    ([CVE-2022-21734](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21734))
*   Fixes a division by zero in `FractionalMaxPool`
    ([CVE-2022-21735](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21735))
*   Fixes a number of `CHECK`-fails when building invalid/overflowing tensor
    shapes
    ([CVE-2022-23569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23569))
*   Fixes an undefined behavior in `SparseTensorSliceDataset`
    ([CVE-2022-21736](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21736))
*   Fixes an assertion failure based denial of service via faulty bin count
    operations
    ([CVE-2022-21737](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21737))
*   Fixes a reference binding to null pointer in `QuantizedMaxPool`
    ([CVE-2022-21739](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21739))
*   Fixes an integer overflow leading to crash in `SparseCountSparseOutput`
    ([CVE-2022-21738](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21738))
*   Fixes a heap overflow in `SparseCountSparseOutput`
    ([CVE-2022-21740](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21740))
*   Fixes an FPE in `BiasAndClamp` in TFLite
    ([CVE-2022-23557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23557))
*   Fixes an FPE in depthwise convolutions in TFLite
    ([CVE-2022-21741](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21741))
*   Fixes an integer overflow in TFLite array creation
    ([CVE-2022-23558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23558))
*   Fixes an integer overflow in TFLite
    ([CVE-2022-23559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23559))
*   Fixes a dangerous OOB write in TFLite
    ([CVE-2022-23561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23561))
*   Fixes a vulnerability leading to read and write outside of bounds in TFLite
    ([CVE-2022-23560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23560))
*   Fixes a set of vulnerabilities caused by using insecure temporary files
    ([CVE-2022-23563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23563))
*   Fixes an integer overflow in Range resulting in undefined behavior and OOM
    ([CVE-2022-23562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23562))
*   Fixes a vulnerability where missing validation causes `tf.sparse.split` to
    crash when `axis` is a tuple
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a `CHECK`-fail when decoding resource handles from proto
    ([CVE-2022-23564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23564))
*   Fixes a `CHECK`-fail with repeated `AttrDef`
    ([CVE-2022-23565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23565))
*   Fixes a heap OOB write in Grappler
    ([CVE-2022-23566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23566))
*   Fixes a `CHECK`-fail when decoding invalid tensors from proto
    ([CVE-2022-23571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23571))
*   Fixes a null-dereference when specializing tensor type
    ([CVE-2022-23570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23570))
*   Fixes a crash when type cannot be specialized
    ([CVE-2022-23572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23572))
*   Fixes a heap OOB read/write in `SpecializeType`
    ([CVE-2022-23574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23574))
*   Fixes an uninitialized variable access in `AssignOp`
    ([CVE-2022-23573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23573))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateTensorSize`
    ([CVE-2022-23575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23575))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateOutputSize`
    ([CVE-2022-23576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23576))
*   Fixes a null dereference in `GetInitOp`
    ([CVE-2022-23577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23577))
*   Fixes a memory leak when a graph node is invalid
    ([CVE-2022-23578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23578))
*   Fixes an abort caused by allocating a vector that is too large
    ([CVE-2022-23580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23580))
*   Fixes multiple `CHECK`-failures during Grappler's `IsSimplifiableReshape`
    ([CVE-2022-23581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23581))
*   Fixes multiple `CHECK`-failures during Grappler's `SafeToRemoveIdentity`
    ([CVE-2022-23579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23579))
*   Fixes multiple `CHECK`-failures in `TensorByteSize`
    ([CVE-2022-23582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23582))
*   Fixes multiple `CHECK`-failures in binary ops due to type confusion
    ([CVE-2022-23583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23583))
*   Fixes a use after free in `DecodePng` kernel
    ([CVE-2022-23584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23584))
*   Fixes a memory leak in decoding PNG images
    ([CVE-2022-23585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23585))
*   Fixes multiple `CHECK`-fails in `function.cc`
    ([CVE-2022-23586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23586))
*   Fixes multiple `CHECK`-fails due to attempting to build a reference tensor
    ([CVE-2022-23588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23588))
*   Fixes an integer overflow in Grappler cost estimation of crop and resize
    operation
    ([CVE-2022-23587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23587))
*   Fixes a null pointer dereference in Grappler's `IsConstant`
    ([CVE-2022-23589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23589))
*   Fixes a `CHECK` failure in constant folding
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a stack overflow due to self-recursive function in `GraphDef`
    ([CVE-2022-23591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23591))
*   Fixes a heap OOB access in `RunForwardTypeInference`
    ([CVE-2022-23592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23592))
*   Fixes a crash due to erroneous `StatusOr`
    ([CVE-2022-23590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23590))
*   Fixes multiple crashes and heap OOB accesses in TFG dialect (MLIR)
    ([CVE-2022-23594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23594))
*   Fixes a segfault in `simplifyBroadcast` (MLIR)
    ([CVE-2022-23593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23593))
*   Fixes a null pointer dereference in `BuildXlaCompilationCache` (XLA)
    ([CVE-2022-23595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23595))
*   Updates `icu` to `69.1` to handle
    [CVE-2020-10531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-10531)

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

8bitmp3, Adam Lanicek, ag.ramesh, alesapin, Andrew Goodbody, annasuheyla, Ariel
Elkin, Arnab Dutta, Ben Barsdell, bhack, cfRod, Chengji Yao, Christopher Bate,
dan, Dan F-M, David Korczynski, DEKHTIARJonathan, dengzhiyuan, Deven Desai,
Duncan Riach, Eli Osherovich, Ewout Ter Hoeven, ez2take, Faijul Amin, fo40225,
Frederic Bastien, gadagashwini, Gauri1 Deshpande, Georgiy Manuilov, Guilherme De
Lázari, Guozhong Zhuang, H1Gdev, homuler, Hongxu Jia, Jacky_Yin, jayfurmanek,
jgehw, Jhalak Patel, Jinzhe Zeng, Johan Gunnarsson, Jonathan Dekhtiar, Kaixi
Hou, Kanvi Khanna, Kevin Cheng, Koan-Sin Tan, Kruglov-Dmitry, Kun Lu, Lemo,
Lequn Chen, long.chen, Louis Sugy, Mahmoud Abuzaina, Mao, Marius Brehler, Mark
Harfouche, Martin Patz, Maxiwell S. Garcia, Meenakshi Venkataraman, Michael
Melesse, Mrinal Tyagi, Måns Nilsson, Nathan John Sircombe, Nathan Luehr, Nilesh
Agarwalla, Oktay Ozturk, Patrice Vignola, Pawel-Polyai, Rama Ketineni, Ramesh
Sampath, Reza Rahimi, Rob Suderman, Robert Kalmar, Rohit Santhanam, Sachin
Muradi, Saduf2019, Samuel Marks, Shi,Guangyong, Sidong-Wei, Srinivasan
Narayanamoorthy, Srishti Srivastava, Steven I Reeves, stevenireeves, Supernovae,
Tamas Bela Feher, Tao Xu, Thibaut Goetghebuer-Planchon, Thomas Schmeyer,
tilakrayal, Valery Mironov, Victor Guo, Vignesh Kothapalli, Vishnuvardhan
Janapati, wamuir, Wang,Quintin, William Muir, William Raveane, Yash Goel, Yimei
Sun, Yong Tang, Yuduo Wu

# Release 2.7.1

This releases introduces several vulnerability fixes:

*   Fixes a floating point division by 0 when executing convolution operators
    ([CVE-2022-21725](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21725))
*   Fixes a heap OOB read in shape inference for `ReverseSequence`
    ([CVE-2022-21728](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21728))
*   Fixes a heap OOB access in `Dequantize`
    ([CVE-2022-21726](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21726))
*   Fixes an integer overflow in shape inference for `Dequantize`
    ([CVE-2022-21727](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21727))
*   Fixes a heap OOB access in `FractionalAvgPoolGrad`
    ([CVE-2022-21730](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21730))
*   Fixes an overflow and divide by zero in `UnravelIndex`
    ([CVE-2022-21729](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21729))
*   Fixes a type confusion in shape inference for `ConcatV2`
    ([CVE-2022-21731](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21731))
*   Fixes an OOM in `ThreadPoolHandle`
    ([CVE-2022-21732](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21732))
*   Fixes an OOM due to integer overflow in `StringNGrams`
    ([CVE-2022-21733](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21733))
*   Fixes more issues caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes an integer overflows in most sparse component-wise ops
    ([CVE-2022-23567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23567))
*   Fixes an integer overflows in `AddManySparseToTensorsMap`
    ([CVE-2022-23568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23568))
*   Fixes a number of `CHECK`-failures in `MapStage`
    ([CVE-2022-21734](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21734))
*   Fixes a division by zero in `FractionalMaxPool`
    ([CVE-2022-21735](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21735))
*   Fixes a number of `CHECK`-fails when building invalid/overflowing tensor
    shapes
    ([CVE-2022-23569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23569))
*   Fixes an undefined behavior in `SparseTensorSliceDataset`
    ([CVE-2022-21736](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21736))
*   Fixes an assertion failure based denial of service via faulty bin count
    operations
    ([CVE-2022-21737](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21737))
*   Fixes a reference binding to null pointer in `QuantizedMaxPool`
    ([CVE-2022-21739](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21739))
*   Fixes an integer overflow leading to crash in `SparseCountSparseOutput`
    ([CVE-2022-21738](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21738))
*   Fixes a heap overflow in `SparseCountSparseOutput`
    ([CVE-2022-21740](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21740))
*   Fixes an FPE in `BiasAndClamp` in TFLite
    ([CVE-2022-23557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23557))
*   Fixes an FPE in depthwise convolutions in TFLite
    ([CVE-2022-21741](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21741))
*   Fixes an integer overflow in TFLite array creation
    ([CVE-2022-23558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23558))
*   Fixes an integer overflow in TFLite
    ([CVE-2022-23559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23559))
*   Fixes a dangerous OOB write in TFLite
    ([CVE-2022-23561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23561))
*   Fixes a vulnerability leading to read and write outside of bounds in TFLite
    ([CVE-2022-23560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23560))
*   Fixes a set of vulnerabilities caused by using insecure temporary files
    ([CVE-2022-23563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23563))
*   Fixes an integer overflow in Range resulting in undefined behavior and OOM
    ([CVE-2022-23562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23562))
*   Fixes a vulnerability where missing validation causes `tf.sparse.split` to
    crash when `axis` is a tuple
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a `CHECK`-fail when decoding resource handles from proto
    ([CVE-2022-23564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23564))
*   Fixes a `CHECK`-fail with repeated `AttrDef`
    ([CVE-2022-23565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23565))
*   Fixes a heap OOB write in Grappler
    ([CVE-2022-23566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23566))
*   Fixes a `CHECK`-fail when decoding invalid tensors from proto
    ([CVE-2022-23571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23571))
*   Fixes a null-dereference when specializing tensor type
    ([CVE-2022-23570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23570))
*   Fixes a crash when type cannot be specialized
    ([CVE-2022-23572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23572))
*   Fixes a heap OOB read/write in `SpecializeType`
    ([CVE-2022-23574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23574))
*   Fixes an uninitialized variable access in `AssignOp`
    ([CVE-2022-23573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23573))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateTensorSize`
    ([CVE-2022-23575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23575))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateOutputSize`
    ([CVE-2022-23576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23576))
*   Fixes a null dereference in `GetInitOp`
    ([CVE-2022-23577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23577))
*   Fixes a memory leak when a graph node is invalid
    ([CVE-2022-23578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23578))
*   Fixes an abort caused by allocating a vector that is too large
    ([CVE-2022-23580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23580))
*   Fixes multiple `CHECK`-failures during Grappler's `IsSimplifiableReshape`
    ([CVE-2022-23581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23581))
*   Fixes multiple `CHECK`-failures during Grappler's `SafeToRemoveIdentity`
    ([CVE-2022-23579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23579))
*   Fixes multiple `CHECK`-failures in `TensorByteSize`
    ([CVE-2022-23582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23582))
*   Fixes multiple `CHECK`-failures in binary ops due to type confusion
    ([CVE-2022-23583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23583))
*   Fixes a use after free in `DecodePng` kernel
    ([CVE-2022-23584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23584))
*   Fixes a memory leak in decoding PNG images
    ([CVE-2022-23585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23585))
*   Fixes multiple `CHECK`-fails in `function.cc`
    ([CVE-2022-23586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23586))
*   Fixes multiple `CHECK`-fails due to attempting to build a reference tensor
    ([CVE-2022-23588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23588))
*   Fixes an integer overflow in Grappler cost estimation of crop and resize
    operation
    ([CVE-2022-23587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23587))
*   Fixes a null pointer dereference in Grappler's `IsConstant`
    ([CVE-2022-23589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23589))
*   Fixes a `CHECK` failure in constant folding
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a stack overflow due to self-recursive function in `GraphDef`
    ([CVE-2022-23591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23591))
*   Fixes a crash due to erroneous `StatusOr`
    ([CVE-2022-23590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23590))
*   Fixes multiple crashes and heap OOB accesses in TFG dialect (MLIR)
    ([CVE-2022-23594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23594))
*   Fixes a null pointer dereference in `BuildXlaCompilationCache` (XLA)
    ([CVE-2022-23595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23595))
*   Updates `icu` to `69.1` to handle
    [CVE-2020-10531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-10531)

# Release 2.6.3

This releases introduces several vulnerability fixes:

*   Fixes a floating point division by 0 when executing convolution operators
    ([CVE-2022-21725](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21725))
*   Fixes a heap OOB read in shape inference for `ReverseSequence`
    ([CVE-2022-21728](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21728))
*   Fixes a heap OOB access in `Dequantize`
    ([CVE-2022-21726](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21726))
*   Fixes an integer overflow in shape inference for `Dequantize`
    ([CVE-2022-21727](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21727))
*   Fixes a heap OOB access in `FractionalAvgPoolGrad`
    ([CVE-2022-21730](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21730))
*   Fixes an overflow and divide by zero in `UnravelIndex`
    ([CVE-2022-21729](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21729))
*   Fixes a type confusion in shape inference for `ConcatV2`
    ([CVE-2022-21731](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21731))
*   Fixes an OOM in `ThreadPoolHandle`
    ([CVE-2022-21732](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21732))
*   Fixes an OOM due to integer overflow in `StringNGrams`
    ([CVE-2022-21733](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21733))
*   Fixes more issues caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes an integer overflows in most sparse component-wise ops
    ([CVE-2022-23567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23567))
*   Fixes an integer overflows in `AddManySparseToTensorsMap`
    ([CVE-2022-23568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23568))
*   Fixes a number of `CHECK`-failures in `MapStage`
    ([CVE-2022-21734](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21734))
*   Fixes a division by zero in `FractionalMaxPool`
    ([CVE-2022-21735](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21735))
*   Fixes a number of `CHECK`-fails when building invalid/overflowing tensor
    shapes
    ([CVE-2022-23569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23569))
*   Fixes an undefined behavior in `SparseTensorSliceDataset`
    ([CVE-2022-21736](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21736))
*   Fixes an assertion failure based denial of service via faulty bin count
    operations
    ([CVE-2022-21737](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21737))
*   Fixes a reference binding to null pointer in `QuantizedMaxPool`
    ([CVE-2022-21739](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21739))
*   Fixes an integer overflow leading to crash in `SparseCountSparseOutput`
    ([CVE-2022-21738](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21738))
*   Fixes a heap overflow in `SparseCountSparseOutput`
    ([CVE-2022-21740](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21740))
*   Fixes an FPE in `BiasAndClamp` in TFLite
    ([CVE-2022-23557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23557))
*   Fixes an FPE in depthwise convolutions in TFLite
    ([CVE-2022-21741](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21741))
*   Fixes an integer overflow in TFLite array creation
    ([CVE-2022-23558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23558))
*   Fixes an integer overflow in TFLite
    ([CVE-2022-23559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23559))
*   Fixes a dangerous OOB write in TFLite
    ([CVE-2022-23561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23561))
*   Fixes a vulnerability leading to read and write outside of bounds in TFLite
    ([CVE-2022-23560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23560))
*   Fixes a set of vulnerabilities caused by using insecure temporary files
    ([CVE-2022-23563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23563))
*   Fixes an integer overflow in Range resulting in undefined behavior and OOM
    ([CVE-2022-23562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23562))
*   Fixes a vulnerability where missing validation causes `tf.sparse.split` to
    crash when `axis` is a tuple
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a `CHECK`-fail when decoding resource handles from proto
    ([CVE-2022-23564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23564))
*   Fixes a `CHECK`-fail with repeated `AttrDef`
    ([CVE-2022-23565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23565))
*   Fixes a heap OOB write in Grappler
    ([CVE-2022-23566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23566))
*   Fixes a `CHECK`-fail when decoding invalid tensors from proto
    ([CVE-2022-23571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23571))
*   Fixes a null-dereference when specializing tensor type
    ([CVE-2022-23570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23570))
*   Fixes a crash when type cannot be specialized
    ([CVE-2022-23572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23572))
*   Fixes a heap OOB read/write in `SpecializeType`
    ([CVE-2022-23574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23574))
*   Fixes an uninitialized variable access in `AssignOp`
    ([CVE-2022-23573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23573))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateTensorSize`
    ([CVE-2022-23575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23575))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateOutputSize`
    ([CVE-2022-23576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23576))
*   Fixes a null dereference in `GetInitOp`
    ([CVE-2022-23577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23577))
*   Fixes a memory leak when a graph node is invalid
    ([CVE-2022-23578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23578))
*   Fixes an abort caused by allocating a vector that is too large
    ([CVE-2022-23580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23580))
*   Fixes multiple `CHECK`-failures during Grappler's `IsSimplifiableReshape`
    ([CVE-2022-23581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23581))
*   Fixes multiple `CHECK`-failures during Grappler's `SafeToRemoveIdentity`
    ([CVE-2022-23579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23579))
*   Fixes multiple `CHECK`-failures in `TensorByteSize`
    ([CVE-2022-23582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23582))
*   Fixes multiple `CHECK`-failures in binary ops due to type confusion
    ([CVE-2022-23583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23583))
*   Fixes a use after free in `DecodePng` kernel
    ([CVE-2022-23584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23584))
*   Fixes a memory leak in decoding PNG images
    ([CVE-2022-23585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23585))
*   Fixes multiple `CHECK`-fails in `function.cc`
    ([CVE-2022-23586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23586))
*   Fixes multiple `CHECK`-fails due to attempting to build a reference tensor
    ([CVE-2022-23588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23588))
*   Fixes an integer overflow in Grappler cost estimation of crop and resize
    operation
    ([CVE-2022-23587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23587))
*   Fixes a null pointer dereference in Grappler's `IsConstant`
    ([CVE-2022-23589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23589))
*   Fixes a `CHECK` failure in constant folding
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a stack overflow due to self-recursive function in `GraphDef`
    ([CVE-2022-23591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23591))
*   Fixes a null pointer dereference in `BuildXlaCompilationCache` (XLA)
    ([CVE-2022-23595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23595))
*   Updates `icu` to `69.1` to handle
    [CVE-2020-10531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-10531)

# Release 2.5.3

This releases introduces several vulnerability fixes:

*   Fixes a floating point division by 0 when executing convolution operators
    ([CVE-2022-21725](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21725))
*   Fixes a heap OOB read in shape inference for `ReverseSequence`
    ([CVE-2022-21728](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21728))
*   Fixes a heap OOB access in `Dequantize`
    ([CVE-2022-21726](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21726))
*   Fixes an integer overflow in shape inference for `Dequantize`
    ([CVE-2022-21727](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21727))
*   Fixes a heap OOB access in `FractionalAvgPoolGrad`
    ([CVE-2022-21730](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21730))
*   Fixes an overflow and divide by zero in `UnravelIndex`
    ([CVE-2022-21729](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21729))
*   Fixes a type confusion in shape inference for `ConcatV2`
    ([CVE-2022-21731](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21731))
*   Fixes an OOM in `ThreadPoolHandle`
    ([CVE-2022-21732](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21732))
*   Fixes an OOM due to integer overflow in `StringNGrams`
    ([CVE-2022-21733](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21733))
*   Fixes more issues caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes an integer overflows in most sparse component-wise ops
    ([CVE-2022-23567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23567))
*   Fixes an integer overflows in `AddManySparseToTensorsMap`
    ([CVE-2022-23568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23568))
*   Fixes a number of `CHECK`-failures in `MapStage`
    ([CVE-2022-21734](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21734))
*   Fixes a division by zero in `FractionalMaxPool`
    ([CVE-2022-21735](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21735))
*   Fixes a number of `CHECK`-fails when building invalid/overflowing tensor
    shapes
    ([CVE-2022-23569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23569))
*   Fixes an undefined behavior in `SparseTensorSliceDataset`
    ([CVE-2022-21736](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21736))
*   Fixes an assertion failure based denial of service via faulty bin count
    operations
    ([CVE-2022-21737](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21737))
*   Fixes a reference binding to null pointer in `QuantizedMaxPool`
    ([CVE-2022-21739](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21739))
*   Fixes an integer overflow leading to crash in `SparseCountSparseOutput`
    ([CVE-2022-21738](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21738))
*   Fixes a heap overflow in `SparseCountSparseOutput`
    ([CVE-2022-21740](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21740))
*   Fixes an FPE in `BiasAndClamp` in TFLite
    ([CVE-2022-23557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23557))
*   Fixes an FPE in depthwise convolutions in TFLite
    ([CVE-2022-21741](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-21741))
*   Fixes an integer overflow in TFLite array creation
    ([CVE-2022-23558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23558))
*   Fixes an integer overflow in TFLite
    ([CVE-2022-23559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23559))
*   Fixes a dangerous OOB write in TFLite
    ([CVE-2022-23561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23561))
*   Fixes a vulnerability leading to read and write outside of bounds in TFLite
    ([CVE-2022-23560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23560))
*   Fixes a set of vulnerabilities caused by using insecure temporary files
    ([CVE-2022-23563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23563))
*   Fixes an integer overflow in Range resulting in undefined behavior and OOM
    ([CVE-2022-23562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23562))
*   Fixes a vulnerability where missing validation causes `tf.sparse.split` to
    crash when `axis` is a tuple
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a `CHECK`-fail when decoding resource handles from proto
    ([CVE-2022-23564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23564))
*   Fixes a `CHECK`-fail with repeated `AttrDef`
    ([CVE-2022-23565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23565))
*   Fixes a heap OOB write in Grappler
    ([CVE-2022-23566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23566))
*   Fixes a `CHECK`-fail when decoding invalid tensors from proto
    ([CVE-2022-23571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23571))
*   Fixes an unitialized variable access in `AssignOp`
    ([CVE-2022-23573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23573))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateTensorSize`
    ([CVE-2022-23575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23575))
*   Fixes an integer overflow in `OpLevelCostEstimator::CalculateOutputSize`
    ([CVE-2022-23576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23576))
*   Fixes a null dereference in `GetInitOp`
    ([CVE-2022-23577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23577))
*   Fixes a memory leak when a graph node is invalid
    ([CVE-2022-23578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23578))
*   Fixes an abort caused by allocating a vector that is too large
    ([CVE-2022-23580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23580))
*   Fixes multiple `CHECK`-failures during Grappler's `IsSimplifiableReshape`
    ([CVE-2022-23581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23581))
*   Fixes multiple `CHECK`-failures during Grappler's `SafeToRemoveIdentity`
    ([CVE-2022-23579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23579))
*   Fixes multiple `CHECK`-failures in `TensorByteSize`
    ([CVE-2022-23582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23582))
*   Fixes multiple `CHECK`-failures in binary ops due to type confusion
    ([CVE-2022-23583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23583))
*   Fixes a use after free in `DecodePng` kernel
    ([CVE-2022-23584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23584))
*   Fixes a memory leak in decoding PNG images
    ([CVE-2022-23585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23585))
*   Fixes multiple `CHECK`-fails in `function.cc`
    ([CVE-2022-23586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23586))
*   Fixes multiple `CHECK`-fails due to attempting to build a reference tensor
    ([CVE-2022-23588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23588))
*   Fixes an integer overflow in Grappler cost estimation of crop and resize
    operation
    ([CVE-2022-23587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23587))
*   Fixes a null pointer dereference in Grappler's `IsConstant`
    ([CVE-2022-23589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23589))
*   Fixes a `CHECK` failure in constant folding
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a stack overflow due to self-recursive function in `GraphDef`
    ([CVE-2022-23591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2022-23591))
*   Updates `icu` to `69.1` to handle
    [CVE-2020-10531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-10531)

# Release 2.7.0

## Breaking Changes

*   `tf.keras`:

    *   The methods `Model.fit()`, `Model.predict()`, and `Model.evaluate()`
        will no longer uprank input data of shape `(batch_size,)` to become
        `(batch_size, 1)`. This enables `Model` subclasses to process scalar
        data in their `train_step()`/`test_step()`/`predict_step()` methods. \
        Note that this change may break certain subclassed models. You can
        revert back to the previous behavior by adding upranking yourself in the
        `train_step()`/`test_step()`/`predict_step()` methods, e.g. `if
        x.shape.rank == 1: x = tf.expand_dims(x, axis=-1)`. Functional models as
        well as Sequential models built with an explicit input shape are not
        affected.
    *   The methods `Model.to_yaml()` and `keras.models.model_from_yaml` have
        been replaced to raise a `RuntimeError` as they can be abused to cause
        arbitrary code execution. It is recommended to use JSON serialization
        instead of YAML, or, a better alternative, serialize to H5.
    *   `LinearModel` and `WideDeepModel` are moved to the
        `tf.compat.v1.keras.models.` namespace
        (`tf.compat.v1.keras.models.LinearModel` and
        `tf.compat.v1.keras.models.WideDeepModel`), and their `experimental`
        endpoints (`tf.keras.experimental.models.LinearModel` and
        `tf.keras.experimental.models.WideDeepModel`) are being deprecated.
    *   RNG behavior change for all `tf.keras.initializers` classes. For any
        class constructed with a fixed seed, it will no longer generate same
        value when invoked multiple times. Instead, it will return different
        value, but a deterministic sequence. This change will make the
        initialize behavior align between v1 and v2.

*   `tf.lite`:

    *   Rename fields `SignatureDef` table in schema to maximize the parity with
        TF SavedModel's Signature concept.
    *   Deprecate Makefile builds. Makefile users need to migrate their builds
        to CMake or Bazel. Please refer to the
        [Build TensorFlow Lite with CMake](https://www.tensorflow.org/lite/guide/build_cmake)
        and
        [Build TensorFlow Lite for ARM boards](https://www.tensorflow.org/lite/guide/build_arm)
        for the migration.
    *   Deprecate `tflite::OpResolver::GetDelegates`. The list returned by
        TfLite's `BuiltinOpResolver::GetDelegates` is now always empty. Instead,
        recommend using new method `tflite::OpResolver::GetDelegateCreators` in
        order to achieve lazy initialization on TfLite delegate instances.

*   TF Core:

    *   `tf.Graph.get_name_scope()` now always returns a string, as documented.
        Previously, when called within `name_scope("")` or `name_scope(None)`
        contexts, it returned `None`; now it returns the empty string.
    *   `tensorflow/core/ir/` contains a new MLIR-based Graph dialect that is
        isomorphic to GraphDef and will be used to replace GraphDef-based (e.g.,
        Grappler) optimizations.
    *   Deprecated and removed `attrs()` function in shape inference. All
        attributes should be queried by name now (rather than range returned) to
        enable changing the underlying storage there.
    *   The following Python symbols were accidentally added in earlier versions
        of TensorFlow and now are removed. Each symbol has a replacement that
        should be used instead, but note the replacement's argument names are
        different.
        *   `tf.quantize_and_dequantize_v4` (accidentally introduced in
            TensorFlow 2.4): Use `tf.quantization.quantize_and_dequantize_v2`
            instead.
        *   `tf.batch_mat_mul_v3` (accidentally introduced in TensorFlow 2.6):
            Use `tf.linalg.matmul` instead.
        *   `tf.sparse_segment_sum_grad` (accidentally introduced in TensorFlow
            2.6): Use `tf.raw_ops.SparseSegmentSumGrad` instead. Directly
            calling this op is typically not necessary, as it is automatically
            used when computing the gradient of `tf.sparse.segment_sum`.
    *   Renaming of tensorflow::int64 to int_64_t in numerous places (the former
        is an alias for the latter) which could result in needing to regenerate
        selective op registration headers else execution would fail with
        unregistered kernels error.

*   Modular File System Migration:

    *   Support for S3 and HDFS file systems has been migrated to a modular file
        systems based approach and is now available in
        https://github.com/tensorflow/io. The `tensorflow-io` python package
        should be installed for S3 and HDFS support with tensorflow.

## Major Features and Improvements

*   Improvements to the TensorFlow debugging experience:

    *   Previously, TensorFlow error stack traces involved many internal frames,
        which could be challenging to read through, while not being actionable
        for end users. As of TF 2.7, TensorFlow filters internal frames in most
        errors that it raises, to keep stack traces short, readable, and focused
        on what's actionable for end users (their own code).

    This behavior can be disabled by calling
    `tf.debugging.disable_traceback_filtering()`, and can be re-enabled via
    `tf.debugging.enable_traceback_filtering()`. If you are debugging a
    TensorFlow-internal issue (e.g. to prepare a TensorFlow PR), make sure to
    disable traceback filtering. You can check whether this feature is currently
    enabled by calling `tf.debugging.is_traceback_filtering_enabled()`.

    Note that this feature is only available with Python 3.7 or higher.

    *   Improve the informativeness of error messages raised by Keras
        `Layer.__call__()`, by adding the full list of argument values passed to
        the layer in every exception.

*   Introduce the `tf.compat.v1.keras.utils.track_tf1_style_variables`
    decorator, which enables using large classes of tf1-style variable_scope,
    `get_variable`, and `compat.v1.layer`-based components from within TF2
    models running with TF2 behavior enabled.

*   `tf.data`:

    *   tf.data service now supports auto-sharding. Users specify the sharding
        policy with `tf.data.experimental.service.ShardingPolicy` enum. It can
        be one of `OFF` (equivalent to today's `"parallel_epochs"` mode),
        `DYNAMIC` (equivalent to today's `"distributed_epoch"` mode), or one of
        the static sharding policies: `FILE`, `DATA`, `FILE_OR_DATA`, or `HINT`
        (corresponding to values of `tf.data.experimental.AutoShardPolicy`).

        Static sharding (auto-sharding) requires the number of tf.data service
        workers be fixed. Users need to specify the worker addresses in
        `tensorflow.data.experimental.DispatcherConfig`.

    *   `tf.data.experimental.service.register_dataset` now accepts optional
        `compression` argument.

*   Keras:

    *   `tf.keras.layers.Conv` now includes a public `convolution_op` method.
        This method can be used to simplify the implementation of Conv
        subclasses. There are two primary ways to use this new method. The first
        is to use the method directly in your own `call` method: `python class
        StandardizedConv2D(tf.keras.layers.Conv2D): def call(self, inputs):
        mean, var = tf.nn.moments(self.kernel, axes=[0, 1, 2], keepdims=True)
        return self.convolution_op(inputs, (self.kernel - mean) / tf.sqrt(var +
        1e-10))` Alternatively, you can override `convolution_op`: `python class
        StandardizedConv2D(tf.keras.Layer): def convolution_op(self, inputs,
        kernel): mean, var = tf.nn.moments(kernel, axes=[0, 1, 2],
        keepdims=True) # Author code uses std + 1e-5 return
        super().convolution_op(inputs, (kernel - mean) / tf.sqrt(var + 1e-10))`
    *   Added `merge_state()` method to `tf.keras.metrics.Metric` for use in
        distributed computations.
    *   Added `sparse` and `ragged` options to
        `tf.keras.layers.TextVectorization` to allow for `SparseTensor` and
        `RaggedTensor` outputs from the layer.

*   distribute.experimental.rpc package:

    *   distribute.experimental.rpc package introduces APIs to create a GRPC
        based server to register tf.function methods and a GRPC client to invoke
        remote registered methods. RPC APIs are intended for multi-client setups
        i.e. server and clients are started in separate binaries independently.

    *   Example usage to create server: ```python server =
        tf.distribute.experimental.rpc.Server.create("grpc", "127.0.0.1:1234")
        @tf.function(input_signature=[ tf.TensorSpec([], tf.int32),
        tf.TensorSpec([], dtypes.int32) ]) def _remote_multiply(a, b): return
        tf.math.multiply(a, b)

        server.register("multiply", _remote_multiply) ```

    *   Example usage to create client: `python client =
        tf.distribute.experimental.rpc.Client.create("grpc", address) a =
        tf.constant(2, dtype=tf.int32) b = tf.constant(3, dtype=tf.int32)
        result = client.multiply(a, b)`

*   `tf.lite`:

    *   Add experimental API `experimental_from_jax` to support conversion from
        Jax models to TensorFlow Lite.
    *   Support uint32 data type for cast op.
    *   Support int8 data type for cast op.
    *   Add experimental quantization debugger `tf.lite.QuantizationDebugger`
    *   Add lite.experimental.authoring.compatible API
        *   A Python decorator to provide a way to check TFLite compatibility
            issue of `tf.function`. This returns a callable object which
            validates TFLite compatibility. If an incompatible operation is
            encountered during execution, an exception will be raised with
            information about the incompatible ops.
    *   Add lite.experimental.Analyzer API
        *   An experimental tool to analyze TFLite flatbuffer models. This API
            can be used to investigate TFLite model structure and check
            compatibility with GPU delegate.

*   Extension Types

    *   Add experimental API to define new Python classes that can be handled by
        TensorFlow APIs. To create an extension type, simply define a Python
        class with `tf.experimental.ExtensionType` as its base, and use type
        annotations to specify the type for each field. E.g.: `python class
        MaskedTensor(tf.experimental.ExtensionType): values: tf.Tensor mask:
        tf.Tensor` The `tf.ExtensionType` base class works similarly to
        [`typing.NamedTuple`](https://docs.python.org/3/library/typing.html#typing.NamedTuple)
        and
        [`@dataclasses.dataclass`](https://docs.python.org/3/library/dataclasses.html#dataclasses.dataclass)
        from the standard Python library.
    *   Extension types are supported by Keras, tf.data, TF-hub, SavedModel,
        tf.function, control flow ops, py_function, and distribution strategy.
    *   Add "dispatch decorators" that can be used to override the default
        behavior of TensorFlow ops (such as `tf.add` or `tf.concat`) when they
        are applied to ExtensionType values.
    *   The `BatchableExtensionType` API can be used to define extension types
        that support APIs that make use of batching, such as `tf.data.Dataset`
        and `tf.map_fn`.
    *   For more information, see the
        [Extension types guide](https://www.tensorflow.org/guide/extension_type).

## Bug Fixes and Other Changes

*   TF Core:
    *   Random number generation (RNG) system
        *   Add argument `alg` to `tf.random.stateless_*` functions to
            explicitly select the RNG algorithm.
        *   Add `tf.nn.experimental.stateless_dropout`, a stateless version of
            `tf.nn.dropout`.
        *   `tf.random.Generator` now can be created inside the scope of
            `tf.distribute.experimental.ParameterServerStrategy` and
            `tf.distribute.experimental.CentralStorageStrategy`.
    *   Add an experimental session config
        `tf.experimental.disable_functional_ops_lowering` which disables
        functional control flow op lowering optimization. This is useful when
        executing within a portable runtime where control flow op kernels may
        not be loaded due to selective registration.
    *   Add a new experimental argument `experimental_is_anonymous` to
        `tf.lookup.StaticHashTable.__init__` to create the table in anonymous
        mode. In this mode, the table resource can only be accessed via resource
        handles (not resource names) and will be deleted automatically when all
        resource handles pointing to it are gone.
*   `tf.data`:
    *   Introduce the `tf.data.experimental.at` API which provides random access
        for input pipelines that consist of transformations that support random
        access. The initial set of transformations that support random access
        includes:
        `tf.data.Dataset.from_tensor_slices`,`tf.data.Dataset.shuffle`,
        `tf.data.Dataset.batch`, `tf.data.Dataset.shard`, `tf.data.Dataset.map`,
        and `tf.data.Dataset.range`.
    *   Promote `tf.data.Options.experimental_deterministic` API to
        `tf.data.Options.deterministic` and deprecate the experimental endpoint.
    *   Move autotuning options
        from`tf.data.Options.experimental_optimization.autotune*` to a newly
        created `tf.data.Options.autotune.*` and remove support for
        `tf.data.Options.experimental_optimization.autotune_buffers`.
    *   Add support for user-defined names of tf.data core Python API, which can
        be used to disambiguate tf.data events in TF Profiler Trace Viewer.
    *   Promote `tf.data.experimental.sample_from_datasets` API to
        `tf.data.Dataset.sample_from_datasets` and deprecate the experimental
        endpoint.
    *   Added `TF_GPU_ALLOCATOR=cuda_malloc_async` that use cudaMallocAsync from
        CUDA 11.2. This could become the default in the future.
*   TF SavedModel:
    *   Custom gradients are now saved by default. See
        `tf.saved_model.SaveOptions` to disable this.
    *   The saved_model_cli's `--input_examples` inputs are now restricted to
        python literals to avoid code injection.
*   XLA:
    *   Add a new API that allows custom call functions to signal errors. The
        old API will be deprecated in a future release. See
        https://www.tensorflow.org/xla/custom_call for details.
    *   XLA:GPU reductions are deterministic by default (reductions within
        `jit_compile=True` are now deterministic).
    *   XLA:GPU works with Horovod (OSS contribution by Trent Lo from NVidia)
    *   XLA:CPU and XLA:GPU can compile tf.unique and tf.where when shapes are
        provably correct at compile time.
*   `tf.saved_model.save`:
    *   When saving a model, not specifying a namespace whitelist for custom ops
        with a namespace will now default to allowing rather than rejecting them
        all.
*   Deterministic Op Functionality (enabled by setting the environment variable
    `TF_DETERMINISTIC_OPS` to `"true"` or `"1"`):
    *   Add determinsitic GPU implementations of:
        *   `tf.math.segment_sum`
        *   `tf.math.segment_prod`
        *   `tf.math.segment_mean`
        *   `tf.math.unsorted_segment_sum`
        *   `tf.math.unsorted_segment_prod`
        *   `tf.math.unsorted_segment_sqrt`
        *   `tf.math.unsorted_segment_mean`
        *   `tf.gather` backprop
        *   `tf.convert_to_tensor` when fed with (sparse) `tf.IndexedSlices`
        *   `tf.nn.sparse_softmax_crossentropy_with_logits`
        *   `tf.nn.ctc_loss` (resolved, possibly in prior release, and confirmed
            with tests)
        *   stateful ops used in `tf.data.Dataset`
    *   Run the following ops on CPU (with significant performance penalty):
        *   `tf.scatter_nd` and other related scatter functions, such as
            `tf.tensor_scatter_nd_update`
    *   Add determinism-unimplemented exception-throwing to the following ops.
        When op-determinism is expected (i.e. when the environment variable
        `TF_DETERMINISTIC_OPS` is set to `"true"` or `"1"`), an attempt to use
        the specified paths through the following ops on a GPU will cause
        `tf.errors.UnimplementedError` (with an understandable message), unless
        otherwise specified, to be thrown.
        *   `tf.compat.v1.nn.fused_batch_norm` backprop to `offset` when
            `is_training=False`
        *   `tf.image.adjust_contrast` forward
        *   `tf.nn.depthwise_conv2d` backprop to `filter` when not using cuDNN
            convolution
        *   `tf.image.resize` with `method=ResizeMethod.NEAREST` backprop
        *   `tf.math.bincount` - TODO: confirm exception added
        *   `tf.raw_ops.DebugNumericSummary` and
            `tf.raw_ops.DebugNumericSummaryV2`
        *   `tf.Variable.scatter_add` (and other scatter methods, both on ref
            and resource variables)
        *   `tf.linalg.svd`
        *   `tf.nn.dilation2d` gradient
        *   `tf.nn.max_pool_with_argmax` gradient
        *   `tf.timestamp`. Throws `FailedPrecondition`
        *   The random-number-generating ops in the `tf.random` module when the
            global random seed has not yet been set (via `tf.random.set_seed`).
            Throws `RuntimeError` from Python or `InvalidArgument` from C++
        *   `tf.compat.v1.get_seed` if the global random seed has not yet been
            set (via `tf.random.set_seed`). Throws `RuntimeError` from Python or
            `InvalidArgument` from C++

## Security

*   Fixes a code injection issue in `saved_model_cli`
    ([CVE-2021-41228](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41228))
*   Fixes a vulnerability due to use of uninitialized value in Tensorflow
    ([CVE-2021-41225](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41225))
*   Fixes a heap OOB in `FusedBatchNorm` kernels
    ([CVE-2021-41223](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41223))
*   Fixes an arbitrary memory read in `ImmutableConst`
    ([CVE-2021-41227](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41227))
*   Fixes a heap OOB in `SparseBinCount`
    ([CVE-2021-41226](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41226))
*   Fixes a heap OOB in `SparseFillEmptyRows`
    ([CVE-2021-41224](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41224))
*   Fixes a segfault due to negative splits in `SplitV`
    ([CVE-2021-41222](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41222))
*   Fixes segfaults and vulnerabilities caused by accesses to invalid memory
    during shape inference in `Cudnn*` ops
    ([CVE-2021-41221](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41221))
*   Fixes a null pointer exception when `Exit` node is not preceded by `Enter`
    op
    ([CVE-2021-41217](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41217))
*   Fixes an integer division by 0 in `tf.raw_ops.AllToAll`
    ([CVE-2021-41218](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41218))
*   Fixes a use after free and a memory leak in `CollectiveReduceV2`
    ([CVE-2021-41220](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41220))
*   Fixes an undefined behavior via `nullptr` reference binding in sparse matrix
    multiplication
    ([CVE-2021-41219](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41219))
*   Fixes a heap buffer overflow in `Transpose`
    ([CVE-2021-41216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41216))
*   Prevents deadlocks arising from mutually recursive `tf.function` objects
    ([CVE-2021-41213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41213))
*   Fixes a null pointer exception in `DeserializeSparse`
    ([CVE-2021-41215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41215))
*   Fixes an undefined behavior arising from reference binding to `nullptr` in
    `tf.ragged.cross`
    ([CVE-2021-41214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41214))
*   Fixes a heap OOB read in `tf.ragged.cross`
    ([CVE-2021-41212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41212))
*   Fixes a heap OOB in shape inference for `QuantizeV2`
    ([CVE-2021-41211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41211))
*   Fixes a heap OOB read in all `tf.raw_ops.QuantizeAndDequantizeV*` ops
    ([CVE-2021-41205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41205))
*   Fixes an FPE in `ParallelConcat`
    ([CVE-2021-41207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41207))
*   Fixes FPE issues in convolutions with zero size filters
    ([CVE-2021-41209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41209))
*   Fixes a heap OOB read in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-41210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41210))
*   Fixes vulnerabilities caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes vulnerabilities caused by incomplete validation of shapes in multiple
    TF ops
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a segfault produced while copying constant resource tensor
    ([CVE-2021-41204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41204))
*   Fixes a vulnerability caused by unitialized access in
    `EinsumHelper::ParseEquation`
    ([CVE-2021-41201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41201))
*   Fixes several vulnerabilities and segfaults caused by missing validation
    during checkpoint loading
    ([CVE-2021-41203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41203))
*   Fixes an overflow producing a crash in `tf.range`
    ([CVE-2021-41202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41202))
*   Fixes an overflow producing a crash in `tf.image.resize` when size is large
    ([CVE-2021-41199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41199))
*   Fixes an overflow producing a crash in `tf.tile` when tiling tensor is large
    ([CVE-2021-41198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41198))
*   Fixes a vulnerability produced due to incomplete validation in
    `tf.summary.create_file_writer`
    ([CVE-2021-41200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41200))
*   Fixes multiple crashes due to overflow and `CHECK`-fail in ops with large
    tensor shapes
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a crash in `max_pool3d` when size argument is 0 or negative
    ([CVE-2021-41196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41196))
*   Fixes a crash in `tf.math.segment_*` operations
    ([CVE-2021-41195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41195))
*   Updates `curl` to `7.78.0` to handle
    [CVE-2021-22922](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22922),
    [CVE-2021-22923](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22923),
    [CVE-2021-22924](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22924),
    [CVE-2021-22925](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22925),
    and
    [CVE-2021-22926](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22926).

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

8bitmp3, Abhilash Majumder, abhilash1910, AdeshChoudhar, Adrian Garcia
Badaracco, Adrian Ratiu, ag.ramesh, Aleksandr Nikolaev, Alexander Bosch,
Alexander Grund, Annie Tallund, Anush Elangovan, Artem Sokolovskii, azazhu,
Balint Cristian, Bas Aarts, Ben Barsdell, bhack, cfRod, Cheney-Wang, Cheng Ren,
Christopher Bate, collin, Danila Bespalov, David Datascientist, Deven Desai,
Duncan Riach, Ehsan Kia, Ellie, Fan Du, fo40225, Frederic Bastien, fsx950223,
Gauri1 Deshpande, geetachavan1, Guillaume Klein, guozhong.zhuang, helen, Håkon
Sandsmark, japm48, jgehw, Jinzhe Zeng, Jonathan Dekhtiar, Kai Zhu, Kaixi Hou,
Kanvi Khanna, Koan-Sin Tan, Koki Ibukuro, Kulin Seth, KumaTea, Kun-Lu, Lemo,
lipracer, liuyuanqiang, Mahmoud Abuzaina, Marius Brehler, Maxiwell S. Garcia,
mdfaijul, metarutaiga, Michal Szutenberg, nammbash, Neil Girdhar, Nishidha
Panpaliya, Nyadla-Sys, Patrice Vignola, Peter Kasting, Philipp Hack, PINTO0309,
Prateek Gupta, puneeshkhanna, Rahul Butani, Rajeshwar Reddy T, Reza Rahimi,
RinozaJiffry, rmothukuru, Rohit Santhanam, Saduf2019, Samuel Marks, sclarkson,
Sergii Khomenko, Sheng, Yang, Sidong-Wei, slowy07, Srinivasan Narayanamoorthy,
Srishti Srivastava, stanley, Stella Alice Schlotter, Steven I Reeves,
stevenireeves, svobora, Takayoshi Koizumi, Tamas Bela Feher, Thibaut
Goetghebuer-Planchon, Trent Lo, Twice, Varghese, Jojimon, Vishnuvardhan
Janapati, Wang Yanzhang, Wang,Quintin, William Muir, William Raveane, Yasir
Modak, Yasuhiro Matsumoto, Yi Li, Yong Tang, zhaozheng09, Zhoulong Jiang,
zzpmiracle

# Release 2.6.2

Fixes an issue where `keras`, `tensorflow_estimator` and `tensorboard` were
missing proper upper bounds and resulted in broken installs after TF 2.7 release

# Release 2.6.1

This release introduces several vulnerability fixes:

*   Fixes a code injection issue in `saved_model_cli`
    ([CVE-2021-41228](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41228))
*   Fixes a vulnerability due to use of uninitialized value in Tensorflow
    ([CVE-2021-41225](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41225))
*   Fixes a heap OOB in `FusedBatchNorm` kernels
    ([CVE-2021-41223](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41223))
*   Fixes an arbitrary memory read in `ImmutableConst`
    ([CVE-2021-41227](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41227))
*   Fixes a heap OOB in `SparseBinCount`
    ([CVE-2021-41226](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41226))
*   Fixes a heap OOB in `SparseFillEmptyRows`
    ([CVE-2021-41224](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41224))
*   Fixes a segfault due to negative splits in `SplitV`
    ([CVE-2021-41222](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41222))
*   Fixes segfaults and vulnerabilities caused by accesses to invalid memory
    during shape inference in `Cudnn*` ops
    ([CVE-2021-41221](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41221))
*   Fixes a null pointer exception when `Exit` node is not preceded by `Enter`
    op
    ([CVE-2021-41217](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41217))
*   Fixes an integer division by 0 in `tf.raw_ops.AllToAll`
    ([CVE-2021-41218](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41218))
*   Fixes a use after free and a memory leak in `CollectiveReduceV2`
    ([CVE-2021-41220](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41220))
*   Fixes an undefined behavior via `nullptr` reference binding in sparse matrix
    multiplication
    ([CVE-2021-41219](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41219))
*   Fixes a heap buffer overflow in `Transpose`
    ([CVE-2021-41216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41216))
*   Prevents deadlocks arising from mutually recursive `tf.function` objects
    ([CVE-2021-41213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41213))
*   Fixes a null pointer exception in `DeserializeSparse`
    ([CVE-2021-41215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41215))
*   Fixes an undefined behavior arising from reference binding to `nullptr` in
    `tf.ragged.cross`
    ([CVE-2021-41214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41214))
*   Fixes a heap OOB read in `tf.ragged.cross`
    ([CVE-2021-41212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41212))
*   Fixes a heap OOB in shape inference for `QuantizeV2`
    ([CVE-2021-41211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41211))
*   Fixes a heap OOB read in all `tf.raw_ops.QuantizeAndDequantizeV*` ops
    ([CVE-2021-41205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41205))
*   Fixes an FPE in `ParallelConcat`
    ([CVE-2021-41207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41207))
*   Fixes FPE issues in convolutions with zero size filters
    ([CVE-2021-41209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41209))
*   Fixes a heap OOB read in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-41210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41210))
*   Fixes vulnerabilities caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes vulnerabilities caused by incomplete validation of shapes in multiple
    TF ops
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a segfault produced while copying constant resource tensor
    ([CVE-2021-41204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41204))
*   Fixes a vulnerability caused by unitialized access in
    `EinsumHelper::ParseEquation`
    ([CVE-2021-41201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41201))
*   Fixes several vulnerabilities and segfaults caused by missing validation
    during checkpoint loading
    ([CVE-2021-41203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41203))
*   Fixes an overflow producing a crash in `tf.range`
    ([CVE-2021-41202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41202))
*   Fixes an overflow producing a crash in `tf.image.resize` when size is large
    ([CVE-2021-41199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41199))
*   Fixes an overflow producing a crash in `tf.tile` when tiling tensor is large
    ([CVE-2021-41198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41198))
*   Fixes a vulnerability produced due to incomplete validation in
    `tf.summary.create_file_writer`
    ([CVE-2021-41200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41200))
*   Fixes multiple crashes due to overflow and `CHECK`-fail in ops with large
    tensor shapes
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a crash in `max_pool3d` when size argument is 0 or negative
    ([CVE-2021-41196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41196))
*   Fixes a crash in `tf.math.segment_*` operations
    ([CVE-2021-41195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41195))
*   Updates `curl` to `7.78.0` to handle
    [CVE-2021-22922](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22922),
    [CVE-2021-22923](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22923),
    [CVE-2021-22924](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22924),
    [CVE-2021-22925](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22925),
    and
    [CVE-2021-22926](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22926).

# Release 2.6.0

## Breaking Changes

*   `tf.train.experimental.enable_mixed_precision_graph_rewrite` is removed, as
    the API only works in graph mode and is not customizable. The function is
    still accessible under
    `tf.compat.v1.mixed_precision.enable_mixed_precision_graph_rewrite`, but it
    is recommended to use the
    [Keras mixed precision API](https://www.tensorflow.org/guide/mixed_precision)
    instead.

*   `tf.lite`:

    *   Remove `experimental.nn.dynamic_rnn`, `experimental.nn.TfLiteRNNCell`
        and `experimental.nn.TfLiteLSTMCell` since they're no longer supported.
        It's recommended to just use
        [keras lstm](https://www.tensorflow.org/api_docs/python/tf/keras/layers/LSTM)
        instead.

*   `tf.keras`:

    *   Keras been split into a separate PIP package (`keras`), and its code has
        been moved to the GitHub
        repository[keras-team/keras](https://github.com/keras-team/keras). The
        API endpoints for `tf.keras` stay unchanged, but are now backed by the
        `keras` PIP package. The existing code in tensorflow/python/keras is a
        staled copy and will be removed in future release (2.7). Please remove
        any imports to `tensorflow.python.keras` and replace them with public
        tf.keras API instead.
    *   The methods `Model.to_yaml()` and `keras.models.model_from_yaml` have
        been replaced to raise a `RuntimeError` as they can be abused to cause
        arbitrary code execution. It is recommended to use JSON serialization
        instead of YAML, or, a better alternative, serialize to H5.

## Known Caveats

*   TF Core:
    *   A longstanding bug in `tf.while_loop`, which caused it to execute
        sequentially, even when `parallel_iterations>1`, has now been fixed.
        However, the increased parallelism may result in increased memory use.
        Users who experience unwanted regressions should reset their
        `while_loop`'s `parallel_iterations` value to 1, which is consistent
        with prior behavior.

## Major Features and Improvements

*   `tf.keras`:

    *   Keras has been split into a separate PIP package (`keras`), and its code
        has been moved to the GitHub repository
        [keras-team/keras](http://github.com/keras-team/keras). The API
        endpoints for `tf.keras` stay unchanged, but are now backed by the
        `keras` PIP package. All Keras-related PRs and issues should now be
        directed to the GitHub repository.
        [keras-team/keras](http://github.com/keras-team/keras).
    *   `tf.keras.utils.experimental.DatasetCreator` now takes an optional
        `tf.distribute.InputOptions` for specific options when used with
        distribution.
    *   `tf.keras.experimental.SidecarEvaluator` is now available for a program
        intended to be run on an evaluator task, which is commonly used to
        supplement a training cluster running with
        `tf.distribute.experimental.ParameterServerStrategy` (see
        `https://www.tensorflow.org/tutorials/distribute/parameter_server_training).
        It can also be used with single-worker training or other strategies. See
        docstring for more info.
    *   Preprocessing layers moved from experimental to core.
        *   Import paths moved from `tf.keras.layers.preprocessing.experimental`
            to `tf.keras.layers`.
    *   Updates to Preprocessing layers API for consistency and clarity:
        *   `StringLookup` and `IntegerLookup` default for `mask_token` changed
            to `None`. This matches the default masking behavior of `Hashing`
            and `Embedding` layers. To keep existing behavior, pass
            `mask_token=""` during layer creation.
        *   Renamed `"binary"` output mode to `"multi_hot"` for
            `CategoryEncoding`, `StringLookup`, `IntegerLookup`, and
            `TextVectorization`. Multi-hot encoding will no longer automatically
            uprank rank 1 inputs, so these layers can now multi-hot encode
            unbatched multi-dimensional samples.
        *   Added a new output mode `"one_hot"` for `CategoryEncoding`,
            `StringLookup`, `IntegerLookup`, which will encode each element in
            an input batch individually, and automatically append a new output
            dimension if necessary. Use this mode on rank 1 inputs for the old
            `"binary"` behavior of one-hot encoding a batch of scalars.
        *   `Normalization` will no longer automatically uprank rank 1 inputs,
            allowing normalization of unbatched multi-dimensional samples.

*   `tf.lite`:

    *   The recommended Android NDK version for building TensorFlow Lite has
        been changed from r18b to r19c.
    *   Supports int64 for mul.
    *   Supports native variable builtin ops - ReadVariable, AssignVariable.
    *   Converter:
        *   Experimental support for variables in TFLite. To enable through
            conversion, users need to set
            `experimental_enable_resource_variables` on tf.lite.TFLiteConverter
            to True. Note: mutable variables is only available using
            `from_saved_model` in this release, support for other methods is
            coming soon.
        *   Old Converter (TOCO) is getting removed from next release. It's been
            deprecated for few releases already.

*   `tf.saved_model`:

    *   SavedModels can now save custom gradients. Use the option
        `tf.saved_model.SaveOption(experimental_custom_gradients=True)` to
        enable this feature. The documentation in
        [Advanced autodiff](https://www.tensorflow.org/guide/advanced_autodiff#custom_gradients)
        has been updated.
    *   Object metadata has now been deprecated and no longer saved to the
        SavedModel.

*   TF Core:

    *   Added `tf.config.experimental.reset_memory_stats` to reset the tracked
        peak memory returned by `tf.config.experimental.get_memory_info`.

*   `tf.data`:

    *   Added `target_workers` param to `data_service_ops.from_dataset_id` and
        `data_service_ops.distribute`. Users can specify `"AUTO"`, `"ANY"`, or
        `"LOCAL"` (case insensitive). If `"AUTO"`, tf.data service runtime
        decides which workers to read from. If `"ANY"`, TF workers read from any
        tf.data service workers. If `"LOCAL"`, TF workers will only read from
        local in-processs tf.data service workers. `"AUTO"` works well for most
        cases, while users can specify other targets. For example, `"LOCAL"`
        would help avoid RPCs and data copy if every TF worker colocates with a
        tf.data service worker. Currently, `"AUTO"` reads from any tf.data
        service workers to preserve existing behavior. The default value is
        `"AUTO"`.

## Bug Fixes and Other Changes

*   TF Core:
    *   Added `tf.lookup.experimental.MutableHashTable`, which provides a
        generic mutable hash table implementation.
        *   Compared to `tf.lookup.experimental.DenseHashTable` this offers
            lower overall memory usage, and a cleaner API. It does not require
            specifying a `delete_key` and `empty_key` that cannot be inserted
            into the table.
    *   Added support for specifying number of subdivisions in all reduce host
        collective. This parallelizes work on CPU and speeds up the collective
        performance. Default behavior is unchanged.
    *   Add an option `perturb_singular` to `tf.linalg.tridiagonal_solve` that
        allows solving linear systems with a numerically singular tridiagonal
        matrix, e.g. for use in inverse iteration.
    *   Added `tf.linalg.eigh_tridiagonal` that computes the eigenvalues of a
        Hermitian tridiagonal matrix.
    *   `tf.constant` now places its output on the current default device.
    *   SavedModel
        *   Added `tf.saved_model.experimental.TrackableResource`, which allows
            the creation of custom wrapper objects for resource tensors.
        *   Added a SavedModel load option to allow restoring partial
            checkpoints into the SavedModel. See
            [`tf.saved_model.LoadOptions`](https://www.tensorflow.org/api_docs/python/tf/saved_model/LoadOptions)
            for details.
    *   Added a new op `SparseSegmentSumGrad` to match the other sparse segment
        gradient ops and avoid an extra gather operation that was in the
        previous gradient implementation.
    *   Added a new session config setting `internal_fragmentation_fraction`,
        which controls when the BFC Allocator needs to split an oversized chunk
        to satisfy an allocation request.
    *   Added `tf.get_current_name_scope()` which returns the current full name
        scope string that will be prepended to op names.
*   `tf.data`:
    *   Promoting `tf.data.experimental.bucket_by_sequence_length` API to
        `tf.data.Dataset.bucket_by_sequence_length` and deprecating the
        experimental endpoint.
    *   Promoting `tf.data.experimental.get_single_element` API to
        `tf.data.Dataset.get_single_element` and deprecating the experimental
        endpoint.
    *   Promoting `tf.data.experimental.group_by_window` API to
        `tf.data.Dataset.group_by_window` and deprecating the experimental
        endpoint.
    *   Promoting `tf.data.experimental.RandomDataset` API to
        `tf.data.Dataset.random` and deprecating the experimental endpoint.
    *   Promoting `tf.data.experimental.scan` API to `tf.data.Dataset.scan` and
        deprecating the experimental endpoint.
    *   Promoting `tf.data.experimental.snapshot` API to
        `tf.data.Dataset.shapshot` and deprecating the experimental endpoint.
    *   Promoting `tf.data.experimental.take_while` API to
        `tf.data.Dataset.take_while` and deprecating the experimental endpoint.
    *   Promoting `tf.data.experimental.ThreadingOptions` API to
        `tf.data.ThreadingOptions` and deprecating the experimental endpoint.
    *   Promoting `tf.data.experimental.unique` API to `tf.data.Dataset.unique`
        and deprecating the experimental endpoint.
    *   Added `stop_on_empty_dataset` parameter to `sample_from_datasets` and
        `choose_from_datasets`. Setting `stop_on_empty_dataset=True` will stop
        sampling if it encounters an empty dataset. This preserves the sampling
        ratio throughout training. The prior behavior was to continue sampling,
        skipping over exhausted datasets, until all datasets are exhausted. By
        default, the original behavior (`stop_on_empty_dataset=False`) is
        preserved.
    *   Removed previously deprecated tf.data statistics related APIs:
        *   `tf.data.Options.experimental_stats`
        *   `tf.data.experimental.StatsAggregator`
        *   `tf.data.experimental.StatsOptions.*`
        *   `tf.data.experimental.bytes_produced_stats`
        *   `tf.data.experimental.latency_stats`
    *   Removed the following experimental tf.data optimization APIs:
        *   `tf.data.experimental.MapVectorizationOptions.*`
        *   `tf.data.experimental.OptimizationOptions.filter_with_random_uniform_fusion`
        *   `tf.data.experimental.OptimizationOptions.hoist_random_uniform`
        *   `tf.data.experimental.OptimizationOptions.map_vectorization` *
            `tf.data.experimental.OptimizationOptions.reorder_data_discarding_ops`
*   `tf.keras`:
    *   Fix usage of `__getitem__` slicing in Keras Functional APIs when the
        inputs are `RaggedTensor` objects.
    *   Add `keepdims` argument to all `GlobalPooling` layers.
    *   Add `include_preprocessing` argument to `MobileNetV3` architectures to
        control the inclusion of `Rescaling` layer in the model.
    *   Add optional argument (`force`) to `make_(train|test|predict)_funtion`
        methods to skip the cached function and generate a new one. This is
        useful to regenerate in a single call the compiled training function
        when any `.trainable` attribute of any model's layer has changed.
    *   Models now have a `save_spec` property which contains the `TensorSpec`
        specs for calling the model. This spec is automatically saved when the
        model is called for the first time.
*   `tf.linalg`:
    *   Add `CompositeTensor` as a base class to `LinearOperator`.
*   `tf.lite`:
    *   Fix mean op reference quantization rounding issue.
    *   Added `framework_stable` BUILD target, which links in only the
        non-experimental TF Lite APIs.
    *   Remove deprecated Java `Interpreter` methods:
        *   `modifyGraphWithDelegate` - Use `Interpreter.Options.addDelegate`
        *   `setNumThreads` - Use `Interpreter.Options.setNumThreads`
    *   Add Conv3DTranspose as a builtin op.
*   `tf.summary`:
    *   Fix `tf.summary.should_record_summaries()` so it correctly reflects when
        summaries will be written, even when `tf.summary.record_if()` is not n
        effect, by returning True tensor if default writer is present.
*   Grappler:
    *   Disable default Grappler optimization timeout to make the optimization
        pipeline deterministic. This may lead to increased model loading time,
        because time spent in graph optimizations is now unbounded (was 20
        minutes).
*   Deterministic Op Functionality (enabled by setting `TF_DETERMINISTIC_OPS` to
    `"true"` or `"1"`):
    *   Add a deterministic GPU implementation of
        `tf.nn.softmax_cross_entropy_with_logits`. See PR
        [49178](https://github.com/tensorflow/tensorflow/pull/49178).
    *   Add a deterministic CPU implementation of `tf.image.crop_and_resize`.
        See PR [48905](https://github.com/tensorflow/tensorflow/pull/48905).
    *   Add determinism-unimplemented exception-throwing to the following ops.
        When op-determinism is expected, an attempt to use the specified paths
        through the following ops on a GPU will cause
        `tf.errors.UnimplementedError` (with an understandable message) to be
        thrown.
        *   `tf.nn.sparse_softmax_cross_entropy_with_logits` forwards and/or
            backwards. See PR
            [47925](https://github.com/tensorflow/tensorflow/pull/47925).
        *   `tf.image.crop_and_resize` gradient w.r.t. either `image` or
            `boxes`. See PR
            [48905](https://github.com/tensorflow/tensorflow/pull/48905).
        *   `tf.sparse.sparse_dense_matmul` forwards. See PR
            [50355](https://github.com/tensorflow/tensorflow/pull/50355).

## Security

*   Fixes a heap out of bounds access in sparse reduction operations
    ([CVE-2021-37635](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37635))
*   Fixes a floating point exception in `SparseDenseCwiseDiv`
    ([CVE-2021-37636](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37636))
*   Fixes a null pointer dereference in `CompressElement`
    ([CVE-2021-37637](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37637))
*   Fixes a null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-37638](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37638))
*   Fixes a null pointer dereference and a heap OOB read arising from operations
    restoring tensors
    ([CVE-2021-37639](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37639))
*   Fixes an integer division by 0 in sparse reshaping
    ([CVE-2021-37640](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37640))
*   Fixes a division by 0 in `ResourceScatterDiv`
    ([CVE-2021-37642](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37642))
*   Fixes a heap OOB in `RaggedGather`
    ([CVE-2021-37641](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37641))
*   Fixes a `std::abort` raised from `TensorListReserve`
    ([CVE-2021-37644](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37644))
*   Fixes a null pointer dereference in `MatrixDiagPartOp`
    ([CVE-2021-37643](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37643))
*   Fixes an integer overflow due to conversion to unsigned
    ([CVE-2021-37645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37645))
*   Fixes a bad allocation error in `StringNGrams` caused by integer conversion
    ([CVE-2021-37646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37646))
*   Fixes a null pointer dereference in `SparseTensorSliceDataset`
    ([CVE-2021-37647](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37647))
*   Fixes an incorrect validation of `SaveV2` inputs
    ([CVE-2021-37648](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37648))
*   Fixes a null pointer dereference in `UncompressElement`
    ([CVE-2021-37649](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37649))
*   Fixes a segfault and a heap buffer overflow in
    `{Experimental,}DatasetToTFRecord`
    ([CVE-2021-37650](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37650))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-37651](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37651))
*   Fixes a use after free in boosted trees creation
    ([CVE-2021-37652](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37652))
*   Fixes a division by 0 in `ResourceGather`
    ([CVE-2021-37653](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37653))
*   Fixes a heap OOB and a `CHECK` fail in `ResourceGather`
    ([CVE-2021-37654](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37654))
*   Fixes a heap OOB in `ResourceScatterUpdate`
    ([CVE-2021-37655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37655))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToSparse`
    ([CVE-2021-37656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37656))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixDiagV*` ops
    ([CVE-2021-37657](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37657))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixSetDiagV*` ops
    ([CVE-2021-37658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37658))
*   Fixes an undefined behavior arising from reference binding to nullptr and
    heap OOB in binary cwise ops
    ([CVE-2021-37659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37659))
*   Fixes a division by 0 in inplace operations
    ([CVE-2021-37660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37660))
*   Fixes a crash caused by integer conversion to unsigned
    ([CVE-2021-37661](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37661))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    boosted trees
    ([CVE-2021-37662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37662))
*   Fixes a heap OOB in boosted trees
    ([CVE-2021-37664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37664))
*   Fixes vulnerabilities arising from incomplete validation in `QuantizeV2`
    ([CVE-2021-37663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37663))
*   Fixes vulnerabilities arising from incomplete validation in MKL
    requantization
    ([CVE-2021-37665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37665))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToVariant`
    ([CVE-2021-37666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37666))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    unicode encoding
    ([CVE-2021-37667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37667))
*   Fixes an FPE in `tf.raw_ops.UnravelIndex`
    ([CVE-2021-37668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37668))
*   Fixes a crash in NMS ops caused by integer conversion to unsigned
    ([CVE-2021-37669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37669))
*   Fixes a heap OOB in `UpperBound` and `LowerBound`
    ([CVE-2021-37670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37670))
*   Fixes an undefined behavior arising from reference binding to nullptr in map
    operations
    ([CVE-2021-37671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37671))
*   Fixes a heap OOB in `SdcaOptimizerV2`
    ([CVE-2021-37672](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37672))
*   Fixes a `CHECK`-fail in `MapStage`
    ([CVE-2021-37673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37673))
*   Fixes a vulnerability arising from incomplete validation in `MaxPoolGrad`
    ([CVE-2021-37674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37674))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    shape inference
    ([CVE-2021-37676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37676))
*   Fixes a division by 0 in most convolution operators
    ([CVE-2021-37675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37675))
*   Fixes vulnerabilities arising from missing validation in shape inference for
    `Dequantize`
    ([CVE-2021-37677](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37677))
*   Fixes an arbitrary code execution due to YAML deserialization
    ([CVE-2021-37678](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37678))
*   Fixes a heap OOB in nested `tf.map_fn` with `RaggedTensor`s
    ([CVE-2021-37679](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37679))
*   Fixes a division by zero in TFLite
    ([CVE-2021-37680](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37680))
*   Fixes an NPE in TFLite
    ([CVE-2021-37681](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37681))
*   Fixes a vulnerability arising from use of unitialized value in TFLite
    ([CVE-2021-37682](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37682))
*   Fixes an FPE in TFLite division operations
    ([CVE-2021-37683](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37683))
*   Fixes an FPE in TFLite pooling operations
    ([CVE-2021-37684](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37684))
*   Fixes an infinite loop in TFLite
    ([CVE-2021-37686](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37686))
*   Fixes a heap OOB in TFLite
    ([CVE-2021-37685](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37685))
*   Fixes a heap OOB in TFLite's `Gather*` implementations
    ([CVE-2021-37687](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37687))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    ([CVE-2021-37688](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37688))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    MLIR optimizations
    ([CVE-2021-37689](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37689))
*   Fixes a FPE in LSH in TFLite
    ([CVE-2021-37691](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37691))
*   Fixes a segfault on strings tensors with mismatched dimensions, arising in
    Go code
    ([CVE-2021-37692](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37692))
*   Fixes a use after free and a potential segfault in shape inference functions
    ([CVE-2021-37690](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37690))
*   Updates `curl` to `7.77.0` to handle
    [CVE-2021-22876](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22876),
    [CVE-2021-22897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22897),
    [CVE-2021-22898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22898),
    and
    [CVE-2021-22901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22901).

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aadhitya A, Abhilash Mahendrakar, Abhishek Varma, Abin Shahab, Adam Hillier,
Aditya Kane, AdityaKane2001, ag.ramesh, Amogh Joshi, Armen Poghosov,
armkevincheng, Avrosh K, Ayan Moitra, azazhu, Banikumar Maiti, Bas Aarts, bhack,
Bhanu Prakash Bandaru Venkata, Billy Cao, Bohumir Zamecnik, Bradley Reece,
CyanXu, Daniel Situnayake, David Pal, Ddavis-2015, DEKHTIARJonathan, Deven
Desai, Duncan Riach, Edward, Eli Osherovich, Eugene Kuznetsov, europeanplaice,
evelynmitchell, Evgeniy Polyakov, Felix Vollmer, Florentin Hennecker, François
Chollet, Frederic Bastien, Fredrik Knutsson, Gabriele Macchi, Gaurav Shukla,
Gauri1 Deshpande, geetachavan1, Georgiy Manuilov, H, Hengwen Tong, Henri
Woodcock, Hiran Sarkar, Ilya Arzhannikov, Janghoo Lee, jdematos, Jens Meder,
Jerry Shih, jgehw, Jim Fisher, Jingbei Li, Jiri Podivin, Joachim Gehweiler,
Johannes Lade, Jonas I. Liechti, Jonas Liechti, Jonas Ohlsson, Jonathan
Dekhtiar, Julian Gross, Kaixi Hou, Kevin Cheng, Koan-Sin Tan, Kulin Seth,
linzewen, Liubov Batanina, luisleee, Lukas Geiger, Mahmoud Abuzaina, mathgaming,
Matt Conley, Max H. Gerlach, mdfaijul, Mh Kwon, Michael Martis, Michal
Szutenberg, Måns Nilsson, nammbash, Neil Girdhar, Nicholas Vadivelu, Nick
Kreeger, Nirjas Jakilim, okyanusoz, Patrice Vignola, Patrik Laurell, Pedro
Marques, Philipp Hack, Phillip Cloud, Piergiacomo De Marchi, Prashant Kumar,
puneeshkhanna, pvarouktsis, QQ喵, Rajeshwar Reddy T, Rama Ketineni, Reza Rahimi,
Robert Kalmar, rsun, Ryan Kuester, Saduf2019, Sean Morgan, Sean Moriarity,
Shaochen Shi, Sheng, Yang, Shu Wang, Shuai Zhang, Soojeong, Stanley-Nod, Steven
I Reeves, stevenireeves, Suraj Sudhir, Sven Mayer, Tamas Bela Feher,
tashuang.zk, tcervi, Teng Lu, Thales Elero Cervi, Thibaut Goetghebuer-Planchon,
Thomas Walther, Till Brychcy, Trent Lo, Uday Bondhugula, vishakha.agrawal,
Vishnuvardhan Janapati, wamuir, Wenwen Ouyang, wenwu, Williard Joshua Jose,
xiaohong1031, Xiaoming (Jason) Cui, Xinan Jiang, Yasir Modak, Yi Li, Yong Tang,
zilinzhu, 박상준, 이장

# Release 2.5.2

This release introduces several vulnerability fixes:

*   Fixes a code injection issue in `saved_model_cli`
    ([CVE-2021-41228](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41228))
*   Fixes a vulnerability due to use of uninitialized value in Tensorflow
    ([CVE-2021-41225](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41225))
*   Fixes a heap OOB in `FusedBatchNorm` kernels
    ([CVE-2021-41223](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41223))
*   Fixes an arbitrary memory read in `ImmutableConst`
    ([CVE-2021-41227](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41227))
*   Fixes a heap OOB in `SparseBinCount`
    ([CVE-2021-41226](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41226))
*   Fixes a heap OOB in `SparseFillEmptyRows`
    ([CVE-2021-41224](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41224))
*   Fixes a segfault due to negative splits in `SplitV`
    ([CVE-2021-41222](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41222))
*   Fixes segfaults and vulnerabilities caused by accesses to invalid memory
    during shape inference in `Cudnn*` ops
    ([CVE-2021-41221](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41221))
*   Fixes a null pointer exception when `Exit` node is not preceded by `Enter`
    op
    ([CVE-2021-41217](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41217))
*   Fixes an integer division by 0 in `tf.raw_ops.AllToAll`
    ([CVE-2021-41218](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41218))
*   Fixes an undefined behavior via `nullptr` reference binding in sparse matrix
    multiplication
    ([CVE-2021-41219](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41219))
*   Fixes a heap buffer overflow in `Transpose`
    ([CVE-2021-41216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41216))
*   Prevents deadlocks arising from mutually recursive `tf.function` objects
    ([CVE-2021-41213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41213))
*   Fixes a null pointer exception in `DeserializeSparse`
    ([CVE-2021-41215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41215))
*   Fixes an undefined behavior arising from reference binding to `nullptr` in
    `tf.ragged.cross`
    ([CVE-2021-41214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41214))
*   Fixes a heap OOB read in `tf.ragged.cross`
    ([CVE-2021-41212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41212))
*   Fixes a heap OOB read in all `tf.raw_ops.QuantizeAndDequantizeV*` ops
    ([CVE-2021-41205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41205))
*   Fixes an FPE in `ParallelConcat`
    ([CVE-2021-41207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41207))
*   Fixes FPE issues in convolutions with zero size filters
    ([CVE-2021-41209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41209))
*   Fixes a heap OOB read in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-41210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41210))
*   Fixes vulnerabilities caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes vulnerabilities caused by incomplete validation of shapes in multiple
    TF ops
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a segfault produced while copying constant resource tensor
    ([CVE-2021-41204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41204))
*   Fixes a vulnerability caused by unitialized access in
    `EinsumHelper::ParseEquation`
    ([CVE-2021-41201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41201))
*   Fixes several vulnerabilities and segfaults caused by missing validation
    during checkpoint loading
    ([CVE-2021-41203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41203))
*   Fixes an overflow producing a crash in `tf.range`
    ([CVE-2021-41202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41202))
*   Fixes an overflow producing a crash in `tf.image.resize` when size is large
    ([CVE-2021-41199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41199))
*   Fixes an overflow producing a crash in `tf.tile` when tiling tensor is large
    ([CVE-2021-41198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41198))
*   Fixes a vulnerability produced due to incomplete validation in
    `tf.summary.create_file_writer`
    ([CVE-2021-41200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41200))
*   Fixes multiple crashes due to overflow and `CHECK`-fail in ops with large
    tensor shapes
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a crash in `max_pool3d` when size argument is 0 or negative
    ([CVE-2021-41196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41196))
*   Fixes a crash in `tf.math.segment_*` operations
    ([CVE-2021-41195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41195))
*   Updates `curl` to `7.78.0` to handle
    [CVE-2021-22922](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22922),
    [CVE-2021-22923](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22923),
    [CVE-2021-22924](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22924),
    [CVE-2021-22925](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22925),
    and
    [CVE-2021-22926](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22926).

# Release 2.5.1

This release introduces several vulnerability fixes:

*   Fixes a heap out of bounds access in sparse reduction operations
    ([CVE-2021-37635](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37635))
*   Fixes a floating point exception in `SparseDenseCwiseDiv`
    ([CVE-2021-37636](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37636))
*   Fixes a null pointer dereference in `CompressElement`
    ([CVE-2021-37637](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37637))
*   Fixes a null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-37638](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37638))
*   Fixes a null pointer dereference and a heap OOB read arising from operations
    restoring tensors
    ([CVE-2021-37639](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37639))
*   Fixes an integer division by 0 in sparse reshaping
    ([CVE-2021-37640](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37640))
*   Fixes a division by 0 in `ResourceScatterDiv`
    ([CVE-2021-37642](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37642))
*   Fixes a heap OOB in `RaggedGather`
    ([CVE-2021-37641](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37641))
*   Fixes a `std::abort` raised from `TensorListReserve`
    ([CVE-2021-37644](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37644))
*   Fixes a null pointer dereference in `MatrixDiagPartOp`
    ([CVE-2021-37643](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37643))
*   Fixes an integer overflow due to conversion to unsigned
    ([CVE-2021-37645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37645))
*   Fixes a bad allocation error in `StringNGrams` caused by integer conversion
    ([CVE-2021-37646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37646))
*   Fixes a null pointer dereference in `SparseTensorSliceDataset`
    ([CVE-2021-37647](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37647))
*   Fixes an incorrect validation of `SaveV2` inputs
    ([CVE-2021-37648](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37648))
*   Fixes a null pointer dereference in `UncompressElement`
    ([CVE-2021-37649](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37649))
*   Fixes a segfault and a heap buffer overflow in
    `{Experimental,}DatasetToTFRecord`
    ([CVE-2021-37650](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37650))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-37651](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37651))
*   Fixes a use after free in boosted trees creation
    ([CVE-2021-37652](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37652))
*   Fixes a division by 0 in `ResourceGather`
    ([CVE-2021-37653](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37653))
*   Fixes a heap OOB and a `CHECK` fail in `ResourceGather`
    ([CVE-2021-37654](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37654))
*   Fixes a heap OOB in `ResourceScatterUpdate`
    ([CVE-2021-37655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37655))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToSparse`
    ([CVE-2021-37656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37656))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixDiagV*` ops
    ([CVE-2021-37657](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37657))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixSetDiagV*` ops
    ([CVE-2021-37658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37658))
*   Fixes an undefined behavior arising from reference binding to nullptr and
    heap OOB in binary cwise ops
    ([CVE-2021-37659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37659))
*   Fixes a division by 0 in inplace operations
    ([CVE-2021-37660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37660))
*   Fixes a crash caused by integer conversion to unsigned
    ([CVE-2021-37661](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37661))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    boosted trees
    ([CVE-2021-37662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37662))
*   Fixes a heap OOB in boosted trees
    ([CVE-2021-37664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37664))
*   Fixes vulnerabilities arising from incomplete validation in `QuantizeV2`
    ([CVE-2021-37663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37663))
*   Fixes vulnerabilities arising from incomplete validation in MKL
    requantization
    ([CVE-2021-37665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37665))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToVariant`
    ([CVE-2021-37666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37666))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    unicode encoding
    ([CVE-2021-37667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37667))
*   Fixes an FPE in `tf.raw_ops.UnravelIndex`
    ([CVE-2021-37668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37668))
*   Fixes a crash in NMS ops caused by integer conversion to unsigned
    ([CVE-2021-37669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37669))
*   Fixes a heap OOB in `UpperBound` and `LowerBound`
    ([CVE-2021-37670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37670))
*   Fixes an undefined behavior arising from reference binding to nullptr in map
    operations
    ([CVE-2021-37671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37671))
*   Fixes a heap OOB in `SdcaOptimizerV2`
    ([CVE-2021-37672](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37672))
*   Fixes a `CHECK`-fail in `MapStage`
    ([CVE-2021-37673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37673))
*   Fixes a vulnerability arising from incomplete validation in `MaxPoolGrad`
    ([CVE-2021-37674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37674))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    shape inference
    ([CVE-2021-37676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37676))
*   Fixes a division by 0 in most convolution operators
    ([CVE-2021-37675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37675))
*   Fixes vulnerabilities arising from missing validation in shape inference for
    `Dequantize`
    ([CVE-2021-37677](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37677))
*   Fixes an arbitrary code execution due to YAML deserialization
    ([CVE-2021-37678](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37678))
*   Fixes a heap OOB in nested `tf.map_fn` with `RaggedTensor`s
    ([CVE-2021-37679](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37679))
*   Fixes a division by zero in TFLite
    ([CVE-2021-37680](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37680))
*   Fixes an NPE in TFLite
    ([CVE-2021-37681](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37681))
*   Fixes a vulnerability arising from use of unitialized value in TFLite
    ([CVE-2021-37682](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37682))
*   Fixes an FPE in TFLite division operations
    ([CVE-2021-37683](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37683))
*   Fixes an FPE in TFLite pooling operations
    ([CVE-2021-37684](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37684))
*   Fixes an infinite loop in TFLite
    ([CVE-2021-37686](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37686))
*   Fixes a heap OOB in TFLite
    ([CVE-2021-37685](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37685))
*   Fixes a heap OOB in TFLite's `Gather*` implementations
    ([CVE-2021-37687](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37687))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    ([CVE-2021-37688](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37688))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    MLIR optimizations
    ([CVE-2021-37689](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37689))
*   Fixes a FPE in LSH in TFLite
    ([CVE-2021-37691](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37691))
*   Fixes a segfault on strings tensors with mismatched dimensions, arising in
    Go code
    ([CVE-2021-37692](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37692))
*   Fixes a use after free and a potential segfault in shape inference functions
    ([CVE-2021-37690](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37690))
*   Updates `curl` to `7.77.0` to handle
    [CVE-2021-22876](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22876),
    [CVE-2021-22897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22897),
    [CVE-2021-22898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22898),
    and
    [CVE-2021-22901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22901).

# Release 2.4.4

This release introduces several vulnerability fixes:

*   Fixes a code injection issue in `saved_model_cli`
    ([CVE-2021-41228](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41228))
*   Fixes a vulnerability due to use of uninitialized value in Tensorflow
    ([CVE-2021-41225](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41225))
*   Fixes a heap OOB in `FusedBatchNorm` kernels
    ([CVE-2021-41223](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41223))
*   Fixes an arbitrary memory read in `ImmutableConst`
    ([CVE-2021-41227](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41227))
*   Fixes a heap OOB in `SparseBinCount`
    ([CVE-2021-41226](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41226))
*   Fixes a heap OOB in `SparseFillEmptyRows`
    ([CVE-2021-41224](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41224))
*   Fixes a segfault due to negative splits in `SplitV`
    ([CVE-2021-41222](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41222))
*   Fixes segfaults and vulnerabilities caused by accesses to invalid memory
    during shape inference in `Cudnn*` ops
    ([CVE-2021-41221](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41221))
*   Fixes a null pointer exception when `Exit` node is not preceded by `Enter`
    op
    ([CVE-2021-41217](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41217))
*   Fixes an integer division by 0 in `tf.raw_ops.AllToAll`
    ([CVE-2021-41218](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41218))
*   Fixes an undefined behavior via `nullptr` reference binding in sparse matrix
    multiplication
    ([CVE-2021-41219](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41219))
*   Fixes a heap buffer overflow in `Transpose`
    ([CVE-2021-41216](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41216))
*   Prevents deadlocks arising from mutually recursive `tf.function` objects
    ([CVE-2021-41213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41213))
*   Fixes a null pointer exception in `DeserializeSparse`
    ([CVE-2021-41215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41215))
*   Fixes an undefined behavior arising from reference binding to `nullptr` in
    `tf.ragged.cross`
    ([CVE-2021-41214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41214))
*   Fixes a heap OOB read in `tf.ragged.cross`
    ([CVE-2021-41212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41212))
*   Fixes a heap OOB read in all `tf.raw_ops.QuantizeAndDequantizeV*` ops
    ([CVE-2021-41205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41205))
*   Fixes an FPE in `ParallelConcat`
    ([CVE-2021-41207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41207))
*   Fixes FPE issues in convolutions with zero size filters
    ([CVE-2021-41209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41209))
*   Fixes a heap OOB read in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-41210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41210))
*   Fixes vulnerabilities caused by incomplete validation in boosted trees code
    ([CVE-2021-41208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41208))
*   Fixes vulnerabilities caused by incomplete validation of shapes in multiple
    TF ops
    ([CVE-2021-41206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41206))
*   Fixes a segfault produced while copying constant resource tensor
    ([CVE-2021-41204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41204))
*   Fixes a vulnerability caused by unitialized access in
    `EinsumHelper::ParseEquation`
    ([CVE-2021-41201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41201))
*   Fixes several vulnerabilities and segfaults caused by missing validation
    during checkpoint loading
    ([CVE-2021-41203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41203))
*   Fixes an overflow producing a crash in `tf.range`
    ([CVE-2021-41202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41202))
*   Fixes an overflow producing a crash in `tf.image.resize` when size is large
    ([CVE-2021-41199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41199))
*   Fixes an overflow producing a crash in `tf.tile` when tiling tensor is large
    ([CVE-2021-41198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41198))
*   Fixes a vulnerability produced due to incomplete validation in
    `tf.summary.create_file_writer`
    ([CVE-2021-41200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41200))
*   Fixes multiple crashes due to overflow and `CHECK`-fail in ops with large
    tensor shapes
    ([CVE-2021-41197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41197))
*   Fixes a crash in `max_pool3d` when size argument is 0 or negative
    ([CVE-2021-41196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41196))
*   Fixes a crash in `tf.math.segment_*` operations
    ([CVE-2021-41195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-41195))
*   Updates `curl` to `7.78.0` to handle
    [CVE-2021-22922](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22922),
    [CVE-2021-22923](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22923),
    [CVE-2021-22924](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22924),
    [CVE-2021-22925](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22925),
    and
    [CVE-2021-22926](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22926).

# Release 2.4.3

This release introduces several vulnerability fixes:

*   Fixes a heap out of bounds access in sparse reduction operations
    ([CVE-2021-37635](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37635))
*   Fixes a floating point exception in `SparseDenseCwiseDiv`
    ([CVE-2021-37636](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37636))
*   Fixes a null pointer dereference in `CompressElement`
    ([CVE-2021-37637](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37637))
*   Fixes a null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-37638](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37638))
*   Fixes a null pointer dereference and a heap OOB read arising from operations
    restoring tensors
    ([CVE-2021-37639](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37639))
*   Fixes an integer division by 0 in sparse reshaping
    ([CVE-2021-37640](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37640))
*   Fixes a division by 0 in `ResourceScatterDiv`
    ([CVE-2021-37642](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37642))
*   Fixes a heap OOB in `RaggedGather`
    ([CVE-2021-37641](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37641))
*   Fixes a `std::abort` raised from `TensorListReserve`
    ([CVE-2021-37644](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37644))
*   Fixes a null pointer dereference in `MatrixDiagPartOp`
    ([CVE-2021-37643](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37643))
*   Fixes an integer overflow due to conversion to unsigned
    ([CVE-2021-37645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37645))
*   Fixes a bad allocation error in `StringNGrams` caused by integer conversion
    ([CVE-2021-37646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37646))
*   Fixes a null pointer dereference in `SparseTensorSliceDataset`
    ([CVE-2021-37647](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37647))
*   Fixes an incorrect validation of `SaveV2` inputs
    ([CVE-2021-37648](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37648))
*   Fixes a null pointer dereference in `UncompressElement`
    ([CVE-2021-37649](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37649))
*   Fixes a segfault and a heap buffer overflow in
    `{Experimental,}DatasetToTFRecord`
    ([CVE-2021-37650](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37650))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-37651](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37651))
*   Fixes a use after free in boosted trees creation
    ([CVE-2021-37652](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37652))
*   Fixes a division by 0 in `ResourceGather`
    ([CVE-2021-37653](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37653))
*   Fixes a heap OOB and a `CHECK` fail in `ResourceGather`
    ([CVE-2021-37654](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37654))
*   Fixes a heap OOB in `ResourceScatterUpdate`
    ([CVE-2021-37655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37655))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToSparse`
    ([CVE-2021-37656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37656))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixDiagV*` ops
    ([CVE-2021-37657](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37657))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixSetDiagV*` ops
    ([CVE-2021-37658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37658))
*   Fixes an undefined behavior arising from reference binding to nullptr and
    heap OOB in binary cwise ops
    ([CVE-2021-37659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37659))
*   Fixes a division by 0 in inplace operations
    ([CVE-2021-37660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37660))
*   Fixes a crash caused by integer conversion to unsigned
    ([CVE-2021-37661](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37661))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    boosted trees
    ([CVE-2021-37662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37662))
*   Fixes a heap OOB in boosted trees
    ([CVE-2021-37664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37664))
*   Fixes vulnerabilities arising from incomplete validation in `QuantizeV2`
    ([CVE-2021-37663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37663))
*   Fixes vulnerabilities arising from incomplete validation in MKL
    requantization
    ([CVE-2021-37665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37665))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToVariant`
    ([CVE-2021-37666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37666))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    unicode encoding
    ([CVE-2021-37667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37667))
*   Fixes an FPE in `tf.raw_ops.UnravelIndex`
    ([CVE-2021-37668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37668))
*   Fixes a crash in NMS ops caused by integer conversion to unsigned
    ([CVE-2021-37669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37669))
*   Fixes a heap OOB in `UpperBound` and `LowerBound`
    ([CVE-2021-37670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37670))
*   Fixes an undefined behavior arising from reference binding to nullptr in map
    operations
    ([CVE-2021-37671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37671))
*   Fixes a heap OOB in `SdcaOptimizerV2`
    ([CVE-2021-37672](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37672))
*   Fixes a `CHECK`-fail in `MapStage`
    ([CVE-2021-37673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37673))
*   Fixes a vulnerability arising from incomplete validation in `MaxPoolGrad`
    ([CVE-2021-37674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37674))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    shape inference
    ([CVE-2021-37676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37676))
*   Fixes a division by 0 in most convolution operators
    ([CVE-2021-37675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37675))
*   Fixes vulnerabilities arising from missing validation in shape inference for
    `Dequantize`
    ([CVE-2021-37677](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37677))
*   Fixes an arbitrary code execution due to YAML deserialization
    ([CVE-2021-37678](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37678))
*   Fixes a heap OOB in nested `tf.map_fn` with `RaggedTensor`s
    ([CVE-2021-37679](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37679))
*   Fixes a division by zero in TFLite
    ([CVE-2021-37680](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37680))
*   Fixes an NPE in TFLite
    ([CVE-2021-37681](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37681))
*   Fixes a vulnerability arising from use of unitialized value in TFLite
    ([CVE-2021-37682](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37682))
*   Fixes an FPE in TFLite division operations
    ([CVE-2021-37683](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37683))
*   Fixes an FPE in TFLite pooling operations
    ([CVE-2021-37684](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37684))
*   Fixes an infinite loop in TFLite
    ([CVE-2021-37686](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37686))
*   Fixes a heap OOB in TFLite
    ([CVE-2021-37685](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37685))
*   Fixes a heap OOB in TFLite's `Gather*` implementations
    ([CVE-2021-37687](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37687))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    ([CVE-2021-37688](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37688))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    MLIR optimizations
    ([CVE-2021-37689](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37689))
*   Fixes a FPE in LSH in TFLite
    ([CVE-2021-37691](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37691))
*   Fixes a segfault on strings tensors with mismatched dimensions, arising in
    Go code
    ([CVE-2021-37692](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37692))
*   Fixes a use after free and a potential segfault in shape inference functions
    ([CVE-2021-37690](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37690))
*   Updates `curl` to `7.77.0` to handle
    [CVE-2021-22876](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22876),
    [CVE-2021-22897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22897),
    [CVE-2021-22898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22898),
    and
    [CVE-2021-22901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22901).

# Release 2.3.4

This release introduces several vulnerability fixes:

*   Fixes a heap out of bounds access in sparse reduction operations
    ([CVE-2021-37635](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37635))
*   Fixes a floating point exception in `SparseDenseCwiseDiv`
    ([CVE-2021-37636](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37636))
*   Fixes a null pointer dereference in `CompressElement`
    ([CVE-2021-37637](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37637))
*   Fixes a null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-37638](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37638))
*   Fixes a null pointer dereference and a heap OOB read arising from operations
    restoring tensors
    ([CVE-2021-37639](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37639))
*   Fixes an integer division by 0 in sparse reshaping
    ([CVE-2021-37640](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37640))
*   Fixes a division by 0 in `ResourceScatterDiv`
    ([CVE-2021-37642](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37642))
*   Fixes a heap OOB in `RaggedGather`
    ([CVE-2021-37641](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37641))
*   Fixes a `std::abort` raised from `TensorListReserve`
    ([CVE-2021-37644](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37644))
*   Fixes a null pointer dereference in `MatrixDiagPartOp`
    ([CVE-2021-37643](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37643))
*   Fixes an integer overflow due to conversion to unsigned
    ([CVE-2021-37645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37645))
*   Fixes a bad allocation error in `StringNGrams` caused by integer conversion
    ([CVE-2021-37646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37646))
*   Fixes a null pointer dereference in `SparseTensorSliceDataset`
    ([CVE-2021-37647](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37647))
*   Fixes an incorrect validation of `SaveV2` inputs
    ([CVE-2021-37648](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37648))
*   Fixes a null pointer dereference in `UncompressElement`
    ([CVE-2021-37649](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37649))
*   Fixes a segfault and a heap buffer overflow in
    `{Experimental,}DatasetToTFRecord`
    ([CVE-2021-37650](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37650))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-37651](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37651))
*   Fixes a use after free in boosted trees creation
    ([CVE-2021-37652](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37652))
*   Fixes a division by 0 in `ResourceGather`
    ([CVE-2021-37653](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37653))
*   Fixes a heap OOB and a `CHECK` fail in `ResourceGather`
    ([CVE-2021-37654](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37654))
*   Fixes a heap OOB in `ResourceScatterUpdate`
    ([CVE-2021-37655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37655))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToSparse`
    ([CVE-2021-37656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37656))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixDiagV*` ops
    ([CVE-2021-37657](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37657))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `MatrixSetDiagV*` ops
    ([CVE-2021-37658](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37658))
*   Fixes an undefined behavior arising from reference binding to nullptr and
    heap OOB in binary cwise ops
    ([CVE-2021-37659](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37659))
*   Fixes a division by 0 in inplace operations
    ([CVE-2021-37660](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37660))
*   Fixes a crash caused by integer conversion to unsigned
    ([CVE-2021-37661](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37661))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    boosted trees
    ([CVE-2021-37662](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37662))
*   Fixes a heap OOB in boosted trees
    ([CVE-2021-37664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37664))
*   Fixes vulnerabilities arising from incomplete validation in `QuantizeV2`
    ([CVE-2021-37663](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37663))
*   Fixes vulnerabilities arising from incomplete validation in MKL
    requantization
    ([CVE-2021-37665](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37665))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    `RaggedTensorToVariant`
    ([CVE-2021-37666](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37666))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    unicode encoding
    ([CVE-2021-37667](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37667))
*   Fixes an FPE in `tf.raw_ops.UnravelIndex`
    ([CVE-2021-37668](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37668))
*   Fixes a crash in NMS ops caused by integer conversion to unsigned
    ([CVE-2021-37669](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37669))
*   Fixes a heap OOB in `UpperBound` and `LowerBound`
    ([CVE-2021-37670](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37670))
*   Fixes an undefined behavior arising from reference binding to nullptr in map
    operations
    ([CVE-2021-37671](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37671))
*   Fixes a heap OOB in `SdcaOptimizerV2`
    ([CVE-2021-37672](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37672))
*   Fixes a `CHECK`-fail in `MapStage`
    ([CVE-2021-37673](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37673))
*   Fixes a vulnerability arising from incomplete validation in `MaxPoolGrad`
    ([CVE-2021-37674](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37674))
*   Fixes an undefined behavior arising from reference binding to nullptr in
    shape inference
    ([CVE-2021-37676](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37676))
*   Fixes a division by 0 in most convolution operators
    ([CVE-2021-37675](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37675))
*   Fixes vulnerabilities arising from missing validation in shape inference for
    `Dequantize`
    ([CVE-2021-37677](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37677))
*   Fixes an arbitrary code execution due to YAML deserialization
    ([CVE-2021-37678](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37678))
*   Fixes a heap OOB in nested `tf.map_fn` with `RaggedTensor`s
    ([CVE-2021-37679](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37679))
*   Fixes a division by zero in TFLite
    ([CVE-2021-37680](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37680))
*   Fixes an NPE in TFLite
    ([CVE-2021-37681](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37681))
*   Fixes a vulnerability arising from use of unitialized value in TFLite
    ([CVE-2021-37682](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37682))
*   Fixes an FPE in TFLite division operations
    ([CVE-2021-37683](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37683))
*   Fixes an FPE in TFLite pooling operations
    ([CVE-2021-37684](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37684))
*   Fixes an infinite loop in TFLite
    ([CVE-2021-37686](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37686))
*   Fixes a heap OOB in TFLite
    ([CVE-2021-37685](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37685))
*   Fixes a heap OOB in TFLite's `Gather*` implementations
    ([CVE-2021-37687](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37687))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    ([CVE-2021-37688](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37688))
*   Fixes an undefined behavior arising from null pointer dereference in TFLite
    MLIR optimizations
    ([CVE-2021-37689](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37689))
*   Fixes a FPE in LSH in TFLite
    ([CVE-2021-37691](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37691))
*   Fixes a segfault on strings tensors with mismatched dimensions, arising in
    Go code
    ([CVE-2021-37692](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37692))
*   Fixes a use after free and a potential segfault in shape inference functions
    ([CVE-2021-37690](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-37690))
*   Updates `curl` to `7.77.0` to handle
    [CVE-2021-22876](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22876),
    [CVE-2021-22897](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22897),
    [CVE-2021-22898](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22898),
    and
    [CVE-2021-22901](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-22901).

# Release 2.4.2

This release introduces several vulnerability fixes:

*   Fixes a heap buffer overflow in `RaggedBinCount`
    ([CVE-2021-29512](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29512))
*   Fixes a heap out of bounds write in `RaggedBinCount`
    ([CVE-2021-29514](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29514))
*   Fixes a type confusion during tensor casts which leads to dereferencing null
    pointers
    ([CVE-2021-29513](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29513))
*   Fixes a reference binding to null pointer in `MatrixDiag*` ops
    ([CVE-2021-29515](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29515))
*   Fixes a null pointer dereference via invalid Ragged Tensors
    ([CVE-2021-29516](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29516))
*   Fixes a division by zero in `Conv3D`
    ([CVE-2021-29517](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29517))
*   Fixes vulnerabilities where session operations in eager mode lead to null
    pointer dereferences
    ([CVE-2021-29518](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29518))
*   Fixes a `CHECK`-fail in `SparseCross` caused by type confusion
    ([CVE-2021-29519](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29519))
*   Fixes a segfault in `SparseCountSparseOutput`
    ([CVE-2021-29521](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29521))
*   Fixes a heap buffer overflow in `Conv3DBackprop*`
    ([CVE-2021-29520](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29520))
*   Fixes a division by 0 in `Conv3DBackprop*`
    ([CVE-2021-29522](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29522))
*   Fixes a `CHECK`-fail in `AddManySparseToTensorsMap`
    ([CVE-2021-29523](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29523))
*   Fixes a division by 0 in `Conv2DBackpropFilter`
    ([CVE-2021-29524](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29524))
*   Fixes a division by 0 in `Conv2DBackpropInput`
    ([CVE-2021-29525](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29525))
*   Fixes a division by 0 in `Conv2D`
    ([CVE-2021-29526](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29526))
*   Fixes a division by 0 in `QuantizedConv2D`
    ([CVE-2021-29527](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29527))
*   Fixes a division by 0 in `QuantizedMul`
    ([CVE-2021-29528](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29528))
*   Fixes vulnerabilities caused by invalid validation in
    `SparseMatrixSparseCholesky`
    ([CVE-2021-29530](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29530))
*   Fixes a heap buffer overflow caused by rounding
    ([CVE-2021-29529](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29529))
*   Fixes a `CHECK`-fail in `tf.raw_ops.EncodePng`
    ([CVE-2021-29531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29531))
*   Fixes a heap out of bounds read in `RaggedCross`
    ([CVE-2021-29532](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29532))
*   Fixes a `CHECK`-fail in `DrawBoundingBoxes`
    ([CVE-2021-29533](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29533))
*   Fixes a heap buffer overflow in `QuantizedMul`
    ([CVE-2021-29535](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29535))
*   Fixes a `CHECK`-fail in `SparseConcat`
    ([CVE-2021-29534](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29534))
*   Fixes a heap buffer overflow in `QuantizedResizeBilinear`
    ([CVE-2021-29537](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29537))
*   Fixes a heap buffer overflow in `QuantizedReshape`
    ([CVE-2021-29536](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29536))
*   Fixes a division by zero in `Conv2DBackpropFilter`
    ([CVE-2021-29538](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29538))
*   Fixes a heap buffer overflow in `Conv2DBackpropFilter`
    ([CVE-2021-29540](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29540))
*   Fixes a heap buffer overflow in `StringNGrams`
    ([CVE-2021-29542](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29542))
*   Fixes a null pointer dereference in `StringNGrams`
    ([CVE-2021-29541](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29541))
*   Fixes a `CHECK`-fail in `QuantizeAndDequantizeV4Grad`
    ([CVE-2021-29544](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29544))
*   Fixes a `CHECK`-fail in `CTCGreedyDecoder`
    ([CVE-2021-29543](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29543))
*   Fixes a heap buffer overflow in `SparseTensorToCSRSparseMatrix`
    ([CVE-2021-29545](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29545))
*   Fixes a division by 0 in `QuantizedBiasAdd`
    ([CVE-2021-29546](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29546))
*   Fixes a heap out of bounds in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29547))
*   Fixes a division by 0 in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29548](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29548))
*   Fixes a division by 0 in `QuantizedAdd`
    ([CVE-2021-29549](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29549))
*   Fixes a division by 0 in `FractionalAvgPool`
    ([CVE-2021-29550](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29550))
*   Fixes an OOB read in `MatrixTriangularSolve`
    ([CVE-2021-29551](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29551))
*   Fixes a heap OOB in `QuantizeAndDequantizeV3`
    ([CVE-2021-29553](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29553))
*   Fixes a `CHECK`-failure in `UnsortedSegmentJoin`
    ([CVE-2021-29552](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29552))
*   Fixes a division by 0 in `DenseCountSparseOutput`
    ([CVE-2021-29554](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29554))
*   Fixes a division by 0 in `FusedBatchNorm`
    ([CVE-2021-29555](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29555))
*   Fixes a division by 0 in `SparseMatMul`
    ([CVE-2021-29557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29557))
*   Fixes a division by 0 in `Reverse`
    ([CVE-2021-29556](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29556))
*   Fixes a heap buffer overflow in `SparseSplit`
    ([CVE-2021-29558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29558))
*   Fixes a heap OOB access in unicode ops
    ([CVE-2021-29559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29559))
*   Fixes a heap buffer overflow in `RaggedTensorToTensor`
    ([CVE-2021-29560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29560))
*   Fixes a `CHECK`-fail in `LoadAndRemapMatrix`
    ([CVE-2021-29561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29561))
*   Fixes a `CHECK`-fail in `tf.raw_ops.IRFFT`
    ([CVE-2021-29562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29562))
*   Fixes a `CHECK`-fail in `tf.raw_ops.RFFT`
    ([CVE-2021-29563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29563))
*   Fixes a null pointer dereference in `EditDistance`
    ([CVE-2021-29564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29564))
*   Fixes a null pointer dereference in `SparseFillEmptyRows`
    ([CVE-2021-29565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29565))
*   Fixes a heap OOB access in `Dilation2DBackpropInput`
    ([CVE-2021-29566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29566))
*   Fixes a reference binding to null in `ParameterizedTruncatedNormal`
    ([CVE-2021-29568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29568))
*   Fixes a set of vulnerabilities caused by lack of validation in
    `SparseDenseCwiseMul`
    ([CVE-2021-29567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29567))
*   Fixes a heap out of bounds read in `MaxPoolGradWithArgmax`
    ([CVE-2021-29570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29570))
*   Fixes a heap out of bounds read in `RequantizationRange`
    ([CVE-2021-29569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29569))
*   Fixes a memory corruption in `DrawBoundingBoxesV2`
    ([CVE-2021-29571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29571))
*   Fixes a reference binding to nullptr in `SdcaOptimizer`
    ([CVE-2021-29572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29572))
*   Fixes an overflow and a denial of service in `tf.raw_ops.ReverseSequence`
    ([CVE-2021-29575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29575))
*   Fixes a division by 0 in `MaxPoolGradWithArgmax`
    ([CVE-2021-29573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29573))
*   Fixes an undefined behavior in `MaxPool3DGradGrad`
    ([CVE-2021-29574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29574))
*   Fixes a heap buffer overflow in `MaxPool3DGradGrad`
    ([CVE-2021-29576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29576))
*   Fixes a heap buffer overflow in `AvgPool3DGrad`
    ([CVE-2021-29577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29577))
*   Fixes an undefined behavior and a `CHECK`-fail in `FractionalMaxPoolGrad`
    ([CVE-2021-29580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29580))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-29578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29578))
*   Fixes a heap buffer overflow in `MaxPoolGrad`
    ([CVE-2021-29579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29579))
*   Fixes a segfault in `CTCBeamSearchDecoder`
    ([CVE-2021-29581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29581))
*   Fixes a heap OOB read in `tf.raw_ops.Dequantize`
    ([CVE-2021-29582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29582))
*   Fixes a `CHECK`-fail due to integer overflow
    ([CVE-2021-29584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29584))
*   Fixes a heap buffer overflow and undefined behavior in `FusedBatchNorm`
    ([CVE-2021-29583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29583))
*   Fixes a division by zero in padding computation in TFLite
    ([CVE-2021-29585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29585))
*   Fixes a division by zero in optimized pooling implementations in TFLite
    ([CVE-2021-29586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29586))
*   Fixes a division by zero in TFLite's implementation of `SpaceToDepth`
    ([CVE-2021-29587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29587))
*   Fixes a division by zero in TFLite's implementation of `GatherNd`
    ([CVE-2021-29589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29589))
*   Fixes a division by zero in TFLite's implementation of `TransposeConv`
    ([CVE-2021-29588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29588))
*   Fixes a heap OOB read in TFLite's implementation of `Minimum` or `Maximum`
    ([CVE-2021-29590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29590))
*   Fixes a null pointer dereference in TFLite's `Reshape` operator
    ([CVE-2021-29592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29592))
*   Fixes a stack overflow due to looping TFLite subgraph
    ([CVE-2021-29591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29591))
*   Fixes a division by zero in TFLite's implementation of `DepthToSpace`
    ([CVE-2021-29595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29595))
*   Fixes a division by zero in TFLite's convolution code
    ([CVE-2021-29594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29594))
*   Fixes a division by zero in TFLite's implementation of `EmbeddingLookup`
    ([CVE-2021-29596](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29596))
*   Fixes a division by zero in TFLite's implementation of `BatchToSpaceNd`
    ([CVE-2021-29593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29593))
*   Fixes a division by zero in TFLite's implementation of `SpaceToBatchNd`
    ([CVE-2021-29597](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29597))
*   Fixes a division by zero in TFLite's implementation of `SVDF`
    ([CVE-2021-29598](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29598))
*   Fixes a division by zero in TFLite's implementation of `Split`
    ([CVE-2021-29599](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29599))
*   Fixes a division by zero in TFLite's implementation of `OneHot`
    ([CVE-2021-29600](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29600))
*   Fixes a division by zero in TFLite's implementation of `DepthwiseConv`
    ([CVE-2021-29602](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29602))
*   Fixes a division by zero in TFLite's implementation of hashtable lookup
    ([CVE-2021-29604](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29604))
*   Fixes a integer overflow in TFLite concatentation
    ([CVE-2021-29601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29601))
*   Fixes a integer overflow in TFLite memory allocation
    ([CVE-2021-29605](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29605))
*   Fixes a heap OOB write in TFLite
    ([CVE-2021-29603](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29603))
*   Fixes a heap OOB read in TFLite
    ([CVE-2021-29606](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29606))
*   Fixes a heap OOB and null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-29608](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29608))
*   Fixes vulnerabilities caused by incomplete validation in `SparseAdd`
    ([CVE-2021-29609](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29609))
*   Fixes vulnerabilities caused by incomplete validation in
    `SparseSparseMinimum`
    ([CVE-2021-29607](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29607))
*   Fixes vulnerabilities caused by incomplete validation in `SparseReshape`
    ([CVE-2021-29611](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29611))
*   Fixes vulnerabilities caused by invalid validation in
    `QuantizeAndDequantizeV2`
    ([CVE-2021-29610](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29610))
*   Fixes a heap buffer overflow in `BandedTriangularSolve`
    ([CVE-2021-29612](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29612))
*   Fixes vulnerabilities caused by incomplete validation in
    `tf.raw_ops.CTCLoss`
    ([CVE-2021-29613](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29613))
*   Fixes an interpreter crash from vulnerabilities in `tf.io.decode_raw`
    ([CVE-2021-29614](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29614))
*   Fixes a stack overflow in `ParseAttrValue` with nested tensors
    ([CVE-2021-29615](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29615))
*   Fixes a null dereference in Grappler's `TrySimplify`
    ([CVE-2021-29616](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29616))
*   Fixes a crash in `tf.transpose` with complex inputs
    ([CVE-2021-29618](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29618))
*   Fixes a crash in `tf.strings.substr` due to `CHECK`-fail
    ([CVE-2021-29617](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29617))
*   Fixes a segfault in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-29619](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29619))
*   Fixes a segfault in `tf.raw_ops.ImmutableConst`
    ([CVE-2021-29539](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29539))
*   Updates `curl` to `7.76.0` to handle
    [CVE-2020-8169](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8169),
    [CVE-2020-8177](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8177),
    [CVE-2020-8231](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8231),
    [CVE-2020-8284](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8284),
    [CVE-2020-8285](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8285)
    and
    [CVE-2020-8286](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8286).

# Release 2.3.3

This release introduces several vulnerability fixes:

*   Fixes a heap buffer overflow in `RaggedBinCount`
    ([CVE-2021-29512](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29512))
*   Fixes a heap out of bounds write in `RaggedBinCount`
    ([CVE-2021-29514](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29514))
*   Fixes a type confusion during tensor casts which leads to dereferencing null
    pointers
    ([CVE-2021-29513](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29513))
*   Fixes a reference binding to null pointer in `MatrixDiag*` ops
    ([CVE-2021-29515](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29515))
*   Fixes a null pointer dereference via invalid Ragged Tensors
    ([CVE-2021-29516](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29516))
*   Fixes a division by zero in `Conv3D`
    ([CVE-2021-29517](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29517))
*   Fixes vulnerabilities where session operations in eager mode lead to null
    pointer dereferences
    ([CVE-2021-29518](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29518))
*   Fixes a `CHECK`-fail in `SparseCross` caused by type confusion
    ([CVE-2021-29519](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29519))
*   Fixes a segfault in `SparseCountSparseOutput`
    ([CVE-2021-29521](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29521))
*   Fixes a heap buffer overflow in `Conv3DBackprop*`
    ([CVE-2021-29520](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29520))
*   Fixes a division by 0 in `Conv3DBackprop*`
    ([CVE-2021-29522](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29522))
*   Fixes a `CHECK`-fail in `AddManySparseToTensorsMap`
    ([CVE-2021-29523](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29523))
*   Fixes a division by 0 in `Conv2DBackpropFilter`
    ([CVE-2021-29524](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29524))
*   Fixes a division by 0 in `Conv2DBackpropInput`
    ([CVE-2021-29525](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29525))
*   Fixes a division by 0 in `Conv2D`
    ([CVE-2021-29526](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29526))
*   Fixes a division by 0 in `QuantizedConv2D`
    ([CVE-2021-29527](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29527))
*   Fixes a division by 0 in `QuantizedMul`
    ([CVE-2021-29528](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29528))
*   Fixes vulnerabilities caused by invalid validation in
    `SparseMatrixSparseCholesky`
    ([CVE-2021-29530](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29530))
*   Fixes a heap buffer overflow caused by rounding
    ([CVE-2021-29529](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29529))
*   Fixes a `CHECK`-fail in `tf.raw_ops.EncodePng`
    ([CVE-2021-29531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29531))
*   Fixes a heap out of bounds read in `RaggedCross`
    ([CVE-2021-29532](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29532))
*   Fixes a `CHECK`-fail in `DrawBoundingBoxes`
    ([CVE-2021-29533](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29533))
*   Fixes a heap buffer overflow in `QuantizedMul`
    ([CVE-2021-29535](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29535))
*   Fixes a `CHECK`-fail in `SparseConcat`
    ([CVE-2021-29534](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29534))
*   Fixes a heap buffer overflow in `QuantizedResizeBilinear`
    ([CVE-2021-29537](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29537))
*   Fixes a heap buffer overflow in `QuantizedReshape`
    ([CVE-2021-29536](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29536))
*   Fixes a division by zero in `Conv2DBackpropFilter`
    ([CVE-2021-29538](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29538))
*   Fixes a heap buffer overflow in `Conv2DBackpropFilter`
    ([CVE-2021-29540](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29540))
*   Fixes a heap buffer overflow in `StringNGrams`
    ([CVE-2021-29542](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29542))
*   Fixes a null pointer dereference in `StringNGrams`
    ([CVE-2021-29541](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29541))
*   Fixes a `CHECK`-fail in `QuantizeAndDequantizeV4Grad`
    ([CVE-2021-29544](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29544))
*   Fixes a `CHECK`-fail in `CTCGreedyDecoder`
    ([CVE-2021-29543](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29543))
*   Fixes a heap buffer overflow in `SparseTensorToCSRSparseMatrix`
    ([CVE-2021-29545](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29545))
*   Fixes a division by 0 in `QuantizedBiasAdd`
    ([CVE-2021-29546](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29546))
*   Fixes a heap out of bounds in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29547))
*   Fixes a division by 0 in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29548](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29548))
*   Fixes a division by 0 in `QuantizedAdd`
    ([CVE-2021-29549](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29549))
*   Fixes a division by 0 in `FractionalAvgPool`
    ([CVE-2021-29550](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29550))
*   Fixes an OOB read in `MatrixTriangularSolve`
    ([CVE-2021-29551](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29551))
*   Fixes a heap OOB in `QuantizeAndDequantizeV3`
    ([CVE-2021-29553](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29553))
*   Fixes a `CHECK`-failure in `UnsortedSegmentJoin`
    ([CVE-2021-29552](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29552))
*   Fixes a division by 0 in `DenseCountSparseOutput`
    ([CVE-2021-29554](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29554))
*   Fixes a division by 0 in `FusedBatchNorm`
    ([CVE-2021-29555](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29555))
*   Fixes a division by 0 in `SparseMatMul`
    ([CVE-2021-29557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29557))
*   Fixes a division by 0 in `Reverse`
    ([CVE-2021-29556](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29556))
*   Fixes a heap buffer overflow in `SparseSplit`
    ([CVE-2021-29558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29558))
*   Fixes a heap OOB access in unicode ops
    ([CVE-2021-29559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29559))
*   Fixes a heap buffer overflow in `RaggedTensorToTensor`
    ([CVE-2021-29560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29560))
*   Fixes a `CHECK`-fail in `LoadAndRemapMatrix`
    ([CVE-2021-29561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29561))
*   Fixes a `CHECK`-fail in `tf.raw_ops.IRFFT`
    ([CVE-2021-29562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29562))
*   Fixes a `CHECK`-fail in `tf.raw_ops.RFFT`
    ([CVE-2021-29563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29563))
*   Fixes a null pointer dereference in `EditDistance`
    ([CVE-2021-29564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29564))
*   Fixes a null pointer dereference in `SparseFillEmptyRows`
    ([CVE-2021-29565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29565))
*   Fixes a heap OOB access in `Dilation2DBackpropInput`
    ([CVE-2021-29566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29566))
*   Fixes a reference binding to null in `ParameterizedTruncatedNormal`
    ([CVE-2021-29568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29568))
*   Fixes a set of vulnerabilities caused by lack of validation in
    `SparseDenseCwiseMul`
    ([CVE-2021-29567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29567))
*   Fixes a heap out of bounds read in `MaxPoolGradWithArgmax`
    ([CVE-2021-29570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29570))
*   Fixes a heap out of bounds read in `RequantizationRange`
    ([CVE-2021-29569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29569))
*   Fixes a memory corruption in `DrawBoundingBoxesV2`
    ([CVE-2021-29571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29571))
*   Fixes a reference binding to nullptr in `SdcaOptimizer`
    ([CVE-2021-29572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29572))
*   Fixes an overflow and a denial of service in `tf.raw_ops.ReverseSequence`
    ([CVE-2021-29575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29575))
*   Fixes a division by 0 in `MaxPoolGradWithArgmax`
    ([CVE-2021-29573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29573))
*   Fixes an undefined behavior in `MaxPool3DGradGrad`
    ([CVE-2021-29574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29574))
*   Fixes a heap buffer overflow in `MaxPool3DGradGrad`
    ([CVE-2021-29576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29576))
*   Fixes a heap buffer overflow in `AvgPool3DGrad`
    ([CVE-2021-29577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29577))
*   Fixes an undefined behavior and a `CHECK`-fail in `FractionalMaxPoolGrad`
    ([CVE-2021-29580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29580))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-29578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29578))
*   Fixes a heap buffer overflow in `MaxPoolGrad`
    ([CVE-2021-29579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29579))
*   Fixes a segfault in `CTCBeamSearchDecoder`
    ([CVE-2021-29581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29581))
*   Fixes a heap OOB read in `tf.raw_ops.Dequantize`
    ([CVE-2021-29582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29582))
*   Fixes a `CHECK`-fail due to integer overflow
    ([CVE-2021-29584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29584))
*   Fixes a heap buffer overflow and undefined behavior in `FusedBatchNorm`
    ([CVE-2021-29583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29583))
*   Fixes a division by zero in padding computation in TFLite
    ([CVE-2021-29585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29585))
*   Fixes a division by zero in optimized pooling implementations in TFLite
    ([CVE-2021-29586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29586))
*   Fixes a division by zero in TFLite's implementation of `SpaceToDepth`
    ([CVE-2021-29587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29587))
*   Fixes a division by zero in TFLite's implementation of `GatherNd`
    ([CVE-2021-29589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29589))
*   Fixes a division by zero in TFLite's implementation of `TransposeConv`
    ([CVE-2021-29588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29588))
*   Fixes a heap OOB read in TFLite's implementation of `Minimum` or `Maximum`
    ([CVE-2021-29590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29590))
*   Fixes a null pointer dereference in TFLite's `Reshape` operator
    ([CVE-2021-29592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29592))
*   Fixes a stack overflow due to looping TFLite subgraph
    ([CVE-2021-29591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29591))
*   Fixes a division by zero in TFLite's implementation of `DepthToSpace`
    ([CVE-2021-29595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29595))
*   Fixes a division by zero in TFLite's convolution code
    ([CVE-2021-29594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29594))
*   Fixes a division by zero in TFLite's implementation of `EmbeddingLookup`
    ([CVE-2021-29596](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29596))
*   Fixes a division by zero in TFLite's implementation of `BatchToSpaceNd`
    ([CVE-2021-29593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29593))
*   Fixes a division by zero in TFLite's implementation of `SpaceToBatchNd`
    ([CVE-2021-29597](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29597))
*   Fixes a division by zero in TFLite's implementation of `SVDF`
    ([CVE-2021-29598](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29598))
*   Fixes a division by zero in TFLite's implementation of `Split`
    ([CVE-2021-29599](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29599))
*   Fixes a division by zero in TFLite's implementation of `OneHot`
    ([CVE-2021-29600](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29600))
*   Fixes a division by zero in TFLite's implementation of `DepthwiseConv`
    ([CVE-2021-29602](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29602))
*   Fixes a division by zero in TFLite's implementation of hashtable lookup
    ([CVE-2021-29604](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29604))
*   Fixes a integer overflow in TFLite concatentation
    ([CVE-2021-29601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29601))
*   Fixes a integer overflow in TFLite memory allocation
    ([CVE-2021-29605](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29605))
*   Fixes a heap OOB write in TFLite
    ([CVE-2021-29603](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29603))
*   Fixes a heap OOB read in TFLite
    ([CVE-2021-29606](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29606))
*   Fixes a heap OOB and null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-29608](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29608))
*   Fixes vulnerabilities caused by incomplete validation in `SparseAdd`
    ([CVE-2021-29609](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29609))
*   Fixes vulnerabilities caused by incomplete validation in
    `SparseSparseMinimum`
    ([CVE-2021-29607](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29607))
*   Fixes vulnerabilities caused by incomplete validation in `SparseReshape`
    ([CVE-2021-29611](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29611))
*   Fixes vulnerabilities caused by invalid validation in
    `QuantizeAndDequantizeV2`
    ([CVE-2021-29610](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29610))
*   Fixes a heap buffer overflow in `BandedTriangularSolve`
    ([CVE-2021-29612](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29612))
*   Fixes vulnerabilities caused by incomplete validation in
    `tf.raw_ops.CTCLoss`
    ([CVE-2021-29613](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29613))
*   Fixes an interpreter crash from vulnerabilities in `tf.io.decode_raw`
    ([CVE-2021-29614](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29614))
*   Fixes a stack overflow in `ParseAttrValue` with nested tensors
    ([CVE-2021-29615](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29615))
*   Fixes a null dereference in Grappler's `TrySimplify`
    ([CVE-2021-29616](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29616))
*   Fixes a crash in `tf.transpose` with complex inputs
    ([CVE-2021-29618](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29618))
*   Fixes a crash in `tf.strings.substr` due to `CHECK`-fail
    ([CVE-2021-29617](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29617))
*   Fixes a segfault in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-29619](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29619))
*   Fixes a segfault in `tf.raw_ops.ImmutableConst`
    ([CVE-2021-29539](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29539))
*   Updates `curl` to `7.76.0` to handle
    [CVE-2020-8169](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8169),
    [CVE-2020-8177](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8177),
    [CVE-2020-8231](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8231),
    [CVE-2020-8284](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8284),
    [CVE-2020-8285](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8285)
    and
    [CVE-2020-8286](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8286).

# Release 2.2.3

This release introduces several vulnerability fixes:

*   Fixes a heap buffer overflow in `RaggedBinCount`
    ([CVE-2021-29512](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29512))
*   Fixes a heap out of bounds write in `RaggedBinCount`
    ([CVE-2021-29514](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29514))
*   Fixes a type confusion during tensor casts which leads to dereferencing null
    pointers
    ([CVE-2021-29513](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29513))
*   Fixes a reference binding to null pointer in `MatrixDiag*` ops
    ([CVE-2021-29515](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29515))
*   Fixes a null pointer dereference via invalid Ragged Tensors
    ([CVE-2021-29516](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29516))
*   Fixes a division by zero in `Conv3D`
    ([CVE-2021-29517](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29517))
*   Fixes vulnerabilities where session operations in eager mode lead to null
    pointer dereferences
    ([CVE-2021-29518](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29518))
*   Fixes a `CHECK`-fail in `SparseCross` caused by type confusion
    ([CVE-2021-29519](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29519))
*   Fixes a segfault in `SparseCountSparseOutput`
    ([CVE-2021-29521](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29521))
*   Fixes a heap buffer overflow in `Conv3DBackprop*`
    ([CVE-2021-29520](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29520))
*   Fixes a division by 0 in `Conv3DBackprop*`
    ([CVE-2021-29522](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29522))
*   Fixes a `CHECK`-fail in `AddManySparseToTensorsMap`
    ([CVE-2021-29523](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29523))
*   Fixes a division by 0 in `Conv2DBackpropFilter`
    ([CVE-2021-29524](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29524))
*   Fixes a division by 0 in `Conv2DBackpropInput`
    ([CVE-2021-29525](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29525))
*   Fixes a division by 0 in `Conv2D`
    ([CVE-2021-29526](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29526))
*   Fixes a division by 0 in `QuantizedConv2D`
    ([CVE-2021-29527](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29527))
*   Fixes a division by 0 in `QuantizedMul`
    ([CVE-2021-29528](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29528))
*   Fixes vulnerabilities caused by invalid validation in
    `SparseMatrixSparseCholesky`
    ([CVE-2021-29530](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29530))
*   Fixes a heap buffer overflow caused by rounding
    ([CVE-2021-29529](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29529))
*   Fixes a `CHECK`-fail in `tf.raw_ops.EncodePng`
    ([CVE-2021-29531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29531))
*   Fixes a heap out of bounds read in `RaggedCross`
    ([CVE-2021-29532](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29532))
*   Fixes a `CHECK`-fail in `DrawBoundingBoxes`
    ([CVE-2021-29533](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29533))
*   Fixes a heap buffer overflow in `QuantizedMul`
    ([CVE-2021-29535](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29535))
*   Fixes a `CHECK`-fail in `SparseConcat`
    ([CVE-2021-29534](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29534))
*   Fixes a heap buffer overflow in `QuantizedResizeBilinear`
    ([CVE-2021-29537](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29537))
*   Fixes a heap buffer overflow in `QuantizedReshape`
    ([CVE-2021-29536](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29536))
*   Fixes a division by zero in `Conv2DBackpropFilter`
    ([CVE-2021-29538](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29538))
*   Fixes a heap buffer overflow in `Conv2DBackpropFilter`
    ([CVE-2021-29540](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29540))
*   Fixes a heap buffer overflow in `StringNGrams`
    ([CVE-2021-29542](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29542))
*   Fixes a null pointer dereference in `StringNGrams`
    ([CVE-2021-29541](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29541))
*   Fixes a `CHECK`-fail in `QuantizeAndDequantizeV4Grad`
    ([CVE-2021-29544](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29544))
*   Fixes a `CHECK`-fail in `CTCGreedyDecoder`
    ([CVE-2021-29543](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29543))
*   Fixes a heap buffer overflow in `SparseTensorToCSRSparseMatrix`
    ([CVE-2021-29545](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29545))
*   Fixes a division by 0 in `QuantizedBiasAdd`
    ([CVE-2021-29546](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29546))
*   Fixes a heap out of bounds in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29547))
*   Fixes a division by 0 in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29548](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29548))
*   Fixes a division by 0 in `QuantizedAdd`
    ([CVE-2021-29549](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29549))
*   Fixes a division by 0 in `FractionalAvgPool`
    ([CVE-2021-29550](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29550))
*   Fixes an OOB read in `MatrixTriangularSolve`
    ([CVE-2021-29551](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29551))
*   Fixes a heap OOB in `QuantizeAndDequantizeV3`
    ([CVE-2021-29553](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29553))
*   Fixes a `CHECK`-failure in `UnsortedSegmentJoin`
    ([CVE-2021-29552](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29552))
*   Fixes a division by 0 in `DenseCountSparseOutput`
    ([CVE-2021-29554](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29554))
*   Fixes a division by 0 in `FusedBatchNorm`
    ([CVE-2021-29555](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29555))
*   Fixes a division by 0 in `SparseMatMul`
    ([CVE-2021-29557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29557))
*   Fixes a division by 0 in `Reverse`
    ([CVE-2021-29556](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29556))
*   Fixes a heap buffer overflow in `SparseSplit`
    ([CVE-2021-29558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29558))
*   Fixes a heap OOB access in unicode ops
    ([CVE-2021-29559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29559))
*   Fixes a heap buffer overflow in `RaggedTensorToTensor`
    ([CVE-2021-29560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29560))
*   Fixes a `CHECK`-fail in `LoadAndRemapMatrix`
    ([CVE-2021-29561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29561))
*   Fixes a `CHECK`-fail in `tf.raw_ops.IRFFT`
    ([CVE-2021-29562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29562))
*   Fixes a `CHECK`-fail in `tf.raw_ops.RFFT`
    ([CVE-2021-29563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29563))
*   Fixes a null pointer dereference in `EditDistance`
    ([CVE-2021-29564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29564))
*   Fixes a null pointer dereference in `SparseFillEmptyRows`
    ([CVE-2021-29565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29565))
*   Fixes a heap OOB access in `Dilation2DBackpropInput`
    ([CVE-2021-29566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29566))
*   Fixes a reference binding to null in `ParameterizedTruncatedNormal`
    ([CVE-2021-29568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29568))
*   Fixes a set of vulnerabilities caused by lack of validation in
    `SparseDenseCwiseMul`
    ([CVE-2021-29567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29567))
*   Fixes a heap out of bounds read in `MaxPoolGradWithArgmax`
    ([CVE-2021-29570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29570))
*   Fixes a heap out of bounds read in `RequantizationRange`
    ([CVE-2021-29569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29569))
*   Fixes a memory corruption in `DrawBoundingBoxesV2`
    ([CVE-2021-29571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29571))
*   Fixes a reference binding to nullptr in `SdcaOptimizer`
    ([CVE-2021-29572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29572))
*   Fixes an overflow and a denial of service in `tf.raw_ops.ReverseSequence`
    ([CVE-2021-29575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29575))
*   Fixes a division by 0 in `MaxPoolGradWithArgmax`
    ([CVE-2021-29573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29573))
*   Fixes an undefined behavior in `MaxPool3DGradGrad`
    ([CVE-2021-29574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29574))
*   Fixes a heap buffer overflow in `MaxPool3DGradGrad`
    ([CVE-2021-29576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29576))
*   Fixes a heap buffer overflow in `AvgPool3DGrad`
    ([CVE-2021-29577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29577))
*   Fixes an undefined behavior and a `CHECK`-fail in `FractionalMaxPoolGrad`
    ([CVE-2021-29580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29580))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-29578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29578))
*   Fixes a heap buffer overflow in `MaxPoolGrad`
    ([CVE-2021-29579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29579))
*   Fixes a segfault in `CTCBeamSearchDecoder`
    ([CVE-2021-29581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29581))
*   Fixes a heap OOB read in `tf.raw_ops.Dequantize`
    ([CVE-2021-29582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29582))
*   Fixes a `CHECK`-fail due to integer overflow
    ([CVE-2021-29584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29584))
*   Fixes a heap buffer overflow and undefined behavior in `FusedBatchNorm`
    ([CVE-2021-29583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29583))
*   Fixes a division by zero in padding computation in TFLite
    ([CVE-2021-29585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29585))
*   Fixes a division by zero in optimized pooling implementations in TFLite
    ([CVE-2021-29586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29586))
*   Fixes a division by zero in TFLite's implementation of `SpaceToDepth`
    ([CVE-2021-29587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29587))
*   Fixes a division by zero in TFLite's implementation of `GatherNd`
    ([CVE-2021-29589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29589))
*   Fixes a division by zero in TFLite's implementation of `TransposeConv`
    ([CVE-2021-29588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29588))
*   Fixes a heap OOB read in TFLite's implementation of `Minimum` or `Maximum`
    ([CVE-2021-29590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29590))
*   Fixes a null pointer dereference in TFLite's `Reshape` operator
    ([CVE-2021-29592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29592))
*   Fixes a stack overflow due to looping TFLite subgraph
    ([CVE-2021-29591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29591))
*   Fixes a division by zero in TFLite's implementation of `DepthToSpace`
    ([CVE-2021-29595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29595))
*   Fixes a division by zero in TFLite's convolution code
    ([CVE-2021-29594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29594))
*   Fixes a division by zero in TFLite's implementation of `EmbeddingLookup`
    ([CVE-2021-29596](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29596))
*   Fixes a division by zero in TFLite's implementation of `BatchToSpaceNd`
    ([CVE-2021-29593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29593))
*   Fixes a division by zero in TFLite's implementation of `SpaceToBatchNd`
    ([CVE-2021-29597](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29597))
*   Fixes a division by zero in TFLite's implementation of `SVDF`
    ([CVE-2021-29598](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29598))
*   Fixes a division by zero in TFLite's implementation of `Split`
    ([CVE-2021-29599](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29599))
*   Fixes a division by zero in TFLite's implementation of `OneHot`
    ([CVE-2021-29600](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29600))
*   Fixes a division by zero in TFLite's implementation of `DepthwiseConv`
    ([CVE-2021-29602](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29602))
*   Fixes a division by zero in TFLite's implementation of hashtable lookup
    ([CVE-2021-29604](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29604))
*   Fixes a integer overflow in TFLite concatentation
    ([CVE-2021-29601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29601))
*   Fixes a integer overflow in TFLite memory allocation
    ([CVE-2021-29605](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29605))
*   Fixes a heap OOB write in TFLite
    ([CVE-2021-29603](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29603))
*   Fixes a heap OOB read in TFLite
    ([CVE-2021-29606](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29606))
*   Fixes a heap OOB and null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-29608](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29608))
*   Fixes vulnerabilities caused by incomplete validation in `SparseAdd`
    ([CVE-2021-29609](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29609))
*   Fixes vulnerabilities caused by incomplete validation in
    `SparseSparseMinimum`
    ([CVE-2021-29607](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29607))
*   Fixes vulnerabilities caused by incomplete validation in `SparseReshape`
    ([CVE-2021-29611](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29611))
*   Fixes vulnerabilities caused by invalid validation in
    `QuantizeAndDequantizeV2`
    ([CVE-2021-29610](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29610))
*   Fixes a heap buffer overflow in `BandedTriangularSolve`
    ([CVE-2021-29612](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29612))
*   Fixes vulnerabilities caused by incomplete validation in
    `tf.raw_ops.CTCLoss`
    ([CVE-2021-29613](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29613))
*   Fixes an interpreter crash from vulnerabilities in `tf.io.decode_raw`
    ([CVE-2021-29614](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29614))
*   Fixes a stack overflow in `ParseAttrValue` with nested tensors
    ([CVE-2021-29615](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29615))
*   Fixes a null dereference in Grappler's `TrySimplify`
    ([CVE-2021-29616](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29616))
*   Fixes a crash in `tf.transpose` with complex inputs
    ([CVE-2021-29618](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29618))
*   Fixes a crash in `tf.strings.substr` due to `CHECK`-fail
    ([CVE-2021-29617](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29617))
*   Fixes a segfault in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-29619](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29619))
*   Fixes a segfault in `tf.raw_ops.ImmutableConst`
    ([CVE-2021-29539](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29539))
*   Updates `curl` to `7.76.0` to handle
    [CVE-2020-8169](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8169),
    [CVE-2020-8177](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8177),
    [CVE-2020-8231](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8231),
    [CVE-2020-8284](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8284),
    [CVE-2020-8285](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8285)
    and
    [CVE-2020-8286](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8286).

# Release 2.1.4

This release introduces several vulnerability fixes:

*   Fixes a heap buffer overflow in `RaggedBinCount`
    ([CVE-2021-29512](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29512))
*   Fixes a heap out of bounds write in `RaggedBinCount`
    ([CVE-2021-29514](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29514))
*   Fixes a type confusion during tensor casts which leads to dereferencing null
    pointers
    ([CVE-2021-29513](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29513))
*   Fixes a reference binding to null pointer in `MatrixDiag*` ops
    ([CVE-2021-29515](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29515))
*   Fixes a null pointer dereference via invalid Ragged Tensors
    ([CVE-2021-29516](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29516))
*   Fixes a division by zero in `Conv3D`
    ([CVE-2021-29517](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29517))
*   Fixes vulnerabilities where session operations in eager mode lead to null
    pointer dereferences
    ([CVE-2021-29518](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29518))
*   Fixes a `CHECK`-fail in `SparseCross` caused by type confusion
    ([CVE-2021-29519](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29519))
*   Fixes a segfault in `SparseCountSparseOutput`
    ([CVE-2021-29521](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29521))
*   Fixes a heap buffer overflow in `Conv3DBackprop*`
    ([CVE-2021-29520](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29520))
*   Fixes a division by 0 in `Conv3DBackprop*`
    ([CVE-2021-29522](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29522))
*   Fixes a `CHECK`-fail in `AddManySparseToTensorsMap`
    ([CVE-2021-29523](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29523))
*   Fixes a division by 0 in `Conv2DBackpropFilter`
    ([CVE-2021-29524](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29524))
*   Fixes a division by 0 in `Conv2DBackpropInput`
    ([CVE-2021-29525](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29525))
*   Fixes a division by 0 in `Conv2D`
    ([CVE-2021-29526](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29526))
*   Fixes a division by 0 in `QuantizedConv2D`
    ([CVE-2021-29527](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29527))
*   Fixes a division by 0 in `QuantizedMul`
    ([CVE-2021-29528](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29528))
*   Fixes vulnerabilities caused by invalid validation in
    `SparseMatrixSparseCholesky`
    ([CVE-2021-29530](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29530))
*   Fixes a heap buffer overflow caused by rounding
    ([CVE-2021-29529](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29529))
*   Fixes a `CHECK`-fail in `tf.raw_ops.EncodePng`
    ([CVE-2021-29531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29531))
*   Fixes a heap out of bounds read in `RaggedCross`
    ([CVE-2021-29532](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29532))
*   Fixes a `CHECK`-fail in `DrawBoundingBoxes`
    ([CVE-2021-29533](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29533))
*   Fixes a heap buffer overflow in `QuantizedMul`
    ([CVE-2021-29535](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29535))
*   Fixes a `CHECK`-fail in `SparseConcat`
    ([CVE-2021-29534](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29534))
*   Fixes a heap buffer overflow in `QuantizedResizeBilinear`
    ([CVE-2021-29537](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29537))
*   Fixes a heap buffer overflow in `QuantizedReshape`
    ([CVE-2021-29536](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29536))
*   Fixes a division by zero in `Conv2DBackpropFilter`
    ([CVE-2021-29538](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29538))
*   Fixes a heap buffer overflow in `Conv2DBackpropFilter`
    ([CVE-2021-29540](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29540))
*   Fixes a heap buffer overflow in `StringNGrams`
    ([CVE-2021-29542](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29542))
*   Fixes a null pointer dereference in `StringNGrams`
    ([CVE-2021-29541](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29541))
*   Fixes a `CHECK`-fail in `QuantizeAndDequantizeV4Grad`
    ([CVE-2021-29544](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29544))
*   Fixes a `CHECK`-fail in `CTCGreedyDecoder`
    ([CVE-2021-29543](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29543))
*   Fixes a heap buffer overflow in `SparseTensorToCSRSparseMatrix`
    ([CVE-2021-29545](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29545))
*   Fixes a division by 0 in `QuantizedBiasAdd`
    ([CVE-2021-29546](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29546))
*   Fixes a heap out of bounds in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29547))
*   Fixes a division by 0 in `QuantizedBatchNormWithGlobalNormalization`
    ([CVE-2021-29548](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29548))
*   Fixes a division by 0 in `QuantizedAdd`
    ([CVE-2021-29549](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29549))
*   Fixes a division by 0 in `FractionalAvgPool`
    ([CVE-2021-29550](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29550))
*   Fixes an OOB read in `MatrixTriangularSolve`
    ([CVE-2021-29551](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29551))
*   Fixes a heap OOB in `QuantizeAndDequantizeV3`
    ([CVE-2021-29553](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29553))
*   Fixes a `CHECK`-failure in `UnsortedSegmentJoin`
    ([CVE-2021-29552](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29552))
*   Fixes a division by 0 in `DenseCountSparseOutput`
    ([CVE-2021-29554](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29554))
*   Fixes a division by 0 in `FusedBatchNorm`
    ([CVE-2021-29555](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29555))
*   Fixes a division by 0 in `SparseMatMul`
    ([CVE-2021-29557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29557))
*   Fixes a division by 0 in `Reverse`
    ([CVE-2021-29556](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29556))
*   Fixes a heap buffer overflow in `SparseSplit`
    ([CVE-2021-29558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29558))
*   Fixes a heap OOB access in unicode ops
    ([CVE-2021-29559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29559))
*   Fixes a heap buffer overflow in `RaggedTensorToTensor`
    ([CVE-2021-29560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29560))
*   Fixes a `CHECK`-fail in `LoadAndRemapMatrix`
    ([CVE-2021-29561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29561))
*   Fixes a `CHECK`-fail in `tf.raw_ops.IRFFT`
    ([CVE-2021-29562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29562))
*   Fixes a `CHECK`-fail in `tf.raw_ops.RFFT`
    ([CVE-2021-29563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29563))
*   Fixes a null pointer dereference in `EditDistance`
    ([CVE-2021-29564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29564))
*   Fixes a null pointer dereference in `SparseFillEmptyRows`
    ([CVE-2021-29565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29565))
*   Fixes a heap OOB access in `Dilation2DBackpropInput`
    ([CVE-2021-29566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29566))
*   Fixes a reference binding to null in `ParameterizedTruncatedNormal`
    ([CVE-2021-29568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29568))
*   Fixes a set of vulnerabilities caused by lack of validation in
    `SparseDenseCwiseMul`
    ([CVE-2021-29567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29567))
*   Fixes a heap out of bounds read in `MaxPoolGradWithArgmax`
    ([CVE-2021-29570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29570))
*   Fixes a heap out of bounds read in `RequantizationRange`
    ([CVE-2021-29569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29569))
*   Fixes a memory corruption in `DrawBoundingBoxesV2`
    ([CVE-2021-29571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29571))
*   Fixes a reference binding to nullptr in `SdcaOptimizer`
    ([CVE-2021-29572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29572))
*   Fixes an overflow and a denial of service in `tf.raw_ops.ReverseSequence`
    ([CVE-2021-29575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29575))
*   Fixes a division by 0 in `MaxPoolGradWithArgmax`
    ([CVE-2021-29573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29573))
*   Fixes an undefined behavior in `MaxPool3DGradGrad`
    ([CVE-2021-29574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29574))
*   Fixes a heap buffer overflow in `MaxPool3DGradGrad`
    ([CVE-2021-29576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29576))
*   Fixes a heap buffer overflow in `AvgPool3DGrad`
    ([CVE-2021-29577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29577))
*   Fixes an undefined behavior and a `CHECK`-fail in `FractionalMaxPoolGrad`
    ([CVE-2021-29580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29580))
*   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
    ([CVE-2021-29578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29578))
*   Fixes a heap buffer overflow in `MaxPoolGrad`
    ([CVE-2021-29579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29579))
*   Fixes a segfault in `CTCBeamSearchDecoder`
    ([CVE-2021-29581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29581))
*   Fixes a heap OOB read in `tf.raw_ops.Dequantize`
    ([CVE-2021-29582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29582))
*   Fixes a `CHECK`-fail due to integer overflow
    ([CVE-2021-29584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29584))
*   Fixes a heap buffer overflow and undefined behavior in `FusedBatchNorm`
    ([CVE-2021-29583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29583))
*   Fixes a division by zero in padding computation in TFLite
    ([CVE-2021-29585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29585))
*   Fixes a division by zero in optimized pooling implementations in TFLite
    ([CVE-2021-29586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29586))
*   Fixes a division by zero in TFLite's implementation of `SpaceToDepth`
    ([CVE-2021-29587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29587))
*   Fixes a division by zero in TFLite's implementation of `GatherNd`
    ([CVE-2021-29589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29589))
*   Fixes a division by zero in TFLite's implementation of `TransposeConv`
    ([CVE-2021-29588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29588))
*   Fixes a heap OOB read in TFLite's implementation of `Minimum` or `Maximum`
    ([CVE-2021-29590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29590))
*   Fixes a null pointer dereference in TFLite's `Reshape` operator
    ([CVE-2021-29592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29592))
*   Fixes a stack overflow due to looping TFLite subgraph
    ([CVE-2021-29591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29591))
*   Fixes a division by zero in TFLite's implementation of `DepthToSpace`
    ([CVE-2021-29595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29595))
*   Fixes a division by zero in TFLite's convolution code
    ([CVE-2021-29594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29594))
*   Fixes a division by zero in TFLite's implementation of `EmbeddingLookup`
    ([CVE-2021-29596](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29596))
*   Fixes a division by zero in TFLite's implementation of `BatchToSpaceNd`
    ([CVE-2021-29593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29593))
*   Fixes a division by zero in TFLite's implementation of `SpaceToBatchNd`
    ([CVE-2021-29597](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29597))
*   Fixes a division by zero in TFLite's implementation of `SVDF`
    ([CVE-2021-29598](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29598))
*   Fixes a division by zero in TFLite's implementation of `Split`
    ([CVE-2021-29599](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29599))
*   Fixes a division by zero in TFLite's implementation of `OneHot`
    ([CVE-2021-29600](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29600))
*   Fixes a division by zero in TFLite's implementation of `DepthwiseConv`
    ([CVE-2021-29602](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29602))
*   Fixes a division by zero in TFLite's implementation of hashtable lookup
    ([CVE-2021-29604](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29604))
*   Fixes a integer overflow in TFLite concatentation
    ([CVE-2021-29601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29601))
*   Fixes a integer overflow in TFLite memory allocation
    ([CVE-2021-29605](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29605))
*   Fixes a heap OOB write in TFLite
    ([CVE-2021-29603](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29603))
*   Fixes a heap OOB read in TFLite
    ([CVE-2021-29606](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29606))
*   Fixes a heap OOB and null pointer dereference in `RaggedTensorToTensor`
    ([CVE-2021-29608](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29608))
*   Fixes vulnerabilities caused by incomplete validation in `SparseAdd`
    ([CVE-2021-29609](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29609))
*   Fixes vulnerabilities caused by incomplete validation in
    `SparseSparseMinimum`
    ([CVE-2021-29607](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29607))
*   Fixes vulnerabilities caused by incomplete validation in `SparseReshape`
    ([CVE-2021-29611](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29611))
*   Fixes vulnerabilities caused by invalid validation in
    `QuantizeAndDequantizeV2`
    ([CVE-2021-29610](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29610))
*   Fixes a heap buffer overflow in `BandedTriangularSolve`
    ([CVE-2021-29612](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29612))
*   Fixes vulnerabilities caused by incomplete validation in
    `tf.raw_ops.CTCLoss`
    ([CVE-2021-29613](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29613))
*   Fixes an interpreter crash from vulnerabilities in `tf.io.decode_raw`
    ([CVE-2021-29614](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29614))
*   Fixes a stack overflow in `ParseAttrValue` with nested tensors
    ([CVE-2021-29615](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29615))
*   Fixes a null dereference in Grappler's `TrySimplify`
    ([CVE-2021-29616](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29616))
*   Fixes a crash in `tf.transpose` with complex inputs
    ([CVE-2021-29618](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29618))
*   Fixes a crash in `tf.strings.substr` due to `CHECK`-fail
    ([CVE-2021-29617](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29617))
*   Fixes a segfault in `tf.raw_ops.SparseCountSparseOutput`
    ([CVE-2021-29619](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29619))
*   Fixes a segfault in `tf.raw_ops.ImmutableConst`
    ([CVE-2021-29539](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29539))
*   Updates `curl` to `7.76.0` to handle
    [CVE-2020-8169](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8169),
    [CVE-2020-8177](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8177),
    [CVE-2020-8231](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8231),
    [CVE-2020-8284](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8284),
    [CVE-2020-8285](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8285)
    and
    [CVE-2020-8286](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8286).

# Release 2.5.0

## Major Features and Improvements

*   Support for Python3.9 has been added.
*   `tf.data`:
    *   `tf.data` service now supports strict round-robin reads, which is useful
        for synchronous training workloads where example sizes vary. With strict
        round robin reads, users can guarantee that consumers get similar-sized
        examples in the same step.
    *   tf.data service now supports optional compression. Previously data would
        always be compressed, but now you can disable compression by passing
        `compression=None` to `tf.data.experimental.service.distribute(...)`.
    *   `tf.data.Dataset.batch()` now supports `num_parallel_calls` and
        `deterministic` arguments. `num_parallel_calls` is used to indicate that
        multiple input batches should be computed in parallel. With
        `num_parallel_calls` set, `deterministic` is used to indicate that
        outputs can be obtained in the non-deterministic order.
    *   Options returned by `tf.data.Dataset.options()` are no longer mutable.
    *   tf.data input pipelines can now be executed in debug mode, which
        disables any asynchrony, parallelism, or non-determinism and forces
        Python execution (as opposed to trace-compiled graph execution) of
        user-defined functions passed into transformations such as `map`. The
        debug mode can be enabled through
        `tf.data.experimental.enable_debug_mode()`.
*   `tf.lite`
    *   Enabled the new MLIR-based quantization backend by default
        *   The new backend is used for 8 bits full integer post-training
            quantization
        *   The new backend removes the redundant rescales and fixes some bugs
            (shared weight/bias, extremely small scales, etc)
        *   Set `experimental_new_quantizer` in tf.lite.TFLiteConverter to False
            to disable this change
*   `tf.keras`
    *   `tf.keras.metrics.AUC` now support logit predictions.
    *   Enabled a new supported input type in `Model.fit`,
        `tf.keras.utils.experimental.DatasetCreator`, which takes a callable,
        `dataset_fn`. `DatasetCreator` is intended to work across all
        `tf.distribute` strategies, and is the only input type supported for
        Parameter Server strategy.
*   `tf.distribute`
    *   `tf.distribute.experimental.ParameterServerStrategy` now supports
        training with Keras `Model.fit` when used with `DatasetCreator`.
    *   Creating `tf.random.Generator` under `tf.distribute.Strategy` scopes is
        now allowed (except for
        `tf.distribute.experimental.CentralStorageStrategy` and
        `tf.distribute.experimental.ParameterServerStrategy`). Different
        replicas will get different random-number streams.
*   TPU embedding support
    *   Added `profile_data_directory` to `EmbeddingConfigSpec` in
        `_tpu_estimator_embedding.py`. This allows embedding lookup statistics
        gathered at runtime to be used in embedding layer partitioning
        decisions.
*   PluggableDevice
    *   Third-party devices can now connect to TensorFlow as plug-ins through
        [StreamExecutor C API](https://github.com/tensorflow/community/blob/master/rfcs/20200612-stream-executor-c-api.md).
        and
        [PluggableDevice](https://github.com/tensorflow/community/blob/master/rfcs/20200624-pluggable-device-for-tensorflow.md)
        interface.
        *   Add custom ops and kernels through
            [kernel and op registration C API](https://github.com/tensorflow/community/blob/master/rfcs/20190814-kernel-and-op-registration.md).
        *   Register custom graph optimization passes with
            [graph optimization C API](https://github.com/tensorflow/community/blob/master/rfcs/20201027-modular-tensorflow-graph-c-api.md).
*   [oneAPI Deep Neural Network Library (oneDNN)](https://github.com/oneapi-src/oneDNN)
    CPU performance optimizations from
    [Intel-optimized TensorFlow](https://software.intel.com/content/www/us/en/develop/articles/intel-optimization-for-tensorflow-installation-guide.html)
    are now available in the official x86-64 Linux and Windows builds.
    *   They are off by default. Enable them by setting the environment variable
        `TF_ENABLE_ONEDNN_OPTS=1`.
    *   We do not recommend using them in GPU systems, as they have not been
        sufficiently tested with GPUs yet.
*   TensorFlow pip packages are now built with CUDA11.2 and cuDNN 8.1.0

## Breaking Changes

*   The `TF_CPP_MIN_VLOG_LEVEL` environment variable has been renamed to
    `TF_CPP_MAX_VLOG_LEVEL` which correctly describes its effect.

## Bug Fixes and Other Changes

*   `tf.keras`:

    *   Preprocessing layers API consistency changes:
        *   `StringLookup` added `output_mode`, `sparse`, and
            `pad_to_max_tokens` arguments with same semantics as
            `TextVectorization`.
        *   `IntegerLookup` added `output_mode`, `sparse`, and
            `pad_to_max_tokens` arguments with same semantics as
            `TextVectorization`. Renamed `max_values`, `oov_value` and
            `mask_value` to `max_tokens`, `oov_token` and `mask_token` to align
            with `StringLookup` and `TextVectorization`.
        *   `TextVectorization` default for `pad_to_max_tokens` switched to
            False.
        *   `CategoryEncoding` no longer supports `adapt`, `IntegerLookup` now
            supports equivalent functionality. `max_tokens` argument renamed to
            `num_tokens`.
        *   `Discretization` added `num_bins` argument for learning bins
            boundaries through calling `adapt` on a dataset. Renamed `bins`
            argument to `bin_boundaries` for specifying bins without `adapt`.
    *   Improvements to model saving/loading:
        *   `model.load_weights` now accepts paths to saved models.
    *   Keras inputs can now be created directly from arbitrary `tf.TypeSpecs`.
    *   Two new learning rate schedules added:
        `tf.keras.optimizers.schedules.CosineDecay`
        and`tf.keras.optimizers.schedules.CosineDecayRestarts`.

*   `tf.data`:

    *   Exposing `tf.data.experimental.ExternalStatePolicy`, which can be used
        to control how external state should be handled during dataset
        serialization or iterator checkpointing.
    *   Changing `tf.data.experimental.save` to store the type specification of
        the dataset elements. This avoids the need for explicitly specifying the
        `element_spec` argument of `tf.data.experimental.load` when loading the
        previously saved dataset.
    *   Add `.element_spec` property to `tf.data.DatasetSpec` to access the
        inner spec. This can be used to extract the structure of nested
        datasets.
    *   Add `tf.data.experimental.AutoShardingPolicy.HINT` which can be used to
        provide hints to tf.distribute-based auto-sharding as to where in the
        input pipeline to insert sharding transformations.
    *   Make tf.data.Options persistent across `tf.function` and `GraphDef`
        boundaries.

*   XLA compilation:

    *   `tf.function(experimental_compile=True)` has become a stable API,
        renamed `tf.function(jit_compile=True)`.
    *   XLA can now compile MirroredStrategy: the step function passed
        to`strategy.run` can now be annoted with `jit_compile=True`.

*   `tf.distribute`:

    *   Rename `experimental_prefetch_to_device` in `tf.distribute.InputOptions`
        to `experimental_fetch_to_device` to better reflect the purpose.

*   `tf.lite`:

    *   class `tflite::Subgraph`:
        *   Removed the `tensors()` method and the non-const overload of the
            `nodes_and_registration()` method, both of which were previously
            documented as temporary and to be removed.
            *   Uses of `tensors()` can be replaced by calling the existing
                methods `tensors_size()` and `tensor(int)`.
            *   Uses of the non-const overload of `nodes_and_registration` can
                be replaced by calling the existing methods `nodes_size()` and
                `context()`, and then calling the `GetNodeAndRegistration`
                method in the `TfLiteContext` returned by `context()`.
    *   NNAPI
        *   Removed deprecated `Interpreter::UseNNAPI(bool)` C++ API.
            *   Use `NnApiDelegate()` and related delegate configuration methods
                directly.
        *   Replaced the model cache key for models computation algorithm with
            one guaranteed to be stable across runs.
    *   16 bits quantization
        *   Added int16x8 support for ABS, REDUCE_MAX and REDUCE_MIN operators.
        *   Additional tests and fixes for ADD and SUB operators.
    *   Added support for saved model's session initializer through
        `TFLiteConverter.from_saved_model`.
    *   Added DEPTH_TO_SPACE support in Post training quantization.
    *   Added dynamic range quantization support for the BatchMatMul op.
        *   Both symmetric and asymmetric quantized input tensor are supported.
    *   Add `RFFT2D` as builtin op. (`RFFT2D` also supports `RFFTD`.) Currently
        only supports float32 input.
    *   Add 5D support to `SLICE` op.
    *   TFLite Supports SingatureDef:
        *   TFLiteConverter exports models with SignatureDef
        *   Interpreter supports getting a list of signatures and getting
            callable function for a given signaturedef.
    *   Add int8 support for `ReshapeV2`.
    *   Add experimental support for optimization with sparsity.
    *   Add nominal support for unsigned 32-bit integer tensor types. Note that
        very few TFLite kernels support this type natively, so its use in mobile
        ML authoring is generally discouraged.
    *   Add support for static hash tables through
        `TFLiteConverter.from_saved_model`.
    *   The Python TF Lite Interpreter bindings now has an option
        `experimental_preserve_all_tensors` to aid in debugging conversion.
    *   Quantized x86 execution defaults to Ruy GEMM library for platforms with
        AVX support.
    *   Deprecate
        `tf.compat.v1.lite.experimental.get_potentially_supported_ops`. Use
        `tf.lite.TFLiteConverter` directly to check whether a model is
        convertible.
    *   Add support to select one of three different built-in op resolvers
    *   Enabled post training with calibrations for models that require user
        provided TensorFlow Lite custom op libraries via
        `converter.target_spec._experimental_custom_op_registerers`. used in
        Python Interpreter API.

*   TF Core:

    *   Corrected higher-order gradients of control flow constructs (`tf.cond`,
        `tf.while_loop`, and compositions like `tf.foldl`) computed with
        `tf.GradientTape` inside a `tf.function`.
    *   Changed the default step size in `gradient_checker_v2.compute_gradients`
        to be exactly representable as a binary floating point numbers. This
        avoids poluting gradient approximations needlessly, which is some cases
        leads to false negatives in op gradient tests.
    *   Added `tf.config.experimental.get_memory_info`, returning a dict with
        the current and peak memory usage. Deprecated
        `tf.config.experimental.get_memory_usage` in favor of this new function.
    *   Extended `tf.config.experimental.enable_tensor_float_32_execution` to
        control Tensor-Float-32 evaluation in RNNs.
    *   Added a 'experimental_payloads' field to tf.errors.OpError and its
        subclasses to support more detailed error reporting. This is inspired
        from Abseil Status payloads:
        https://github.com/abseil/abseil-cpp/blob/master/absl/status/status.h

*   `tf.summary`:

    *   New `tf.summary.graph` allows manual write of TensorFlow graph
        (`tf.Graph` or `tf.compat.v1.GraphDef`) as a summary. This is not a
        replacement for the trace-based API.

*   Set `/d2ReducedOptimizeHugeFunctions` by default for Windows builds. This
    provides a big compile-time speedup, and effectively raises the minimum
    supported MSVC version to 16.4 (current: 16.8).

    *   See:
        https://groups.google.com/a/tensorflow.org/d/topic/build/SsW98Eo7l3o/discussion

*   TensorRT

    *   Removed the deprecated `session_config` parameter for the TF1-TRT
        converter `TrtGraphConverter`. Previously, we issued a warning when the
        value of the parameter is not None.
    *   The TF2-TRT converter `TrtGraphConverterV2` takes an object of class
        TrtConversionParams as a parameter. Removed three deprecated fields from
        this class: `rewriter_config_template`, `is_dynamic_op`, and
        `max_batch_size`. Previously, we issued a warning when the value of
        `rewriter_config_template` is not None. We issued an error when the
        value of `is_dynamic_op` is not True. We didn't use the value for
        `max_batch_size` for building TensorRT engines. Add parameters
        `use_dynamic_shape` to enable dynamic shape support. The default is to
        disable dynamic shape support. Add `dynamic_shape_profile_strategy` for
        selecting a dynamic shape profile strategy. The default is profile
        strategy is `Range`.
    *   Issue a warning when function get_tensorrt_rewriter_config is used.

*   TF XLA

    *   Add new enum value `MLIR_BRIDGE_ROLLOUT_SAFE_MODE_ENABLED` to
        `tf.config.experimental.mlir_bridge_rollout` to enable a \"safe\" mode.
        This runs the MLIR bridge only when an analysis of the graph only when
        an analysis of the graph determines that it is safe to run.
    *   Add new enum value `MLIR_BRIDGE_ROLLOUT_SAFE_MODE_FALLBACK_ENABLED'
        to`tf.config.experimental.mlir_bridge_rollout` to enable a fallback for
        the MLIR bridge in a \"safe\" mode. This runs the MLIR bridge in a
        FallbackEnabled mode when an analysis of the graph determines that the
        graph does not have unsupported features.

*   Deterministic Op Functionality:

    *   Add determinism-unimplemented exception-throwing to the segment-sum ops.
        When the environment variable `TF_DETERMINISTIC_OPS` is set to `"true"`
        or `"1"` (when op-determinism is expected), an attempt to run the
        following ops on a GPU will throw `tf.errors.UnimplementedError` (with
        an understandable message) when `data` is a floating-point type,
        including complex types (if supported): `tf.math.segment_prod`,
        `tf.math.segment_sum`, `tf.math.unsorted_segment_mean`,
        `tf.math.unsorted_segment_sqrt_n`, `tf.math.unsorted_segment_prod`,
        `tf.math.unsorted_segment_sum`, and therefore also
        `tf.convert_to_tensor` when `value` is of type `tf.IndexedSlices` (such
        as in the back prop though `tf.gather` into a dense embedding). See
        issue [39751](https://github.com/tensorflow/tensorflow/issues/39751)
        which this change addresses, but does not solve. This exception-throwing
        behavior can be disabled by setting the environment variable
        `TF_DISABLE_SEGMENT_REDUCTION_OP_DETERMINISM_EXCEPTIONS` to `"true"` or
        `"1"`. For more information about these changes, see the description in
        pull request
        [47772](https://github.com/tensorflow/tensorflow/pull/47772).
    *   In previous versions of TensorFlow, when a GPU was available,
        `tf.sparse.sparse_dense_matmul` introduced truly random noise in the
        forward path for data of type `tf.float32` but not for data of type
        `tf.float64` (for which there was no GPU implementation). In this
        current release, GPU support for other floating-point types
        (`tf.float16`, `tf.float64`, `tf.complex64`, and `tf.complex128`) has
        been added for this op. If you were relying on the determinism of the
        `tf.float64` CPU implementation being automatically selected because of
        the absence of the `tf.float64` GPU implementation, you with either need
        to force the op to run on the CPU or use a different data type.

*   Security

    *   Fixes a heap buffer overflow in `RaggedBinCount`
        ([CVE-2021-29512](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29512))
    *   Fixes a heap out of bounds write in `RaggedBinCount`
        ([CVE-2021-29514](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29514))
    *   Fixes a type confusion during tensor casts which leads to dereferencing
        null pointers
        ([CVE-2021-29513](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29513))
    *   Fixes a reference binding to null pointer in `MatrixDiag*` ops
        ([CVE-2021-29515](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29515))
    *   Fixes a null pointer dereference via invalid Ragged Tensors
        ([CVE-2021-29516](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29516))
    *   Fixes a division by zero in `Conv3D`
        ([CVE-2021-29517](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29517))
    *   Fixes vulnerabilities where session operations in eager mode lead to
        null pointer dereferences
        ([CVE-2021-29518](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29518))
    *   Fixes a `CHECK`-fail in `SparseCross` caused by type confusion
        ([CVE-2021-29519](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29519))
    *   Fixes a segfault in `SparseCountSparseOutput`
        ([CVE-2021-29521](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29521))
    *   Fixes a heap buffer overflow in `Conv3DBackprop*`
        ([CVE-2021-29520](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29520))
    *   Fixes a division by 0 in `Conv3DBackprop*`
        ([CVE-2021-29522](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29522))
    *   Fixes a `CHECK`-fail in `AddManySparseToTensorsMap`
        ([CVE-2021-29523](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29523))
    *   Fixes a division by 0 in `Conv2DBackpropFilter`
        ([CVE-2021-29524](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29524))
    *   Fixes a division by 0 in `Conv2DBackpropInput`
        ([CVE-2021-29525](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29525))
    *   Fixes a division by 0 in `Conv2D`
        ([CVE-2021-29526](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29526))
    *   Fixes a division by 0 in `QuantizedConv2D`
        ([CVE-2021-29527](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29527))
    *   Fixes a division by 0 in `QuantizedMul`
        ([CVE-2021-29528](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29528))
    *   Fixes vulnerabilities caused by invalid validation in
        `SparseMatrixSparseCholesky`
        ([CVE-2021-29530](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29530))
    *   Fixes a heap buffer overflow caused by rounding
        ([CVE-2021-29529](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29529))
    *   Fixes a `CHECK`-fail in `tf.raw_ops.EncodePng`
        ([CVE-2021-29531](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29531))
    *   Fixes a heap out of bounds read in `RaggedCross`
        ([CVE-2021-29532](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29532))
    *   Fixes a `CHECK`-fail in `DrawBoundingBoxes`
        ([CVE-2021-29533](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29533))
    *   Fixes a heap buffer overflow in `QuantizedMul`
        ([CVE-2021-29535](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29535))
    *   Fixes a `CHECK`-fail in `SparseConcat`
        ([CVE-2021-29534](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29534))
    *   Fixes a heap buffer overflow in `QuantizedResizeBilinear`
        ([CVE-2021-29537](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29537))
    *   Fixes a heap buffer overflow in `QuantizedReshape`
        ([CVE-2021-29536](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29536))
    *   Fixes a division by zero in `Conv2DBackpropFilter`
        ([CVE-2021-29538](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29538))
    *   Fixes a heap buffer overflow in `Conv2DBackpropFilter`
        ([CVE-2021-29540](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29540))
    *   Fixes a heap buffer overflow in `StringNGrams`
        ([CVE-2021-29542](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29542))
    *   Fixes a null pointer dereference in `StringNGrams`
        ([CVE-2021-29541](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29541))
    *   Fixes a `CHECK`-fail in `QuantizeAndDequantizeV4Grad`
        ([CVE-2021-29544](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29544))
    *   Fixes a `CHECK`-fail in `CTCGreedyDecoder`
        ([CVE-2021-29543](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29543))
    *   Fixes a heap buffer overflow in `SparseTensorToCSRSparseMatrix`
        ([CVE-2021-29545](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29545))
    *   Fixes a division by 0 in `QuantizedBiasAdd`
        ([CVE-2021-29546](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29546))
    *   Fixes a heap out of bounds in
        `QuantizedBatchNormWithGlobalNormalization`
        ([CVE-2021-29547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29547))
    *   Fixes a division by 0 in `QuantizedBatchNormWithGlobalNormalization`
        ([CVE-2021-29548](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29548))
    *   Fixes a division by 0 in `QuantizedAdd`
        ([CVE-2021-29549](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29549))
    *   Fixes a division by 0 in `FractionalAvgPool`
        ([CVE-2021-29550](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29550))
    *   Fixes an OOB read in `MatrixTriangularSolve`
        ([CVE-2021-29551](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29551))
    *   Fixes a heap OOB in `QuantizeAndDequantizeV3`
        ([CVE-2021-29553](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29553))
    *   Fixes a `CHECK`-failure in `UnsortedSegmentJoin`
        ([CVE-2021-29552](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29552))
    *   Fixes a division by 0 in `DenseCountSparseOutput`
        ([CVE-2021-29554](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29554))
    *   Fixes a division by 0 in `FusedBatchNorm`
        ([CVE-2021-29555](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29555))
    *   Fixes a division by 0 in `SparseMatMul`
        ([CVE-2021-29557](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29557))
    *   Fixes a division by 0 in `Reverse`
        ([CVE-2021-29556](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29556))
    *   Fixes a heap buffer overflow in `SparseSplit`
        ([CVE-2021-29558](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29558))
    *   Fixes a heap OOB access in unicode ops
        ([CVE-2021-29559](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29559))
    *   Fixes a heap buffer overflow in `RaggedTensorToTensor`
        ([CVE-2021-29560](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29560))
    *   Fixes a `CHECK`-fail in `LoadAndRemapMatrix`
        ([CVE-2021-29561](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29561))
    *   Fixes a `CHECK`-fail in `tf.raw_ops.IRFFT`
        ([CVE-2021-29562](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29562))
    *   Fixes a `CHECK`-fail in `tf.raw_ops.RFFT`
        ([CVE-2021-29563](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29563))
    *   Fixes a null pointer dereference in `EditDistance`
        ([CVE-2021-29564](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29564))
    *   Fixes a null pointer dereference in `SparseFillEmptyRows`
        ([CVE-2021-29565](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29565))
    *   Fixes a heap OOB access in `Dilation2DBackpropInput`
        ([CVE-2021-29566](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29566))
    *   Fixes a reference binding to null in `ParameterizedTruncatedNormal`
        ([CVE-2021-29568](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29568))
    *   Fixes a set of vulnerabilities caused by lack of validation in
        `SparseDenseCwiseMul`
        ([CVE-2021-29567](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29567))
    *   Fixes a heap out of bounds read in `MaxPoolGradWithArgmax`
        ([CVE-2021-29570](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29570))
    *   Fixes a heap out of bounds read in `RequantizationRange`
        ([CVE-2021-29569](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29569))
    *   Fixes a memory corruption in `DrawBoundingBoxesV2`
        ([CVE-2021-29571](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29571))
    *   Fixes a reference binding to nullptr in `SdcaOptimizer`
        ([CVE-2021-29572](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29572))
    *   Fixes an overflow and a denial of service in
        `tf.raw_ops.ReverseSequence`
        ([CVE-2021-29575](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29575))
    *   Fixes a division by 0 in `MaxPoolGradWithArgmax`
        ([CVE-2021-29573](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29573))
    *   Fixes an undefined behavior in `MaxPool3DGradGrad`
        ([CVE-2021-29574](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29574))
    *   Fixes a heap buffer overflow in `MaxPool3DGradGrad`
        ([CVE-2021-29576](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29576))
    *   Fixes a heap buffer overflow in `AvgPool3DGrad`
        ([CVE-2021-29577](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29577))
    *   Fixes an undefined behavior and a `CHECK`-fail in
        `FractionalMaxPoolGrad`
        ([CVE-2021-29580](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29580))
    *   Fixes a heap buffer overflow in `FractionalAvgPoolGrad`
        ([CVE-2021-29578](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29578))
    *   Fixes a heap buffer overflow in `MaxPoolGrad`
        ([CVE-2021-29579](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29579))
    *   Fixes a segfault in `CTCBeamSearchDecoder`
        ([CVE-2021-29581](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29581))
    *   Fixes a heap OOB read in `tf.raw_ops.Dequantize`
        ([CVE-2021-29582](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29582))
    *   Fixes a `CHECK`-fail due to integer overflow
        ([CVE-2021-29584](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29584))
    *   Fixes a heap buffer overflow and undefined behavior in `FusedBatchNorm`
        ([CVE-2021-29583](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29583))
    *   Fixes a division by zero in padding computation in TFLite
        ([CVE-2021-29585](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29585))
    *   Fixes a division by zero in optimized pooling implementations in TFLite
        ([CVE-2021-29586](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29586))
    *   Fixes a division by zero in TFLite's implementation of `SpaceToDepth`
        ([CVE-2021-29587](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29587))
    *   Fixes a division by zero in TFLite's implementation of `GatherNd`
        ([CVE-2021-29589](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29589))
    *   Fixes a division by zero in TFLite's implementation of `TransposeConv`
        ([CVE-2021-29588](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29588))
    *   Fixes a heap OOB read in TFLite's implementation of `Minimum` or
        `Maximum`
        ([CVE-2021-29590](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29590))
    *   Fixes a null pointer dereference in TFLite's `Reshape` operator
        ([CVE-2021-29592](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29592))
    *   Fixes a stack overflow due to looping TFLite subgraph
        ([CVE-2021-29591](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29591))
    *   Fixes a division by zero in TFLite's implementation of `DepthToSpace`
        ([CVE-2021-29595](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29595))
    *   Fixes a division by zero in TFLite's convolution code
        ([CVE-2021-29594](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29594))
    *   Fixes a division by zero in TFLite's implementation of `EmbeddingLookup`
        ([CVE-2021-29596](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29596))
    *   Fixes a division by zero in TFLite's implementation of `BatchToSpaceNd`
        ([CVE-2021-29593](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29593))
    *   Fixes a division by zero in TFLite's implementation of `SpaceToBatchNd`
        ([CVE-2021-29597](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29597))
    *   Fixes a division by zero in TFLite's implementation of `SVDF`
        ([CVE-2021-29598](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29598))
    *   Fixes a division by zero in TFLite's implementation of `Split`
        ([CVE-2021-29599](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29599))
    *   Fixes a division by zero in TFLite's implementation of `OneHot`
        ([CVE-2021-29600](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29600))
    *   Fixes a division by zero in TFLite's implementation of `DepthwiseConv`
        ([CVE-2021-29602](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29602))
    *   Fixes a division by zero in TFLite's implementation of hashtable lookup
        ([CVE-2021-29604](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29604))
    *   Fixes a integer overflow in TFLite concatentation
        ([CVE-2021-29601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29601))
    *   Fixes a integer overflow in TFLite memory allocation
        ([CVE-2021-29605](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29605))
    *   Fixes a heap OOB write in TFLite
        ([CVE-2021-29603](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29603))
    *   Fixes a heap OOB read in TFLite
        ([CVE-2021-29606](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29606))
    *   Fixes a heap OOB and null pointer dereference in `RaggedTensorToTensor`
        ([CVE-2021-29608](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29608))
    *   Fixes vulnerabilities caused by incomplete validation in `SparseAdd`
        ([CVE-2021-29609](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29609))
    *   Fixes vulnerabilities caused by incomplete validation in
        `SparseSparseMinimum`
        ([CVE-2021-29607](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29607))
    *   Fixes vulnerabilities caused by incomplete validation in `SparseReshape`
        ([CVE-2021-29611](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29611))
    *   Fixes vulnerabilities caused by invalid validation in
        `QuantizeAndDequantizeV2`
        ([CVE-2021-29610](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29610))
    *   Fixes a heap buffer overflow in `BandedTriangularSolve`
        ([CVE-2021-29612](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29612))
    *   Fixes vulnerabilities caused by incomplete validation in
        `tf.raw_ops.CTCLoss`
        ([CVE-2021-29613](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29613))
    *   Fixes an interpreter crash from vulnerabilities in `tf.io.decode_raw`
        ([CVE-2021-29614](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29614))
    *   Fixes a stack overflow in `ParseAttrValue` with nested tensors
        ([CVE-2021-29615](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29615))
    *   Fixes a null dereference in Grappler's `TrySimplify`
        ([CVE-2021-29616](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29616))
    *   Fixes a crash in `tf.transpose` with complex inputs
        ([CVE-2021-29618](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29618))
    *   Fixes a crash in `tf.strings.substr` due to `CHECK`-fail
        ([CVE-2021-29617](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29617))
    *   Fixes a segfault in `tf.raw_ops.SparseCountSparseOutput`
        ([CVE-2021-29619](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29619))
    *   Fixes a segfault in `tf.raw_ops.ImmutableConst`
        ([CVE-2021-29539](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2021-29539))
    *   Updates `curl` to `7.76.0` to handle
        [CVE-2020-8169](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8169),
        [CVE-2020-8177](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8177),
        [CVE-2020-8231](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8231),
        [CVE-2020-8284](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8284),
        [CVE-2020-8285](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8285)
        and
        [CVE-2020-8286](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-8286).

*   Other

    *   Added `show_debug_info` to `mlir.convert_graph_def` and
        `mlir.convert_function`.
    *   Added
        [Arm Compute Library (ACL)](https://github.com/ARM-software/ComputeLibrary)
        support to `--config=mkl_aarch64` build.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

8bitmp3, Aaron S. Mondal, Abhilash Mahendrakar, Abhinav Upadhyay, Abhishek
Kulkarni, Abolfazl Shahbazi, Adam Hillier, Aditya Kane, Ag Ramesh, ahmedsabie,
Albert Villanova Del Moral, Aleksey Vitebskiy, Alex Hoffman, Alexander Bayandin,
Alfie Edwards, Aman Kishore, Amogh Joshi, andreABbauer, Andrew Goodbody, Andrzej
Pomirski, Artemiy Ryabinkov, Ashish Jha, ather, Ayan Moitra, Bairen Yi, Bart
Ribbers, Bas Aarts, Behzad Abghari, Ben Arnao, Ben Barsdell, Benjamin Klimczak,
bhack, Brendan Collins, Can Wang, Cheng Ren, Chris Leary, Chris Olivier, Clemens
Giuliani, Cloud Han, Corey Cole, Cui, Yifeng, Cuong V. Nguyen, Daniel Moore,
Dawid Wojciechowski, Ddavis-2015, Dean Wyatte, Denisa Roberts, dependabot[bot],
Dmitry Volodin, Dominic Jack, Duncan Riach, dushuai, Elena Zhelezina, Eli
Osherovich, Erik Smistad, ewsn1593, Felix Fent, fo40225, François Chollet,
Frederic Bastien, Freedom" Koan-Sin Tan, fsx950223, ganand1, gbaned, Georgiy
Manuilov, gerbauz, Guillaume Klein, Guozhong Zhuang, Harry Slatyer, Harsh188,
henri, Henri Woodcock, Hiran Sarkar, Hollow Man, Håkon Sandsmark, I Wayan
Dharmana, icysapphire, Ikko Ashimine, Jab Hofmeier, Jack Hessel, Jacob Valdez,
Jakub Jatczak, James Bernardi, Jared Smolens, Jason Zaman, jedlimlx, Jenny
Plunkett, Jens Elofsson, Jerry Shih, jgehw, Jia Fu Low, Jim Fisher, jpodivin,
Julien Stephan, Jungsub Lim, Junha Park, Junhyuk So, justkw, Kaixi Hou,
kashyapraval, Kasra Bigdeli, Kazuaki Ishizaki, Keith Mok, Kevin Cheng, kopytjuk,
Kristian Hartikainen, ksood12345, Kulin Seth, kushanam, latyas, Lequn Chen,
Leslie-Fang, Long M. Lưu, Lukas Geiger, machineko, Mahmoud Abuzaina, Manish, Mao
Yunfei, Maozhou, Ge, Marcin Juszkiewicz, Marcin Owsiany, Marconi Jiang, Marcos
Pereira, Maria Romanenko Vexlard, Maria Vexlard, Marius Brehler, marload, Martin
Kubovčík, Matej, Mateusz Holenko, Maxiwell S. Garcia, Mazhar, mazharul,
mbhuiyan, mdfaijul, Michael Gielda, Michael Kuchnik, Michal Szutenberg, Mikhail
Stepanov, Milan Straka, Mitchel Humpherys, Mohamed Moselhy, Mohamed Nour
Abouelseoud, Måns Bermell, Måns Nilsson, Nathan Luehr, Nico Jahn, Niroop
Ammbashankar, Oceania2018, Omri Steiner, Orivej Desh, Oskar Flordal, oujiafan,
Patrik Laurell, Paul B. Isaac'S, Paul Klinger, Pawel Piskorski, Pedro Marques,
Phat Tran, Piotr Zierhoffer, piyushdatta, Pnikam-Cad, Prashant Kumar, Prateek
Gupta, PratsBhatt, Pravin Karandikar, qqq.jq, QQ喵, Quintin, Rama Ketineni,
ravikyram, Rehan Guha, rhdong, rmothukuru, Roger Cheng, Rohit Santhanam, rposts,
Rsanthanam-Amd, rsun, Rsun-Bdti, Ryan Kuester, ryanking13, Saduf2019, Sami Kama,
Samuel Marks, Scott Tseng, Sean Moriarity, Sergey Popov, Sergii Khomenko, Sheng,
Yang, shwetaoj, Sidong-Wei, Simon Maurer, Simrit Kaur, Srini511, Srinivasan
Narayanamoorthy, Stephan, Stephen Matthews, Sungmann Cho, Sunoru, Suraj Sudhir,
Suraj Upadhyay, Taebum Kim, Takayoshi Koizumi, Tamas Bela Feher, Teng Lu,
Thibaut Goetghebuer-Planchon, Tomwildenhain-Microsoft, Tony, Traun Leyden, Trent
Lo, TVLIgnacy, Tzu-Wei Sung, vaibhav, Vignesh Kothapalli, Vikram Dattu,
viktprog, Vinayaka Bandishti, Vincent Abriou, Vishakha Agrawal, Vivek Panyam,
Vladimir Silyaev, Võ Văn Nghĩa, wamuir, Wang, Yanzhang, wangsiyu, Waqar Hameed,
wxinix, Xiao Yang, xiaohong1031, Xiaoming (Jason) Cui, Xinan Jiang, Yair
Ehrenwald, Yajush Vyas, Yasir Modak, Yimei Sun, Yong Tang, Yosshi999,
youshenmebutuo, yqtianust, Yuan Tang, yuanbopeng, Yuriy Chernyshov, Yuta
Fukasawa, Zachary Deane-Mayer, Zeno Gantner, Zhoulong Jiang, zhuyie, zilinzhu,
彭震东

# Release 2.4.1

*   This release removes the AVX2 requirement from TF 2.4.0.

# Release 2.3.2

## Bug Fixes and Other Changes

*   Fixes an access to unitialized memory in Eigen code
    ([CVE-2020-26266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26266))
*   Fixes a security vulnerability caused by lack of validation in
    `tf.raw_ops.DataFormatVecPermute` and `tf.raw_ops.DataFormatDimMap`
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a vulnerability caused by attempting to write to immutable memory
    region in `tf.raw_ops.ImmutableConst`
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268)
*   Fixes a `CHECK`-fail in LSTM with zero-length input
    ([CVE-2020-26270](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26270))
*   Fixes a security vulnerability caused by accessing heap data outside of
    bounds when loading a specially crafted `SavedModel`
    ([CVE-2020-26271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26271))
*   Solves an OOM issue on TPUs when XLA contexts use fused average updates
*   Updates `libjpeg-turbo` to `2.0.5` to handle
    [CVE-2020-13790](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13790).
*   Updates `junit` to `4.13.1` to handle
    [CVE-2020-15250](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15250).
*   Updates `PCRE` to `8.44` to handle
    [CVE-2019-20838](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-20838)
    and
    [CVE-2020-14155](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-14155).
*   Updates `sqlite3` to `3.44.0` to keep in sync with master branch.

# Release 2.2.2

## Bug Fixes and Other Changes

*   Fixes an access to unitialized memory in Eigen code
    ([CVE-2020-26266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26266))
*   Fixes a security vulnerability caused by lack of validation in
    `tf.raw_ops.DataFormatVecPermute` and `tf.raw_ops.DataFormatDimMap`
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a vulnerability caused by attempting to write to immutable memory
    region in `tf.raw_ops.ImmutableConst`
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268)
*   Fixes a `CHECK`-fail in LSTM with zero-length input
    ([CVE-2020-26270](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26270))
*   Fixes a security vulnerability caused by accessing heap data outside of
    bounds when loading a specially crafted `SavedModel`
    ([CVE-2020-26271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26271))
*   Prevents memory leaks in loading `SavedModel`s that import functions
*   Updates `libjpeg-turbo` to `2.0.5` to handle
    [CVE-2020-13790](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13790).
*   Updates `junit` to `4.13.1` to handle
    [CVE-2020-15250](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15250).
*   Updates `PCRE` to `8.44` to handle
    [CVE-2019-20838](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-20838)
    and
    [CVE-2020-14155](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-14155).
*   Updates `sqlite3` to `3.44.0` to keep in sync with master branch.

# Release 2.1.3

## Bug Fixes and Other Changes

*   Fixes an access to unitialized memory in Eigen code
    ([CVE-2020-26266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26266))
*   Fixes a security vulnerability caused by lack of validation in
    `tf.raw_ops.DataFormatVecPermute` and `tf.raw_ops.DataFormatDimMap`
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a vulnerability caused by attempting to write to immutable memory
    region in `tf.raw_ops.ImmutableConst`
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268)
*   Fixes a `CHECK`-fail in LSTM with zero-length input
    ([CVE-2020-26270](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26270))
*   Fixes a security vulnerability caused by accessing heap data outside of
    bounds when loading a specially crafted `SavedModel`
    ([CVE-2020-26271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26271))
*   Updates `libjpeg-turbo` to `2.0.5` to handle
    [CVE-2020-13790](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13790).
*   Updates `junit` to `4.13.1` to handle
    [CVE-2020-15250](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15250).
*   Updates `PCRE` to `8.44` to handle
    [CVE-2019-20838](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-20838)
    and
    [CVE-2020-14155](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-14155).
*   Updates `sqlite3` to `3.44.0` to keep in sync with master branch.
*   Newer ROCm versions are supported on the 2.1 branch.

# Release 2.0.4

Note that this is the last patch release for the TensorFlow 2.0.x series.

## Bug Fixes and Other Changes

*   Fixes an access to unitialized memory in Eigen code
    ([CVE-2020-26266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26266))
*   Fixes a security vulnerability caused by lack of validation in
    `tf.raw_ops.DataFormatVecPermute` and `tf.raw_ops.DataFormatDimMap`
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a vulnerability caused by attempting to write to immutable memory
    region in `tf.raw_ops.ImmutableConst`
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268)
*   Fixes a `CHECK`-fail in LSTM with zero-length input
    ([CVE-2020-26270](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26270))
*   Fixes a security vulnerability caused by accessing heap data outside of
    bounds when loading a specially crafted `SavedModel`
    ([CVE-2020-26271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26271))
*   Updates `libjpeg-turbo` to `2.0.5` to handle
    [CVE-2020-13790](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13790).
*   Updates `junit` to `4.13.1` to handle
    [CVE-2020-15250](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15250).
*   Updates `PCRE` to `8.44` to handle
    [CVE-2019-20838](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-20838)
    and
    [CVE-2020-14155](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-14155).
*   Updates `sqlite3` to `3.44.0` to keep in sync with master branch.

# Release 1.15.5

Note that this is the last patch release for the TensorFlow 1.x series.

## Bug Fixes and Other Changes

*   Fixes an access to unitialized memory in Eigen code
    ([CVE-2020-26266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26266))
*   Fixes a security vulnerability caused by lack of validation in
    `tf.raw_ops.DataFormatVecPermute` and `tf.raw_ops.DataFormatDimMap`
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a vulnerability caused by attempting to write to immutable memory
    region in `tf.raw_ops.ImmutableConst`
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268)
*   Fixes a `CHECK`-fail in LSTM with zero-length input
    ([CVE-2020-26270](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26270))
*   Fixes a security vulnerability caused by accessing heap data outside of
    bounds when loading a specially crafted `SavedModel`
    ([CVE-2020-26271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26271))
*   Updates `libjpeg-turbo` to `2.0.5` to handle
    [CVE-2020-13790](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13790).
*   Updates `junit` to `4.13.1` to handle
    [CVE-2020-15250](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15250).
*   Updates `PCRE` to `8.44` to handle
    [CVE-2019-20838](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-20838)
    and
    [CVE-2020-14155](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-14155).
*   Updates `sqlite3` to `3.44.0` to keep in sync with master branch.

# Release 2.4.0

\## Major Features and Improvements

*   `tf.distribute` introduces experimental support for asynchronous training of
    models via the
    [`tf.distribute.experimental.ParameterServerStrategy`](https://www.tensorflow.org/api_docs/python/tf/distribute/experimental/ParameterServerStrategy)
    API. Please see the
    [tutorial](https://www.tensorflow.org/tutorials/distribute/parameter_server_training)
    to learn more.

*   [`MultiWorkerMirroredStrategy`](https://www.tensorflow.org/api_docs/python/tf/distribute/MultiWorkerMirroredStrategy)
    is now a stable API and is no longer considered experimental. Some of the
    major improvements involve handling peer failure and many bug fixes. Please
    check out the detailed tutorial on
    [Multi-worker training with Keras](https://www.tensorflow.org/tutorials/distribute/multi_worker_with_keras).

*   Introduces experimental support for a new module named
    [`tf.experimental.numpy`](https://www.tensorflow.org/api_docs/python/tf/experimental/numpy)
    which is a NumPy-compatible API for writing TF programs. See the
    [detailed guide](https://www.tensorflow.org/guide/tf_numpy) to learn more.
    Additional details below.

*   Adds Support for
    [TensorFloat-32](https://blogs.nvidia.com/blog/2020/05/14/tensorfloat-32-precision-format/)
    on Ampere based GPUs. TensorFloat-32, or TF32 for short, is a math mode for
    NVIDIA Ampere based GPUs and is enabled by default.

*   A major refactoring of the internals of the Keras Functional API has been
    completed, that should improve the reliability, stability, and performance
    of constructing Functional models.

*   Keras mixed precision API
    [`tf.keras.mixed_precision`](https://www.tensorflow.org/api_docs/python/tf/keras/mixed_precision?version=nightly)
    is no longer experimental and allows the use of 16-bit floating point
    formats during training, improving performance by up to 3x on GPUs and 60%
    on TPUs. Please see below for additional details.

*   TensorFlow Profiler now supports profiling `MultiWorkerMirroredStrategy` and
    tracing multiple workers using the
    [sampling mode API](https://www.tensorflow.org/guide/profiler#profiling_apis).

*   TFLite Profiler for Android is available. See the detailed
    [guide](https://www.tensorflow.org/lite/performance/measurement#trace_tensorflow_lite_internals_in_android)
    to learn more.

*   TensorFlow pip packages are now built with CUDA11 and cuDNN 8.0.2.

## Breaking Changes

*   TF Core:

    *   Certain float32 ops run in lower precision on Ampere based GPUs,
        including matmuls and convolutions, due to the use of
        [TensorFloat-32](https://blogs.nvidia.com/blog/2020/05/14/tensorfloat-32-precision-format/).
        Specifically, inputs to such ops are rounded from 23 bits of precision
        to 10 bits of precision. This is unlikely to cause issues in practice
        for deep learning models. In some cases, TensorFloat-32 is also used for
        complex64 ops. TensorFloat-32 can be disabled by running
        `tf.config.experimental.enable_tensor_float_32_execution(False)`.
    *   The byte layout for string tensors across the C-API has been updated to
        match TF Core/C++; i.e., a contiguous array of
        `tensorflow::tstring`/`TF_TString`s.
    *   C-API functions `TF_StringDecode`, `TF_StringEncode`, and
        `TF_StringEncodedSize` are no longer relevant and have been removed; see
        `core/platform/ctstring.h` for string access/modification in C.
    *   `tensorflow.python`, `tensorflow.core` and `tensorflow.compiler` modules
        are now hidden. These modules are not part of TensorFlow public API.
    *   `tf.raw_ops.Max` and `tf.raw_ops.Min` no longer accept inputs of type
        `tf.complex64` or `tf.complex128`, because the behavior of these ops is
        not well defined for complex types.
    *   XLA:CPU and XLA:GPU devices are no longer registered by default. Use
        `TF_XLA_FLAGS=--tf_xla_enable_xla_devices` if you really need them, but
        this flag will eventually be removed in subsequent releases.

*   `tf.keras`:

    *   The `steps_per_execution` argument in `model.compile()` is no longer
        experimental; if you were passing `experimental_steps_per_execution`,
        rename it to `steps_per_execution` in your code. This argument controls
        the number of batches to run during each `tf.function` call when calling
        `model.fit()`. Running multiple batches inside a single `tf.function`
        call can greatly improve performance on TPUs or small models with a
        large Python overhead.
    *   A **major refactoring** of the internals of the Keras Functional API may
        affect code that is relying on certain internal details:
    *   Code that uses `isinstance(x, tf.Tensor)` instead of `tf.is_tensor` when
        checking Keras symbolic inputs/outputs should switch to using
        `tf.is_tensor`.
    *   Code that is overly dependent on the exact names attached to symbolic
        tensors (e.g. assumes there will be ":0" at the end of the inputs,
        treats names as unique identifiers instead of using `tensor.ref()`,
        etc.) may break.
    *   Code that uses full path for `get_concrete_function` to trace Keras
        symbolic inputs directly should switch to building matching
        `tf.TensorSpec`s directly and tracing the `TensorSpec` objects.
    *   Code that relies on the exact number and names of the op layers that
        TensorFlow operations were converted into may have changed.
    *   Code that uses `tf.map_fn`/`tf.cond`/`tf.while_loop`/control flow as op
        layers and happens to work before TF 2.4. These will explicitly be
        unsupported now. Converting these ops to Functional API op layers was
        unreliable before TF 2.4, and prone to erroring incomprehensibly or
        being silently buggy.
    *   Code that directly asserts on a Keras symbolic value in cases where ops
        like `tf.rank` used to return a static or symbolic value depending on if
        the input had a fully static shape or not. Now these ops always return
        symbolic values.
    *   Code already susceptible to leaking tensors outside of graphs becomes
        slightly more likely to do so now.
    *   Code that tries directly getting gradients with respect to symbolic
        Keras inputs/outputs. Use `GradientTape` on the actual Tensors passed to
        the already-constructed model instead.
    *   Code that requires very tricky shape manipulation via converted op
        layers in order to work, where the Keras symbolic shape inference proves
        insufficient.
    *   Code that tries manually walking a `tf.keras.Model` layer by layer and
        assumes layers only ever have one positional argument. This assumption
        doesn't hold true before TF 2.4 either, but is more likely to cause
        issues now.
    *   Code that manually enters `keras.backend.get_graph()` before building a
        functional model is no longer needed.
    *   Start enforcing input shape assumptions when calling Functional API
        Keras models. This may potentially break some users, in case there is a
        mismatch between the shape used when creating `Input` objects in a
        Functional model, and the shape of the data passed to that model. You
        can fix this mismatch by either calling the model with correctly-shaped
        data, or by relaxing `Input` shape assumptions (note that you can pass
        shapes with `None` entries for axes that are meant to be dynamic). You
        can also disable the input checking entirely by setting
        `model.input_spec = None`.
    *   Several changes have been made to
        `tf.keras.mixed_precision.experimental`. Note that it is now recommended
        to use the non-experimental `tf.keras.mixed_precision` API.
    *   `AutoCastVariable.dtype` now refers to the actual variable dtype, not
        the dtype it will be casted to.
    *   When mixed precision is enabled, `tf.keras.layers.Embedding` now outputs
        a float16 or bfloat16 tensor instead of a float32 tensor.
    *   The property
        `tf.keras.mixed_precision.experimental.LossScaleOptimizer.loss_scale` is
        now a tensor, not a `LossScale` object. This means to get a loss scale
        of a `LossScaleOptimizer` as a tensor, you must now call
        `opt.loss_scale`instead of `opt.loss_scale()`.
    *   The property `should_cast_variables` has been removed from
        `tf.keras.mixed_precision.experimental.Policy`
    *   When passing a `tf.mixed_precision.experimental.DynamicLossScale` to
        `tf.keras.mixed_precision.experimental.LossScaleOptimizer`, the
        `DynamicLossScale`'s multiplier must be 2.
    *   When passing a `tf.mixed_precision.experimental.DynamicLossScale` to
        `tf.keras.mixed_precision.experimental.LossScaleOptimizer`, the weights
        of the `DynanmicLossScale` are copied into the `LossScaleOptimizer`
        instead of being reused. This means modifying the weights of the
        `DynamicLossScale` will no longer affect the weights of the
        LossScaleOptimizer, and vice versa.
    *   The global policy can no longer be set to a non-floating point policy in
        `tf.keras.mixed_precision.experimental.set_policy`
    *   In `Layer.call`, `AutoCastVariable`s will no longer be casted within
        `MirroredStrategy.run` or `ReplicaContext.merge_call`. This is because a
        thread local variable is used to determine whether `AutoCastVariable`s
        are casted, and those two functions run with a different thread. Note
        this only applies if one of these two functions is called within
        `Layer.call`; if one of those two functions calls `Layer.call`,
        `AutoCastVariable`s will still be casted.

*   `tf.data`:

    *   `tf.data.experimental.service.DispatchServer` now takes a config tuple
        instead of individual arguments. Usages should be updated to
        `tf.data.experimental.service.DispatchServer(dispatcher_config)`.
    *   `tf.data.experimental.service.WorkerServer` now takes a config tuple
        instead of individual arguments. Usages should be updated to
        `tf.data.experimental.service.WorkerServer(worker_config)`.

*   `tf.distribute`:

    *   Removes `tf.distribute.Strategy.experimental_make_numpy_dataset`. Please
        use `tf.data.Dataset.from_tensor_slices` instead.
    *   Renames `experimental_hints` in
        `tf.distribute.StrategyExtended.reduce_to`,
        `tf.distribute.StrategyExtended.batch_reduce_to`,
        `tf.distribute.ReplicaContext.all_reduce` to `options`.
    *   Renames `tf.distribute.experimental.CollectiveHints` to
        `tf.distribute.experimental.CommunicationOptions`.
    *   Renames `tf.distribute.experimental.CollectiveCommunication` to
        `tf.distribute.experimental.CommunicationImplementation`.
    *   Renames
        `tf.distribute.Strategy.experimental_distribute_datasets_from_function`
        to `distribute_datasets_from_function` as it is no longer experimental.
    *   Removes `tf.distribute.Strategy.experimental_run_v2` method, which was
        deprecated in TF 2.2.

*   `tf.lite`:

    *   `tf.quantization.quantize_and_dequantize_v2` has been introduced, which
        updates the gradient definition for quantization which is outside the
        range to be 0. To simulate the V1 the behavior of
        `tf.quantization.quantize_and_dequantize(...)` use
        `tf.grad_pass_through(tf.quantization.quantize_and_dequantize_v2)(...)`.

*   Building TensorFlow:

    *   Windows platform builds: TensorFlow on Windows under MSVC is now built
        with `--copt=/experimental:preprocessor
        --host_copt=/experimental:preprocessor` (see `.bazelrc` for more
        details). Builds including TensorFlow may fail with unexpected syntax
        errors if these flags are absent. See also
        [this thread on SIG Build](https://groups.google.com/a/tensorflow.org/g/build/c/LbAw8RILvTg/m/ttnuhYU2BgAJ).

## Known Caveats

*   `tf.keras.mixed_precision`
    *   When using mixed precision, calling `RMSprop.apply_gradients` or
        `Nadam.apply_gradients` outside a `tf.function` does not work and will
        raise the AttributeError "Tensor.op is meaningless when eager execution
        is enabled". See this
        [issue](https://github.com/tensorflow/tensorflow/issues/45536) for
        details and a workaround.

## Bug Fixes and Other Changes

### TF Core:

*   Introduces experimental support for a new module named
    [`tf.experimental.numpy`](https://www.tensorflow.org/api_docs/python/tf/experimental/numpy),
    which is a NumPy-compatible API for writing TF programs. This module
    provides class `ndarray`, which mimics the `ndarray` class in NumPy, and
    wraps an immutable `tf.Tensor` under the hood. A subset of NumPy functions
    (e.g. `numpy.add`) are provided. Their inter-operation with TF facilities is
    seamless in most cases. See
    [tensorflow/python/ops/numpy_ops/README.md](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/python/ops/numpy_ops/README.md)
    for details of what operations are supported and what are the differences
    from NumPy.
*   `tf.types.experimental.TensorLike` is a new `Union` type that can be used as
    type annotation for variables representing a Tensor or a value that can be
    converted to Tensor by `tf.convert_to_tensor`.
*   Calling ops with a python constants or numpy values is now consistent with
    tf.convert_to_tensor behavior. This avoids operations like tf.reshape
    truncating inputs such as from int64 to int32.
*   Adds `tf.sparse.map_values` to apply a function to the `.value`s of
    `SparseTensor` arguments.
*   The Python bitwise operators for `Tensor` (`__and__`, `__or__`, `__xor__`
    and `__invert__` now support non-`bool` arguments and apply the
    corresponding bitwise ops. `bool` arguments continue to be supported and
    dispatch to logical ops. This brings them more in line with Python and NumPy
    behavior.
*   Adds `tf.SparseTensor.with_values`. This returns a new SparseTensor with the
    same sparsity pattern, but with new provided values. It is similar to the
    `with_values` function of `RaggedTensor`.
*   Adds `StatelessCase` op, and uses it if none of case branches has stateful
    ops.
*   Adds `tf.config.experimental.get_memory_usage` to return total memory usage
    of the device.
*   Adds gradients for `RaggedTensorToVariant` and `RaggedTensorFromVariant`.
*   Improve shape inference of nested function calls by supporting constant
    folding across Arg nodes which makes more static values available to shape
    inference functions.
*   `tf.debugging`:
    *   `tf.debugging.assert_shapes()` now works on `SparseTensor`s (Fixes
        [#36268](https://github.com/tensorflow/tensorflow/issues/36268)).
*   GPU
    *   Adds Support for
        [TensorFloat-32](https://blogs.nvidia.com/blog/2020/05/14/tensorfloat-32-precision-format/)
        on Ampere based GPUs.TensorFloat-32, or TF32 for short, is a math mode
        for NVIDIA Ampere based GPUs which causes certain float32 ops, such as
        matrix multiplications and convolutions, to run much faster on Ampere
        GPUs but with reduced precision. This reduced precision has not been
        found to effect convergence quality of deep learning models in practice.
        TensorFloat-32 is enabled by default, but can be disabled with
        `tf.config.experimental.enable_tensor_float_32_execution`.
*   `tf.math`:
    *   Adds `tf.math.erfcinv`, the inverse to `tf.math.erfc`.
*   `tf.nn`:
    *   `tf.nn.max_pool2d` now supports explicit padding.
*   `tf.image`:
    *   Adds deterministic `tf.image.stateless_random_*` functions for each
        `tf.image.random_*` function. Added a new op
        `stateless_sample_distorted_bounding_box` which is a deterministic
        version of `sample_distorted_bounding_box` op. Given the same seed,
        these stateless functions/ops produce the same results independent of
        how many times the function is called, and independent of global seed
        settings.
    *   Adds deterministic `tf.image.resize` backprop CUDA kernels for
        `method=ResizeMethod.BILINEAR` (the default method). Enable by setting
        the environment variable `TF_DETERMINISTIC_OPS` to `"true"` or `"1"`.
*   `tf.print`:
    *   Bug fix in `tf.print()` with `OrderedDict` where if an `OrderedDict`
        didn't have the keys sorted, the keys and values were not being printed
        in accordance with their correct mapping.
*   `tf.train.Checkpoint`:
    *   Now accepts a `root` argument in the initialization, which generates a
        checkpoint with a root object. This allows users to create a
        `Checkpoint` object that is compatible with Keras `model.save_weights()`
        and `model.load_weights`. The checkpoint is also compatible with the
        checkpoint saved in the `variables/` folder in the SavedModel.
    *   When restoring, `save_path` can be a path to a SavedModel. The function
        will automatically find the checkpoint in the SavedModel.

### `tf.data`:

*   Adds new `tf.data.experimental.service.register_dataset` and
    `tf.data.experimental.service.from_dataset_id` APIs to enable one process to
    register a dataset with the tf.data service, and another process to consume
    data from the dataset.
*   Adds support for dispatcher fault tolerance. To enable fault tolerance,
    configure a `work_dir` when running your dispatcher server and set
    `dispatcher_fault_tolerance=True`. The dispatcher will store its state to
    `work_dir`, so that on restart it can continue from its previous state after
    restart.
*   Adds support for sharing dataset graphs via shared filesystem instead of
    over RPC. This reduces load on the dispatcher, improving performance of
    distributing datasets. For this to work, the dispatcher's `work_dir` must be
    accessible from workers. If the worker fails to read from the `work_dir`, it
    falls back to using RPC for dataset graph transfer.
*   Adds support for a new "distributed_epoch" processing mode. This processing
    mode distributes a dataset across all tf.data workers, instead of having
    each worker process the full dataset. See
    [the tf.data service docs](https://www.tensorflow.org/api_docs/python/tf/data/experimental/service#understand_processing_mode)
    to learn more.
*   Adds optional `exclude_cols` parameter to CsvDataset. This parameter is the
    complement of `select_cols`; at most one of these should be specified.
*   We have implemented an optimization which reorders data-discarding
    transformations such as `take` and `shard` to happen earlier in the dataset
    when it is safe to do so. The optimization can be disabled via the
    `experimental_optimization.reorder_data_discarding_ops` dataset option.
*   `tf.data.Options` were previously immutable and can now be overridden.
*   `tf.data.Dataset.from_generator` now supports Ragged and Sparse tensors with
    a new `output_signature` argument, which allows `from_generator` to produce
    any type describable by a `tf.TypeSpec`.
*   `tf.data.experimental.AUTOTUNE` is now available in the core API as
    `tf.data.AUTOTUNE`.

### `tf.distribute`:

*   Introduces experimental support for asynchronous training of models via
    `tf.distribute.experimental.ParameterServerStrategy`:
    *   Replaces the existing
        `tf.distribute.experimental.ParameterServerStrategy` symbol with a new
        class that is for parameter server training in TF2. Usage of the old
        symbol, usually with Estimator API, should be **replaced** with
        [`tf.compat.v1.distribute.experimental.ParameterServerStrategy`].
    *   Added `tf.distribute.experimental.coordinator.*` namespace, including
        the main API `ClusterCoordinator` for coordinating the training cluster,
        the related data structure `RemoteValue` and `PerWorkerValue`.
*   `MultiWorkerMirroredStrategy`](https://www.tensorflow.org/api_docs/python/tf/distribute/MultiWorkerMirroredStrategy)
    is now a stable API and is no longer considered experimental. Some of the
    major improvements involve handling peer failure and many bug fixes. Please
    check out the detailed tutorial on
    [Multi-worer training with Keras](https://www.tensorflow.org/tutorials/distribute/multi_worker_with_keras).
*   Adds `tf.distribute.Strategy.gather` and
    `tf.distribute.ReplicaContext.all_gather` APIs to support gathering dense
    distributed values.
*   Fixes various issues with saving a distributed model.

### `tf.keras`:

*   Improvements from the Functional API refactoring:
    *   Functional model construction does not need to maintain a global
        workspace graph, removing memory leaks especially when building many
        models or very large models.
    *   Functional model construction should be ~8-10% faster on average.
    *   Functional models can now contain non-symbolic values in their call
        inputs inside of the first positional argument.
    *   Several classes of TF ops that were not reliably converted to Keras
        layers during functional API construction should now work,
        e.g.`tf.image.ssim_multiscale`
    *   Error messages when Functional API construction goes wrong (and when ops
        cannot be converted to Keras layers automatically) should be clearer and
        easier to understand.
*   `Optimizer.minimize` can now accept a loss `Tensor` and a `GradientTape` as
    an alternative to accepting a `callable` loss.
*   Adds `beta` hyperparameter to
    [FTRL](https://www.tensorflow.org/api_docs/python/tf/keras/optimizers/Ftrl)
    optimizer classes (Keras and others) to match
    [FTRL paper](https://research.google.com/pubs/archive/41159.pdf).
*   `Optimizer.__init__` now accepts a `gradient_aggregator` to allow for
    customization of how gradients are aggregated across devices, as well as
    `gradients_transformers` to allow for custom gradient transformations (such
    as gradient clipping).
*   Improvements to Keras preprocessing layers:
    *   TextVectorization can now accept a vocabulary list or file as an init
        arg.
    *   Normalization can now accept mean and variance values as init args.
*   In `Attention` and `AdditiveAttention` layers, the `call()` method now
    accepts a `return_attention_scores` argument. When set to True, the layer
    returns the attention scores as an additional output argument.
*   Adds `tf.metrics.log_cosh` and `tf.metrics.logcosh` API entrypoints with the
    same implementation as their `tf.losses` equivalent.
*   For Keras model, the individual call of `Model.evaluate` uses no cached data
    for evaluation, while `Model.fit` uses cached data when `validation_data`
    arg is provided for better performance.
*   Adds a `save_traces` argument to `model.save`/ `tf.keras.models.save_model`
    which determines whether the SavedModel format stores the Keras model/layer
    call functions. The traced functions allow Keras to revive custom models and
    layers without the original class definition, but if this isn't required the
    tracing can be disabled with the added option.
*   The `tf.keras.mixed_precision` API is now non-experimental. The
    non-experimental API differs from the experimental API in several ways.
    *   `tf.keras.mixed_precision.Policy` no longer takes in a
        `tf.mixed_precision. experimental.LossScale` in the constructor, and no
        longer has a `LossScale` associated with it. Instead, `Model.compile`
        will automatically wrap the optimizer with a `LossScaleOptimizer` using
        dynamic loss scaling if `Policy.name` is "mixed_float16".
    *   `tf.keras.mixed_precision.LossScaleOptimizer`'s constructor takes in
        different arguments. In particular, it no longer takes in a `LossScale`,
        and there is no longer a `LossScale` associated with the
        `LossScaleOptimizer`. Instead, `LossScaleOptimizer` directly implements
        fixed or dynamic loss scaling. See the documentation of
        [`tf.keras.mixed_precision.experimental.LossScaleOptimizer`](https://www.tensorflow.org/api_docs/python/tf/keras/mixed_precision/experimental/LossScaleOptimizer?version=nightly)
        for details on the differences between the experimental
        `LossScaleOptimizer` and the new non-experimental `LossScaleOptimizer`.
    *   `tf.mixed_precision.experimental.LossScale` and its subclasses are
        deprecated, as all of its functionality now exists within
        `tf.keras.mixed_precision.LossScaleOptimizer`

### `tf.lite`:

*   `TFLiteConverter`:
    *   Support optional flags `inference_input_type` and
        `inference_output_type` for full integer quantized models. This allows
        users to modify the model input and output type to integer types
        (`tf.int8`, `tf.uint8`) instead of defaulting to float type
        (`tf.float32`).
*   NNAPI
    *   Adds NNAPI Delegation support for requantization use cases by converting
        the operation into a dequantize-quantize pair.
    *   Removes deprecated `Interpreter.setUseNNAPI(boolean)` Java API. Use
        `Interpreter.Options.setUseNNAPI` instead.
    *   Deprecates `Interpreter::UseNNAPI(bool)` C++ API. Use `NnApiDelegate()`
        and related delegate configuration methods directly.
    *   Deprecates `Interpreter::SetAllowFp16PrecisionForFp32(bool)` C++ API.
        Prefer controlling this via delegate options, e.g.
        `tflite::StatefulNnApiDelegate::Options::allow_fp16'
        or`TfLiteGpuDelegateOptionsV2::is_precision_loss_allowed`.
*   GPU
    *   GPU acceleration now supports quantized models by default
*   `DynamicBuffer::AddJoinedString()` will now add a separator if the first
    string to be joined is empty.
*   Adds support for cumulative sum (cumsum), both as builtin op and MLIR
    conversion.

### `TensorRT`

*   Issues a warning when the `session_config` parameter for the TF1 converter
    is used or the `rewrite_config_template` field in the TF2 converter
    parameter object is used.

### TPU Enhancements:

*   Adds support for the `beta` parameter of the FTRL optimizer for TPU
    embeddings. Users of other TensorFlow platforms can implement equivalent
    behavior by adjusting the `l2` parameter.

### XLA Support:

*   xla.experimental.compile is deprecated, use
    `tf.function(experimental_compile=True)` instead.
*   Adds `tf.function.experimental_get_compiler_ir` which returns compiler IR
    (currently 'hlo' and 'optimized_hlo') for given input for given function.

### Security:

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`,
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    *   [CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    *   [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    *   [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193)
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    *   [CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    *   [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195)
*   Fixes several vulnerabilities in `RaggedCountSparseOutput` and
    `SparseCountSparseOutput` operations
    *   [CVE-2020-15196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15196),
    *   [CVE-2020-15197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15197),
    *   [CVE-2020-15198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15198),
    *   [CVE-2020-15199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15199),
    *   [CVE-2020-15200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15200),
    *   [CVE-2020-15201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15201)
*   Fixes an integer truncation vulnerability in code using the work sharder
    API,
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`,
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode,
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`,
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation,
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite,
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite,
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    *   [CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    *   [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    *   [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211)
*   Fixes several vulnerabilities in TFLite implementation of segment sum
    *   [CVE-2020-15212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15212),
    *   [CVE-2020-15213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15213),
    *   [CVE-2020-15214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15214)
*   Fixes a segfault in `tf.quantization.quantize_and_dequantize`,
    ([CVE-2020-15265](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15265))
*   Fixes an undefined behavior float cast causing a crash,
    ([CVE-2020-15266](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15266))
*   Fixes a lack of validation in `tf.raw_ops.DataFormatVecPermute` and
    `tf.raw_ops.DataFormatDimMap` which can cause uninitialized memory access,
    read outside bounds of arrays, data corruption and segmentation faults
    ([CVE-2020-26267](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26267))
*   Fixes a crash caused by writing to read only memory region
    ([CVE-2020-26268](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26268))
*   Fixes a heap out of bounds access in filesystem globbing implementation
    ([CVE-2020-26269](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-26269))

### Other:

*   We have replaced uses of "whitelist" and "blacklist" with "allowlist" and
    "denylist" where possible. Please see
    [this list](https://developers.google.com/style/word-list#blacklist) for
    more context.
*   Adds `tf.config.experimental.mlir_bridge_rollout` which will help us rollout
    the new MLIR TPU bridge.
*   Adds `tf.experimental.register_filesystem_plugin` to load modular filesystem
    plugins from Python

## Thanks to our Contributors

This release contains contributions from many people at Google as well as the
following external contributors:

8bitmp3, aaa.jq, Abhineet Choudhary, Abolfazl Shahbazi, acxz, Adam Hillier,
Adrian Garcia Badaracco, Ag Ramesh, ahmedsabie, Alan Anderson, Alexander Grund,
Alexandre Lissy, Alexey Ivanov, Amedeo Cavallo, anencore94, Aniket Kumar Singh,
Anthony Platanios, Ashwin Phadke, Balint Cristian, Basit Ayantunde, bbbboom, Ben
Barsdell, Benjamin Chetioui, Benjamin Peterson, bhack, Bhanu Prakash Bandaru
Venkata, Biagio Montaruli, Brent M. Spell, bubblebooy, bzhao, cfRod, Cheng Chen,
Cheng(Kit) Chen, Chris Tessum, Christian, chuanqiw, codeadmin_peritiae,
COTASPAR, CuiYifeng, danielknobe, danielyou0230, dannyfriar, daria,
DarrenZhang01, Denisa Roberts, dependabot[bot], Deven Desai, Dmitry Volodin,
Dmitry Zakharov, drebain, Duncan Riach, Eduard Feicho, Ehsan Toosi, Elena
Zhelezina, emlaprise2358, Eugene Kuznetsov, Evaderan-Lab, Evgeniy Polyakov,
Fausto Morales, Felix Johnny, fo40225, Frederic Bastien, Fredrik Knutsson,
fsx950223, Gaurav Singh, Gauri1 Deshpande, George Grzegorz Pawelczak, gerbauz,
Gianluca Baratti, Giorgio Arena, Gmc2, Guozhong Zhuang, Hannes Achleitner,
Harirai, HarisWang, Harsh188, hedgehog91, Hemal Mamtora, Hideto Ueno, Hugh Ku,
Ian Beauregard, Ilya Persky, jacco, Jakub Beránek, Jan Jongboom, Javier Montalt
Tordera, Jens Elofsson, Jerry Shih, jerryyin, jgehw, Jinjing Zhou, jma, jmsmdy,
Johan Nordström, John Poole, Jonah Kohn, Jonathan Dekhtiar, jpodivin, Jung Daun,
Kai Katsumata, Kaixi Hou, Kamil Rakoczy, Kaustubh Maske Patil, Kazuaki Ishizaki,
Kedar Sovani, Koan-Sin Tan, Koki Ibukuro, Krzysztof Laskowski, Kushagra Sharma,
Kushan Ahmadian, Lakshay Tokas, Leicong Li, levinxo, Lukas Geiger, Maderator,
Mahmoud Abuzaina, Mao Yunfei, Marius Brehler, markf, Martin Hwasser, Martin
Kubovčík, Matt Conley, Matthias, mazharul, mdfaijul, Michael137, MichelBr,
Mikhail Startsev, Milan Straka, Ml-0, Myung-Hyun Kim, Måns Nilsson, Nathan
Luehr, ngc92, nikochiko, Niranjan Hasabnis, nyagato_00, Oceania2018, Oleg Guba,
Ongun Kanat, OscarVanL, Patrik Laurell, Paul Tanger, Peter Sobot, Phil Pearl,
PlusPlusUltra, Poedator, Prasad Nikam, Rahul-Kamat, Rajeshwar Reddy T,
redwrasse, Rickard, Robert Szczepanski, Rohan Lekhwani, Sam Holt, Sami Kama,
Samuel Holt, Sandeep Giri, sboshin, Sean Settle, settle, Sharada Shiddibhavi,
Shawn Presser, ShengYang1, Shi,Guangyong, Shuxiang Gao, Sicong Li, Sidong-Wei,
Srihari Humbarwadi, Srinivasan Narayanamoorthy, Steenu Johnson, Steven Clarkson,
stjohnso98, Tamas Bela Feher, Tamas Nyiri, Tarandeep Singh, Teng Lu, Thibaut
Goetghebuer-Planchon, Tim Bradley, Tomasz Strejczek, Tongzhou Wang, Torsten
Rudolf, Trent Lo, Ty Mick, Tzu-Wei Sung, Varghese, Jojimon, Vignesh Kothapalli,
Vishakha Agrawal, Vividha, Vladimir Menshakov, Vladimir Silyaev, VoVAllen, Võ
Văn Nghĩa, wondertx, xiaohong1031, Xiaoming (Jason) Cui, Xinan Jiang, Yair
Ehrenwald, Yasir Modak, Yasuhiro Matsumoto, Yimei Sun, Yiwen Li, Yixing, Yoav
Ramon, Yong Tang, Yong Wu, yuanbopeng, Yunmo Koo, Zhangqiang, Zhou Peng,
ZhuBaohe, zilinzhu, zmx

# Release 2.3.1

## Bug Fixes and Other Changes

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    ([CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193))
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    ([CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195))
*   Fixes several vulnerabilities in `RaggedCountSparseOutput` and
    `SparseCountSparseOutput` operations
    ([CVE-2020-15196](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15196),
    [CVE-2020-15197](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15197),
    [CVE-2020-15198](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15198),
    [CVE-2020-15199](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15199),
    [CVE-2020-15200](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15200),
    [CVE-2020-15201](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15201))
*   Fixes an integer truncation vulnerability in code using the work sharder API
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    ([CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211))
*   Fixes several vulnerabilities in TFLite implementation of segment sum
    ([CVE-2020-15212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15212),
    [CVE-2020-15213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15213),
    [CVE-2020-15214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15214))
*   Updates `sqlite3` to `3.33.00` to handle
    [CVE-2020-15358](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15358).
*   Fixes deprecated usage of `collections` API
*   Removes `scipy` dependency from `setup.py` since TensorFlow does not need it
    to install the pip package

# Release 2.2.1

## Bug Fixes and Other Changes

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    ([CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193))
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    ([CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195))
*   Fixes an integer truncation vulnerability in code using the work sharder API
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    ([CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211))
*   Fixes several vulnerabilities in TFLite implementation of segment sum
    ([CVE-2020-15212](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15212),
    [CVE-2020-15213](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15213),
    [CVE-2020-15214](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15214))
*   Updates `sqlite3` to `3.33.00` to handle
    [CVE-2020-9327](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-9327),
    [CVE-2020-11655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11655),
    [CVE-2020-11656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11656),
    [CVE-2020-13434](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13434),
    [CVE-2020-13435](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13435),
    [CVE-2020-13630](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13630),
    [CVE-2020-13631](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13631),
    [CVE-2020-13871](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13871),
    and
    [CVE-2020-15358](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15358).
*   Fixes deprecated usage of `collections` API
*   Removes `scipy` dependency from `setup.py` since TensorFlow does not need it
    to install the pip package

# Release 2.1.2

## Bug Fixes and Other Changes

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    ([CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193))
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    ([CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195))
*   Fixes an integer truncation vulnerability in code using the work sharder API
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    ([CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211))
*   Updates `sqlite3` to `3.33.00` to handle
    [CVE-2020-9327](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-9327),
    [CVE-2020-11655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11655),
    [CVE-2020-11656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11656),
    [CVE-2020-13434](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13434),
    [CVE-2020-13435](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13435),
    [CVE-2020-13630](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13630),
    [CVE-2020-13631](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13631),
    [CVE-2020-13871](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13871),
    and
    [CVE-2020-15358](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15358).
*   Removes `scipy` dependency from `setup.py` since TensorFlow does not need it
    to install the pip package
*   Switches ROCM builds to use ROCM 3.7

# Release 2.0.3

## Bug Fixes and Other Changes

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    ([CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193))
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    ([CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195))
*   Fixes an integer truncation vulnerability in code using the work sharder API
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    ([CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211))
*   Updates `sqlite3` to `3.33.00` to handle
    [CVE-2020-9327](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-9327),
    [CVE-2020-11655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11655),
    [CVE-2020-11656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11656),
    [CVE-2020-13434](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13434),
    [CVE-2020-13435](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13435),
    [CVE-2020-13630](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13630),
    [CVE-2020-13631](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13631),
    [CVE-2020-13871](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13871),
    and
    [CVE-2020-15358](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15358).
*   Pins `numpy` to 1.18.5 to prevent ABI breakage when compiling code that uses
    both NumPy and TensorFlow headers.

# Release 1.15.4

## Bug Fixes and Other Changes

*   Fixes an undefined behavior causing a segfault in `tf.raw_ops.Switch`
    ([CVE-2020-15190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15190))
*   Fixes three vulnerabilities in conversion to DLPack format
    ([CVE-2020-15191](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15191),
    [CVE-2020-15192](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15192),
    [CVE-2020-15193](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15193))
*   Fixes two vulnerabilities in `SparseFillEmptyRowsGrad`
    ([CVE-2020-15194](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15194),
    [CVE-2020-15195](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15195))
*   Fixes an integer truncation vulnerability in code using the work sharder API
    ([CVE-2020-15202](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15202))
*   Fixes a format string vulnerability in `tf.strings.as_string`
    ([CVE-2020-15203](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15203))
*   Fixes segfault raised by calling session-only ops in eager mode
    ([CVE-2020-15204](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15204))
*   Fixes data leak and potential ASLR violation from `tf.raw_ops.StringNGrams`
    ([CVE-2020-15205](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15205))
*   Fixes segfaults caused by incomplete `SavedModel` validation
    ([CVE-2020-15206](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15206))
*   Fixes a data corruption due to a bug in negative indexing support in TFLite
    ([CVE-2020-15207](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15207))
*   Fixes a data corruption due to dimension mismatch in TFLite
    ([CVE-2020-15208](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15208))
*   Fixes several vulnerabilities in TFLite saved model format
    ([CVE-2020-15209](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15209),
    [CVE-2020-15210](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15210),
    [CVE-2020-15211](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15211))
*   Updates `sqlite3` to `3.33.00` to handle
    [CVE-2020-9327](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-9327),
    [CVE-2020-11655](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11655),
    [CVE-2020-11656](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-11656),
    [CVE-2020-13434](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13434),
    [CVE-2020-13435](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13435),
    [CVE-2020-13630](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13630),
    [CVE-2020-13631](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13631),
    [CVE-2020-13871](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-13871),
    and
    [CVE-2020-15358](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-15358).
*   Fixes #41630 by including `max_seq_length` in CuDNN descriptor cache key
*   Pins `numpy` to 1.18.5 to prevent ABI breakage when compiling code that uses
    both NumPy and TensorFlow headers.

# Release 2.3.0

## Major Features and Improvements

*   `tf.data` adds two new mechanisms to solve input pipeline bottlenecks and
    save resources:

    *   [snapshot](https://www.tensorflow.org/api_docs/python/tf/data/experimental/snapshot)
    *   [tf.data service](https://www.tensorflow.org/api_docs/python/tf/data/experimental/service).

    In addition checkout the detailed
    [guide](https://www.tensorflow.org/guide/data_performance_analysis) for
    analyzing input pipeline performance with TF Profiler.

*   [`tf.distribute.TPUStrategy`](https://www.tensorflow.org/api_docs/python/tf/distribute/TPUStrategy)
    is now a stable API and no longer considered experimental for TensorFlow.
    (earlier `tf.distribute.experimental.TPUStrategy`).

*   [TF Profiler](https://www.tensorflow.org/guide/profiler) introduces two new
    tools: a memory profiler to visualize your model’s memory usage over time
    and a [python tracer](https://www.tensorflow.org/guide/profiler#events)
    which allows you to trace python function calls in your model. Usability
    improvements include better diagnostic messages and
    [profile options](https://tensorflow.org/guide/profiler#collect_performance_data)
    to customize the host and device trace verbosity level.

*   Introduces experimental support for Keras Preprocessing Layers API
    ([`tf.keras.layers.experimental.preprocessing.*`](https://www.tensorflow.org/api_docs/python/tf/keras/layers/experimental/preprocessing?version=nightly))
    to handle data preprocessing operations, with support for composite tensor
    inputs. Please see below for additional details on these layers.

*   TFLite now properly supports dynamic shapes during conversion and inference.
    We’ve also added opt-in support on Android and iOS for
    [XNNPACK](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/lite/delegates/xnnpack),
    a highly optimized set of CPU kernels, as well as opt-in support for
    [executing quantized models on the GPU](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/lite/g3doc/performance/gpu_advanced.md#running-quantized-models-experimental).

*   Libtensorflow packages are available in GCS starting this release. We have
    also started to
    [release a nightly version of these packages](https://github.com/tensorflow/tensorflow#official-builds).

*   The experimental Python API
    [`tf.debugging.experimental.enable_dump_debug_info()`](https://www.tensorflow.org/api_docs/python/tf/debugging/experimental/enable_dump_debug_info)
    now allows you to instrument a TensorFlow program and dump debugging
    information to a directory on the file system. The directory can be read and
    visualized by a new interactive dashboard in TensorBoard 2.3 called
    [Debugger V2](https://www.tensorflow.org/tensorboard/debugger_v2), which
    reveals the details of the TensorFlow program including graph structures,
    history of op executions at the Python (eager) and intra-graph levels, the
    runtime dtype, shape, and numerical composition of tensors, as well as their
    code locations.

## Breaking Changes

*   Increases the **minimum bazel version** required to build TF to **3.1.0**.
*   `tf.data`
    *   Makes the following (breaking) changes to the `tf.data`.
    *   C++ API: - `IteratorBase::RestoreInternal`,
        `IteratorBase::SaveInternal`, and `DatasetBase::CheckExternalState`
        become pure-virtual and subclasses are now expected to provide an
        implementation.
    *   The deprecated `DatasetBase::IsStateful` method is removed in favor of
        `DatasetBase::CheckExternalState`.
    *   Deprecated overrides of `DatasetBase::MakeIterator` and
        `MakeIteratorFromInputElement` are removed.
    *   The signature of `tensorflow::data::IteratorBase::SaveInternal` and
        `tensorflow::data::IteratorBase::SaveInput` has been extended with
        `SerializationContext` argument to enable overriding the default policy
        for the handling external state during iterator checkpointing. This is
        not a backwards compatible change and all subclasses of `IteratorBase`
        *need to be updated* accordingly.
*   `tf.keras`
    *   Add a new `BackupAndRestore` callback for handling distributed training
        failures & restarts. Please take a look at this
        [tutorial](https://www.tensorflow.org/tutorials/distribute/multi_worker_with_keras)
        for details on how to use the callback.
*   `tf.image.extract_glimpse` has been updated to correctly process the case
    where `centered=False` and `normalized=False`. This is a breaking change as
    the output is different from (incorrect) previous versions. Note this
    breaking change only impacts `tf.image.extract_glimpse` and
    `tf.compat.v2.image.extract_glimpse` API endpoints. The behavior of
    `tf.compat.v1.image.extract_glimpse` does not change. The behavior of
    existing C++ kernel `ExtractGlimpse` does not change either, so saved models
    using `tf.raw_ops.ExtractGlimpse` will not be impacted.

## Known Caveats

*   `tf.lite`
    *   Keras-based LSTM models must be converted with an explicit batch size in
        the input layer.

## Bug Fixes and Other Changes

### TF Core:

*   Set `tf2_behavior` to 1 to enable V2 for early loading cases.
*   Add `execute_fn_for_device function` to dynamically choose the
    implementation based on underlying device placement.
*   Eager:
    *   Add `reduce_logsumexp` benchmark with experiment compile.
    *   Give `EagerTensor`s a meaningful `__array__` implementation.
    *   Add another version of defun matmul for performance analysis.
*   `tf.function`/AutoGraph:
    *   `AutoGraph` now includes into TensorFlow loops any variables that are
        closed over by local functions. Previously, such variables were
        sometimes incorrectly ignored.
    *   functions returned by the `get_concrete_function` method of
        `tf.function` objects can now be called with arguments consistent with
        the original arguments or type specs passed to `get_concrete_function`.
        This calling convention is now the preferred way to use concrete
        functions with nested values and composite tensors. Please check the
        [guide](https://www.tensorflow.org/guide/concrete_function) for more
        details on `concrete_ function`.
    *   Update `tf.function`'s `experimental_relax_shapes` to handle composite
        tensors appropriately.
    *   Optimize `tf.function` invocation, by removing redundant list converter.
    *   `tf.function` will retrace when called with a different variable instead
        of simply using the `dtype` & `shape`.
    *   [Improve support](https://github.com/tensorflow/tensorflow/issues/33862)
        for dynamically-sized TensorArray inside `tf.function`.
*   `tf.math`:
    *   Narrow down `argmin`/`argmax` contract to always return the smallest
        index for ties.
    *   `tf.math.reduce_variance` and `tf.math.reduce_std` return correct
        computation for complex types and no longer support integer types.
    *   Add Bessel functions of order 0,1 to `tf.math.special`.
    *   `tf.divide` now always returns a tensor to be consistent with
        documentation and other APIs.
*   `tf.image`:
    *   Replaced
        [`tf.image.non_max_suppression_padded`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/image/non_max_suppression_padded?hl=en)
        with a new implementation that supports batched inputs, which is
        considerably faster on TPUs and GPUs. Boxes with area=0 will be ignored.
        Existing usage with single inputs should still work as before.
*   `tf.linalg`
    *   Add `tf.linalg.banded_triangular_solve`.
*   `tf.random`:
    *   Add `tf.random.stateless_parameterized_truncated_normal`.
*   `tf.ragged`:
    *   Add `tf.ragged.cross` and `tf.ragged.cross_hashed` operations.
*   `tf.RaggedTensor`:
    *   `RaggedTensor.to_tensor()` now preserves static shape.
    *   Add `tf.strings.format()` and `tf.print()` to support RaggedTensors.
*   `tf.saved_model`:
    *   `@tf.function` from SavedModel no longer ignores args after a
        `RaggedTensor` when selecting the concrete function to run.
    *   Fix save model issue for ops with a list of functions.
    *   Add `tf.saved_model.LoadOptions` with
        [`experimental_io_device`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/saved_model/LoadOptions?hl=en)
        as arg with default value `None` to choose the I/O device for loading
        models and weights.
    *   Update `tf.saved_model.SaveOptions` with
        [`experimental_io_device`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/saved_model/SaveOptions?hl=en)
        as arg with default value `None` to choose the I/O device for saving
        models and weights.
    *   Mutable tables now restore checkpointed values when loaded from
        SavedModel.
    *   The user object metadata field in the SavedModel proto has been
        deprecated as part of the updates to Keras SavedModel. Keras was the
        only consumer of this field prior to the update.
*   GPU
    *   TF 2.3 includes PTX kernels only for
        [compute capability](https://developer.nvidia.com/cuda-gpus) 7.0 to
        reduce the TF pip binary size. Earlier releases included PTX for a
        variety of older compute capabilities.
    *   Remove environmental variable `TF_USE_CUDNN`.
*   Others
    *   Retain parent namescope for ops added inside
        `tf.while_loop`/`tf.cond`/`tf.switch_case`.
    *   Update `tf.vectorized_map` to support vectorizing `tf.while_loop` and
        TensorList operations.
    *   `tf.custom_gradient` can now be applied to functions that accept nested
        structures of `tensors` as inputs (instead of just a list of tensors).
        Note that Python structures such as tuples and lists now won't be
        treated as tensors, so if you still want them to be treated that way,
        you need to wrap them with `tf.convert_to_tensor`.
    *   No lowering on gradient case op when input is `DeviceIndex` op.
    *   Extend the ragged version of `tf.gather` to support `batch_dims` and
        `axis` args.
    *   Update `tf.map_fn` to support RaggedTensors and SparseTensors.
    *   Deprecate `tf.group`. It is not useful in eager mode.
    *   Add CPU and GPU implementation of modified variation of
        [`FTRL`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/raw_ops/ApplyFtrl)/[`FTRLV2`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/raw_ops/ApplyFtrlV2)
        that can triggerred by `multiply_linear_by_lr` allowing a learning rate
        of zero.

### `tf.data`:

*   `tf.data.experimental.dense_to_ragged_batch` works correctly with tuples.
*   `tf.data.experimental.dense_to_ragged_batch` to output variable ragged rank.
*   `tf.data.experimental.cardinality` is now a method on `tf.data.Dataset`.
*   `tf.data.Dataset` now supports `len(Dataset)` when the cardinality is
    finite.

### `tf.distribute`:

*   Expose experimental
    [`tf.distribute.DistributedDataset`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/distribute/DistributedDataset?hl=en)
    and
    [`tf.distribute.DistributedIterator`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/distribute/DistributedIterator)
    to distribute input data when using `tf.distribute` to scale training on
    multiple devices.
    *   Added a
        [`get_next_as_optional`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/distribute/DistributedIterator?hl=en#get_next_as_optional)
        method for
        [`tf.distribute.DistributedIterator`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/distribute/DistributedIterator?hl=en)
        class to return a `tf.experimental.Optional` instance that contains the
        next value for all replicas or none instead of raising an out of range
        error. Also see *new*
        [guide on input distribution](https://www.tensorflow.org/tutorials/distribute/input).
*   Allow var.assign on MirroredVariables with aggregation=NONE in replica
    context. Previously this would raise an error. We now allow this because
    many users and library writers find using `.assign` in replica context to be
    more convenient, instead of having to use `Strategy.extended.update` which
    was the previous way of updating variables in this situation.
*   `tf.distribute.experimental.MultiWorkerMirroredStrategy` adds support for
    partial batches. Workers running out of data now continue to participate in
    the training with empty inputs, instead of raising an error. Learn more
    about
    [partial batches here](https://www.tensorflow.org/tutorials/distribute/input#partial_batches).
*   Improve the performance of reading metrics eagerly under
    `tf.distribute.experimental.MultiWorkerMirroredStrategy`.
*   Fix the issue that `strategy.reduce()` inside `tf.function` may raise
    exceptions when the values to reduce are from loops or if-clauses.
*   Fix the issue that `tf.distribute.MirroredStrategy` cannot be used together
    with `tf.distribute.experimental.MultiWorkerMirroredStrategy`.
*   Add a `tf.distribute.cluster_resolver.TPUClusterResolver.connect` API to
    simplify TPU initialization.
*   Add `tf.distribute.Strategy.gather` and
    `tf.distribute.ReplicaContext.all_gather` methods to gather and concatenate
    `tf.distribute.DistributedValues` across workers and devices.

### `tf.keras`:

*   Introduces experimental preprocessing layers API
    (`tf.keras.layers.experimental.preprocessing`) to handle data preprocessing
    operations such as categorical feature encoding, text vectorization, data
    normalization, and data discretization (binning). The newly added layers
    provide a replacement for the legacy feature column API, and support
    composite tensor inputs.
*   Added **categorical data** processing layers:
    *   `IntegerLookup` & `StringLookup`: build an index of categorical feature
        values
    *   `CategoryEncoding`: turn integer-encoded categories into one-hot,
        multi-hot, or tf-idf encoded representations
    *   `CategoryCrossing`: create new categorical features representing
        co-occurrences of previous categorical feature values
    *   `Hashing`: the hashing trick, for large-vocabulary categorical features
    *   `Discretization`: turn continuous numerical features into categorical
        features by binning their values
*   Improved **image preprocessing** layers: `CenterCrop`, `Rescaling`
*   Improved **image augmentation** layers: `RandomCrop`, `RandomFlip`,
    `RandomTranslation`, `RandomRotation`, `RandomHeight`, `RandomWidth`,
    `RandomZoom`, `RandomContrast`
*   Improved **`TextVectorization`** layer, which handles string tokenization,
    n-gram generation, and token encoding
    *   The `TextVectorization` layer now accounts for the mask_token as part of
        the vocabulary size when output_mode='int'. This means that, if you have
        a max_tokens value of 5000, your output will have 5000 unique values
        (not 5001 as before).
    *   Change the return value of `TextVectorization.get_vocabulary()` from
        `byte` to `string`. Users who previously were calling 'decode' on the
        output of this method should no longer need to do so.
*   Introduce new Keras dataset generation utilities :
    *   **[`image_dataset_from_directory`](https://www.tensorflow.org/api_docs/python/tf/keras/preprocessing/image_dataset_from_directory)**
        is a utility based on `tf.data.Dataset`, meant to replace the legacy
        `ImageDataGenerator`. It takes you from a structured directory of images
        to a labeled dataset, in one function call. Note that it doesn't perform
        image data augmentation (which is meant to be done using preprocessing
        layers).
    *   **[`text_dataset_from_directory`](https://www.tensorflow.org/api_docs/python/tf/keras/preprocessing/text_dataset_from_directory)**
        takes you from a structured directory of text files to a labeled
        dataset, in one function call.
    *   **[`timeseries_dataset_from_array`](https://www.tensorflow.org/api_docs/python/tf/keras/preprocessing/timeseries_dataset_from_array)**
        is a `tf.data.Dataset`-based replacement of the legacy
        `TimeseriesGenerator`. It takes you from an array of timeseries data to
        a dataset of shifting windows with their targets.
*   Added
    [`experimental_steps_per_execution`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/keras/Model?hl=en#compile)
    arg to `model.compile` to indicate the number of batches to run per
    `tf.function` call. This can speed up Keras Models on TPUs up to 3x.
*   Extends `tf.keras.layers.Lambda` layers to support multi-argument lambdas,
    and keyword arguments when calling the layer.
*   Functional models now get constructed if *any* tensor in a layer call's
    arguments/keyword arguments comes from a keras input. Previously the
    functional api would only work if all of the elements in the first argument
    to the layer came from a keras input.
*   Clean up `BatchNormalization` layer's `trainable` property to act like
    standard python state when it's used inside `tf.functions` (frozen at
    tracing time), instead of acting like a pseudo-variable whose updates *kind
    of sometimes* get reflected in already-traced `tf.function` traces.
*   Add the `Conv1DTranspose` layer.
*   Refine the semantics of `SensitivitySpecificityBase` derived metrics. See
    the updated API docstrings for
    [`tf.keras.metrics.SensitivityAtSpecificity`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/keras/metrics/SensitivityAtSpecificity)
    and
    [`tf.keras.metrics.SpecificityAtSensitivty`](https://www.tensorflow.org/versions/r2.3/api_docs/python/tf/keras/metrics/SpecificityAtSensitivity).

### `tf.lite`:

*   Converter
    *   Restored `inference_input_type` and `inference_output_type` flags in TF
        2.x TFLiteConverter (backward compatible with TF 1.x) to support integer
        (tf.int8, tf.uint8) input and output types in post training full integer
        quantized models.
    *   Added support for converting and resizing models with dynamic
        (placeholder) dimensions. Previously, there was only limited support for
        dynamic batch size, and even that did not guarantee that the model could
        be properly resized at runtime.
        *   Enabled experimental support for a new quantization mode with 16-bit
            activations and 8-bit weights. See
            `lite.OpsSet.EXPERIMENTAL_TFLITE_BUILTINS_ACTIVATIONS_INT16_WEIGHTS_INT8`.
*   CPU
    *   Fix an issue w/ dynamic weights and `Conv2D` on x86.
    *   Add a runtime Android flag for enabling `XNNPACK` for optimized CPU
        performance.
    *   Add a runtime iOS flag for enabling `XNNPACK` for optimized CPU
        performance.
    *   Add a compiler flag to enable building a TFLite library that applies
        `XNNPACK` delegate automatically when the model has a `fp32` operation.
*   GPU
    *   Allow GPU acceleration starting with internal graph nodes
    *   Experimental support for quantized models with the Android GPU delegate
    *   Add GPU delegate whitelist.
    *   Rename GPU whitelist -> compatibility (list).
    *   Improve GPU compatibility list entries from crash reports.
*   NNAPI
    *   Set default value for
        `StatefulNnApiDelegate::Options::max_number_delegated_partitions` to 3.
    *   Add capability to disable `NNAPI` CPU and check `NNAPI` Errno.
    *   Fix crashes when using `NNAPI` with target accelerator specified with
        model containing Conv2d or FullyConnected or LSTM nodes with quantized
        weights.
    *   Fix `ANEURALNETWORKS_BAD_DATA` execution failures with
        `sum`/`max`/`min`/`reduce` operations with `scalar` inputs.
*   Hexagon
    *   TFLite Hexagon Delegate out of experimental.
    *   Experimental `int8` support for most hexagon ops.
    *   Experimental per-channel quant support for `conv` in Hexagon delegate.
    *   Support dynamic batch size in C++ API.
*   CoreML
    *   Opensource CoreML delegate
*   Misc
    *   Enable building Android TFLite targets on Windows
    *   Add support for `BatchMatMul`.
    *   Add support for `half_pixel_centers` with `ResizeNearestNeighbor`.
    *   Add 3D support for `BatchToSpaceND`.
    *   Add 5D support for `BroadcastSub`, `Maximum`, `Minimum`, `Transpose` and
        `BroadcastDiv`.
    *   Rename `kTfLiteActRelu1` to `kTfLiteActReluN1To1`.
    *   Enable flex delegate on tensorflow.lite.Interpreter Python package.
    *   Add `Buckettize`, `SparseCross` and `BoostedTreesBucketize` to the flex
        whitelist.
    *   Add support for selective registration of flex ops.
    *   Add missing kernels for flex delegate whitelisted ops.
    *   Fix issue when using direct `ByteBuffer` inputs with graphs that have
        dynamic shapes.
    *   Fix error checking supported operations in a model containing
        `HardSwish`.

### Packaging Support

*   Added `tf.sysconfig.get_build_info()`. Returns a dict that describes the
    build environment of the currently installed TensorFlow package, e.g. the
    NVIDIA CUDA and NVIDIA CuDNN versions used when TensorFlow was built.

### Profiler

*   Fix a subtle use-after-free issue in `XStatVisitor::RefValue()`.

### TPU Enhancements

*   Adds 3D mesh support in TPU configurations ops.
*   Added TPU code for `FTRL` with `multiply_linear_by_lr`.
*   Silently adds a new file system registry at `gstpu`.
*   Support `restartType` in cloud tpu client.
*   Depend on a specific version of google-api-python-client.
*   Fixes apiclient import.

### Tracing and Debugging

*   Add a `TFE_Py_Execute` traceme.

### XLA Support

*   Implement stable `argmin` and `argmax`

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

902449@58880@bigcat_chen@ASIC, Abdul Baseer Khan, Abhineet Choudhary, Abolfazl
Shahbazi, Adam Hillier, ag.ramesh, Agoniii, Ajay P, Alex Hoffman, Alexander
Bayandin, Alexander Grund, Alexandre Abadie, Alexey Rogachevskiy, amoitra,
Andrew Stevens, Angus-Luo, Anshuman Tripathy, Anush Elangovan, Artem Mavrin,
Ashutosh Hathidara, autoih, Ayushman Kumar, ayushmankumar7, Bairen Yi, Bas
Aarts, Bastian Eichenberger, Ben Barsdell, bhack, Bharat Raghunathan, Biagio
Montaruli, Bigcat-Himax, blueyi, Bryan Cutler, Byambaa, Carlos
Hernandez-Vaquero, Chen Lei, Chris Knorowski, Christian Clauss, chuanqiw,
CuiYifeng, Daniel Situnayake, Daria Zhuravleva, Dayananda-V, Deven Desai, Devi
Sandeep Endluri, Dmitry Zakharov, Dominic Jack, Duncan Riach, Edgar Liberis,
Ehsan Toosi, ekuznetsov139, Elena Zhelezina, Eugene Kuznetsov, Eugene
Mikhantiev, Evgenii Zheltonozhskii, Fabio Di Domenico, Fausto Morales, Fei Sun,
feihugis, Felix E. Klee, flyingcat, Frederic Bastien, Fredrik Knutsson, frreiss,
fsx950223, ganler, Gaurav Singh, Georgios Pinitas, Gian Marco Iodice, Giorgio
Arena, Giuseppe Rossini, Gregory Keith, Guozhong Zhuang, gurushantj, Hahn
Anselm, Harald Husum, Harjyot Bagga, Hristo Vrigazov, Ilya Persky, Ir1d, Itamar
Turner-Trauring, jacco, Jake Tae, Janosh Riebesell, Jason Zaman, jayanth, Jeff
Daily, Jens Elofsson, Jinzhe Zeng, JLZ, Jonas Skog, Jonathan Dekhtiar, Josh
Meyer, Joshua Chia, Judd, justkw, Kaixi Hou, Kam D Kasravi, Kamil Rakoczy, Karol
Gugala, Kayou, Kazuaki Ishizaki, Keith Smiley, Khaled Besrour, Kilaru Yasaswi
Sri Chandra Gandhi, Kim, Young Soo, Kristian Hartikainen, Kwabena W. Agyeman,
Leslie-Fang, Leslie-Fang-Intel, Li, Guizi, Lukas Geiger, Lutz Roeder, M\U00E5Ns
Nilsson, Mahmoud Abuzaina, Manish, Marcel Koester, Marcin Sielski, marload,
Martin Jul, Matt Conley, mdfaijul, Meng, Peng, Meteorix, Michael Käufl,
Michael137, Milan Straka, Mitchell Vitez, Ml-0, Mokke Meguru, Mshr-H, nammbash,
Nathan Luehr, naumkin, Neeraj Bhadani, ngc92, Nick Morgan, nihui, Niranjan
Hasabnis, Niranjan Yadla, Nishidha Panpaliya, Oceania2018, oclyke, Ouyang Jin,
OverLordGoldDragon, Owen Lyke, Patrick Hemmer, Paul Andrey, Peng Sun,
periannath, Phil Pearl, Prashant Dandriyal, Prashant Kumar, Rahul Huilgol, Rajan
Singh, Rajeshwar Reddy T, rangjiaheng, Rishit Dagli, Rohan Reddy, rpalakkal,
rposts, Ruan Kunliang, Rushabh Vasani, Ryohei Ikegami, Semun Lee, Seo-Inyoung,
Sergey Mironov, Sharada Shiddibhavi, ShengYang1, Shraiysh Vaishay, Shunya Ueta,
shwetaoj, Siyavash Najafzade, Srinivasan Narayanamoorthy, Stephan Uphoff,
storypku, sunchenggen, sunway513, Sven-Hendrik Haase, Swapnil Parekh, Tamas Bela
Feher, Teng Lu, tigertang, tomas, Tomohiro Ubukata, tongxuan.ltx, Tony Tonev,
Tzu-Wei Huang, Téo Bouvard, Uday Bondhugula, Vaibhav Jade, Vijay Tadikamalla,
Vikram Dattu, Vincent Abriou, Vishnuvardhan Janapati, Vo Van Nghia, VoVAllen,
Will Battel, William D. Irons, wyzhao, Xiaoming (Jason) Cui, Xiaoquan Kong,
Xinan Jiang, xutianming, Yair Ehrenwald, Yasir Modak, Yasuhiro Matsumoto, Yixing
Fu, Yong Tang, Yuan Tang, zhaozheng09, Zilin Zhu, zilinzhu, 张志豪

# Release 2.1.1

## Bug Fixes and Other Changes

*   Updates `sqlite3` to `3.31.01` to handle
    [CVE-2019-19880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19880),
    [CVE-2019-19244](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19244)
    and
    [CVE-2019-19645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19645)
*   Updates `curl` to `7.69.1` to handle
    [CVE-2019-15601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-15601)
*   Updates `libjpeg-turbo` to `2.0.4` to handle
    [CVE-2018-19664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-19664),
    [CVE-2018-20330](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-20330)
    and
    [CVE-2019-13960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-13960)
*   Updates Apache Spark to `2.4.5` to handle
    [CVE-2019-10099](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-10099),
    [CVE-2018-17190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-17190)
    and
    [CVE-2018-11770](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-11770)
*   Fixes a versioning bug which causes Keras layers from TF 1.x to be used
    instead of those from TF 2.x

# Release 2.0.2

## Bug Fixes and Other Changes

*   Updates `sqlite3` to `3.31.01` to handle
    [CVE-2019-19880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19880),
    [CVE-2019-19244](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19244)
    and
    [CVE-2019-19645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19645)
*   Updates `curl` to `7.69.1` to handle
    [CVE-2019-15601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-15601)
*   Updates `libjpeg-turbo` to `2.0.4` to handle
    [CVE-2018-19664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-19664),
    [CVE-2018-20330](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-20330)
    and
    [CVE-2019-13960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-13960)
*   Updates Apache Spark to `2.4.5` to handle
    [CVE-2019-10099](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-10099),
    [CVE-2018-17190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-17190)
    and
    [CVE-2018-11770](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-11770)

# Release 1.15.3

## Bug Fixes and Other Changes

*   Updates `sqlite3` to `3.31.01` to handle
    [CVE-2019-19880](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19880),
    [CVE-2019-19244](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19244)
    and
    [CVE-2019-19645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19645)
*   Updates `curl` to `7.69.1` to handle
    [CVE-2019-15601](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-15601)
*   Updates `libjpeg-turbo` to `2.0.4` to handle
    [CVE-2018-19664](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-19664),
    [CVE-2018-20330](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-20330)
    and
    [CVE-2019-13960](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-13960)
*   Updates Apache Spark to `2.4.5` to handle
    [CVE-2019-10099](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-10099),
    [CVE-2018-17190](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-17190)
    and
    [CVE-2018-11770](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2018-11770)

# Release 2.2.0

TensorFlow 2.2 discontinues support for Python 2,
[previously announced](https://groups.google.com/a/tensorflow.org/d/msg/announce/gVwS5RC8mds/dCt1ka2XAAAJ)
as following
[Python 2's EOL on January 1, 2020](https://www.python.org/dev/peps/pep-0373/#update).

Coinciding with this change, new releases of
[TensorFlow's Docker images](https://hub.docker.com/r/tensorflow/tensorflow/)
provide Python 3 exclusively. Because all images now use Python 3, Docker tags
containing `-py3` will no longer be provided and existing `-py3` tags like
`latest-py3` will not be updated.

## Major Features and Improvements

*   Replaced the scalar type for string tensors from `std::string` to
    `tensorflow::tstring` which is now ABI stable.
*   A new Profiler for TF 2 for CPU/GPU/TPU. It offers both device and host
    performance analysis, including input pipeline and TF Ops. Optimization
    advisory is provided whenever possible. Please see
    [this tutorial](https://www.tensorflow.org/tensorboard/tensorboard_profiling_keras)
    and [guide](https://www.tensorflow.org/guide/profiler) for usage guidelines.
*   Export C++ functions to Python using `pybind11` as opposed to `SWIG` as a
    part of our
    [deprecation of swig efforts](https://github.com/tensorflow/community/blob/master/rfcs/20190208-pybind11.md).
*   `tf.distribute`:
    *   Support added for global sync `BatchNormalization` by using the newly
        added `tf.keras.layers.experimental.SyncBatchNormalization` layer. This
        layer will sync `BatchNormalization` statistics every step across all
        replicas taking part in sync training.
    *   Performance improvements for GPU multi-worker distributed training using
        `tf.distribute.experimental.MultiWorkerMirroredStrategy`
    *   Update NVIDIA `NCCL` to `2.5.7-1` for better performance and performance
        tuning. Please see
        [nccl developer guide](https://docs.nvidia.com/deeplearning/sdk/nccl-developer-guide/docs/env.html)
        for more information on this.
    *   Support gradient `allreduce` in `float16`. See this
        [example](https://github.com/tensorflow/models/blob/master/official/modeling/grad_utils.py)
        usage.
    *   Experimental support of
        [all reduce gradient packing](https://www.tensorflow.org/api_docs/python/tf/distribute/experimental/CollectiveHints)
        to allow overlapping gradient aggregation with backward path
        computation.
    *   Deprecated `experimental_run_v2` method for distribution strategies and
        renamed the method `run` as it is no longer experimental.
    *   Add CompositeTensor support for DistributedIterators. This should help
        prevent unnecessary function retracing and memory leaks.
*   `tf.keras`:

    *   `Model.fit` major improvements:
        *   You can now use custom training logic with `Model.fit` by overriding
            `Model.train_step`.
        *   Easily write state-of-the-art training loops without worrying about
            all of the features `Model.fit` handles for you (distribution
            strategies, callbacks, data formats, looping logic, etc)
        *   See the default
            [`Model.train_step`](https://github.com/tensorflow/tensorflow/blob/1381fc8e15e22402417b98e3881dfd409998daea/tensorflow/python/keras/engine/training.py#L540)
            for an example of what this function should look like. Same applies
            for validation and inference via `Model.test_step` and
            `Model.predict_step`.
        *   SavedModel uses its own `Model._saved_model_inputs_spec` attr now
            instead of relying on `Model.inputs` and `Model.input_names`, which
            are no longer set for subclass Models. This attr is set in eager,
            `tf.function`, and graph modes. This gets rid of the need for users
            to manually call `Model._set_inputs` when using Custom Training
            Loops(CTLs).
        *   Dynamic shapes are supported for generators by calling the Model on
            the first batch we "peek" from the generator. This used to happen
            implicitly in `Model._standardize_user_data`. Long-term, a solution
            where the `DataAdapter` doesn't need to call the Model is probably
            preferable.
    *   The SavedModel format now supports all Keras built-in layers (including
        metrics, preprocessing layers, and stateful RNN layers)
    *   Update Keras batch normalization layer to use the running mean and
        average computation in the `fused_batch_norm`. You should see
        significant performance improvements when using `fused_batch_norm` in
        Eager mode.

*   `tf.lite`:

    *   Enable TFLite experimental new converter by default.

*   XLA

    *   XLA now builds and works on windows. All prebuilt packages come with XLA
        available.
    *   XLA can be
        [enabled for a `tf.function`](https://www.tensorflow.org/xla#explicit_compilation_with_tffunction)
        with “compile or throw exception” semantics on CPU and GPU.

## Breaking Changes

*   `tf.keras`:
    *   In `tf.keras.applications` the name of the "top" layer has been
        standardized to "predictions". This is only a problem if your code
        relies on the exact name of the layer.
    *   Huber loss function has been updated to be consistent with other Keras
        losses. It now computes mean over the last axis of per-sample losses
        before applying the reduction function.
*   AutoGraph no longer converts functions passed to `tf.py_function`,
    `tf.py_func` and `tf.numpy_function`.
*   Deprecating `XLA_CPU` and `XLA_GPU` devices with this release.
*   Increasing the minimum bazel version to build TF to 2.0.0 to use Bazel's
    `cc_experimental_shared_library`.
*   Keras compile/fit behavior for functional and subclassed models have been
    unified. Model properties such as `metrics`, `metrics_names` will now be
    available only after **training/evaluating the model on actual data** for
    functional models. `metrics` will **now include** model `loss` and output
    losses.`loss_functions` property has been removed from the model. This was
    an undocumented property that was accidentally public and has now been
    removed.

## Known Caveats

*   The current TensorFlow release now **requires**
    [gast](https://pypi.org/project/gast/) version 0.3.3.

## Bug Fixes and Other Changes

*   `tf.data`:
    *   Removed `autotune_algorithm` from experimental optimization options.
*   TF Core:
    *   `tf.constant` always creates CPU tensors irrespective of the current
        device context.
    *   Eager `TensorHandles` maintain a list of mirrors for any copies to local
        or remote devices. This avoids any redundant copies due to op execution.
    *   For `tf.Tensor` & `tf.Variable`, `.experimental_ref()` is no longer
        experimental and is available as simply `.ref()`.
    *   `pfor/vectorized_map`: Added support for vectorizing 56 more ops.
        Vectorizing `tf.cond` is also supported now.
    *   Set as much partial shape as we can infer statically within the gradient
        impl of the gather op.
    *   Gradient of `tf.while_loop` emits `StatelessWhile` op if `cond` and body
        functions are stateless. This allows multiple gradients while ops to run
        in parallel under distribution strategy.
    *   Speed up `GradientTape` in eager mode by auto-generating list of op
        inputs/outputs which are unused and hence not cached for gradient
        functions.
    *   Support `back_prop=False` in `while_v2` but mark it as deprecated.
    *   Improve error message when attempting to use `None` in data-dependent
        control flow.
    *   Add `RaggedTensor.numpy()`.
    *   Update `RaggedTensor.__getitem__` to preserve uniform dimensions & allow
        indexing into uniform dimensions.
    *   Update `tf.expand_dims` to always insert the new dimension as a
        non-ragged dimension.
    *   Update `tf.embedding_lookup` to use `partition_strategy` and `max_norm`
        when `ids` is ragged.
    *   Allow `batch_dims==rank(indices)` in `tf.gather`.
    *   Add support for bfloat16 in `tf.print`.
*   `tf.distribute`:
    *   Support `embedding_column` with variable-length input features for
        `MultiWorkerMirroredStrategy`.
*   `tf.keras`:
    *   Added `experimental_aggregate_gradients` argument to
        `tf.keras.optimizer.Optimizer.apply_gradients`. This allows custom
        gradient aggregation and processing aggregated gradients in custom
        training loop.
    *   Allow `pathlib.Path` paths for loading models via Keras API.
*   `tf.function`/AutoGraph:
    *   AutoGraph is now available in `ReplicaContext.merge_call`,
        `Strategy.extended.update` and `Strategy.extended.update_non_slot`.
    *   Experimental support for shape invariants has been enabled in
        `tf.function`. See the API docs for
        `tf.autograph.experimental.set_loop_options` for additional info.
    *   AutoGraph error messages now exclude frames corresponding to APIs
        internal to AutoGraph.
    *   Improve shape inference for `tf.function` input arguments to unlock more
        Grappler optimizations in TensorFlow 2.x.
    *   Improve automatic control dependency management of resources by allowing
        resource reads to occur in parallel and synchronizing only on writes.
    *   Fix execution order of multiple stateful calls to `experimental_run_v2`
        in `tf.function`.
    *   You can now iterate over `RaggedTensors` using a for loop inside
        `tf.function`.
*   `tf.lite`:
    *   Migrated the `tf.lite` C inference API out of experimental into lite/c.
    *   Add an option to disallow `NNAPI` CPU / partial acceleration on Android
        10
    *   TFLite Android AARs now include the C headers and APIs are required to
        use TFLite from native code.
    *   Refactors the delegate and delegate kernel sources to allow usage in the
        linter.
    *   Limit delegated ops to actually supported ones if a device name is
        specified or `NNAPI` CPU Fallback is disabled.
    *   TFLite now supports `tf.math.reciprocal1` op by lowering to `tf.div op`.
    *   TFLite's unpack op now supports boolean tensor inputs.
    *   Microcontroller and embedded code moved from experimental to main
        TensorFlow Lite folder
    *   Check for large TFLite tensors.
    *   Fix GPU delegate crash with C++17.
    *   Add 5D support to TFLite `strided_slice`.
    *   Fix error in delegation of `DEPTH_TO_SPACE` to `NNAPI` causing op not to
        be accelerated.
    *   Fix segmentation fault when running a model with LSTM nodes using
        `NNAPI` Delegate
    *   Fix `NNAPI` delegate failure when an operand for Maximum/Minimum
        operation is a scalar.
    *   Fix `NNAPI` delegate failure when Axis input for reduce operation is a
        scalar.
    *   Expose option to limit the number of partitions that will be delegated
        to `NNAPI`.
    *   If a target accelerator is specified, use its feature level to determine
        operations to delegate instead of SDK version.
*   `tf.random`:
    *   Various random number generation improvements:
    *   Add a fast path for default `random_uniform`
    *   `random_seed` documentation improvement.
    *   `RandomBinomial` broadcasts and appends the sample shape to the left
        rather than the right.
    *   Added `tf.random.stateless_binomial`, `tf.random.stateless_gamma`,
        `tf.random.stateless_poisson`
    *   `tf.random.stateless_uniform` now supports unbounded sampling of `int`
        types.
*   Math and Linear Algebra:
    *   Add `tf.linalg.LinearOperatorTridiag`.
    *   Add `LinearOperatorBlockLowerTriangular`
    *   Add broadcasting support to
        tf.linalg.triangular_solve[#26204](https://github.com/tensorflow/tensorflow/issues/26204),
        tf.math.invert_permutation.
    *   Add `tf.math.sobol_sample` op.
    *   Add `tf.math.xlog1py`.
    *   Add `tf.math.special.{dawsn,expi,fresnel_cos,fresnel_sin,spence}`.
    *   Add a Modified Discrete Cosine Transform (MDCT) and its inverse to
        `tf.signal`.
*   TPU Enhancements:
    *   Refactor `TpuClusterResolver` to move shared logic to a separate pip
        package.
    *   Support configuring TPU software version from cloud tpu client.
    *   Allowed TPU embedding weight decay factor to be multiplied by learning
        rate.
*   XLA Support:
    *   Add standalone XLA AOT runtime target + relevant .cc sources to pip
        package.
    *   Add check for memory alignment to MemoryAllocation::MemoryAllocation()
        on 32-bit ARM. This ensures a deterministic early exit instead of a hard
        to debug bus error later.
    *   `saved_model_cli aot_compile_cpu` allows you to compile saved models to
        XLA header+object files and include them in your C++ programs.
    *   Enable `Igamma`, `Igammac` for XLA.
*   Deterministic Op Functionality:
    *   XLA reduction emitter is deterministic when the environment variable
        `TF_DETERMINISTIC_OPS` is set to "true" or "1". This extends
        deterministic `tf.nn.bias_add` back-prop functionality (and therefore
        also deterministic back-prop of bias-addition in Keras layers) to
        include when XLA JIT compilation is enabled.
    *   Fix problem, when running on a CUDA GPU and when either environment
        variable `TF_DETERMINISTIC_OPS` or environment variable
        `TF_CUDNN_DETERMINISTIC` is set to "true" or "1", in which some layer
        configurations led to an exception with the message "No algorithm
        worked!"
*   Tracing and Debugging:
    *   Add source, destination name to `_send` traceme to allow easier
        debugging.
    *   Add traceme event to `fastpathexecute`.
*   Other:
    *   Fix an issue with AUC.reset_states for multi-label AUC
        [#35852](https://github.com/tensorflow/tensorflow/issues/35852)
    *   Fix the TF upgrade script to not delete files when there is a parsing
        error and the output mode is `in-place`.
    *   Move `tensorflow/core:framework/*_pyclif` rules to
        `tensorflow/core/framework:*_pyclif`.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

372046933, 8bitmp3, aaronhma, Abin Shahab, Aditya Patwardhan, Agoniii, Ahti
Kitsik, Alan Yee, Albin Joy, Alex Hoffman, Alexander Grund, Alexandre E.
Eichenberger, Amit Kumar Jaiswal, amoitra, Andrew Anderson, Angus-Luo, Anthony
Barbier, Anton Kachatkou, Anuj Rawat, archis, Arpan-Dhatt, Arvind Sundararajan,
Ashutosh Hathidara, autoih, Bairen Yi, Balint Cristian, Bas Aarts, BashirSbaiti,
Basit Ayantunde, Ben Barsdell, Benjamin Gaillard, boron, Brett Koonce, Bryan
Cutler, Christian Goll, Christian Sachs, Clayne Robison, comet, Daniel Falbel,
Daria Zhuravleva, darsh8200, David Truby, Dayananda-V, deepakm, Denis Khalikov,
Devansh Singh, Dheeraj R Reddy, Diederik Van Liere, Diego Caballero, Dominic
Jack, dothinking, Douman, Drake Gens, Duncan Riach, Ehsan Toosi, ekuznetsov139,
Elena Zhelezina, elzino, Ending2015a, Eric Schweitz, Erik Zettel, Ethan Saadia,
Eugene Kuznetsov, Evgeniy Zheltonozhskiy, Ewout Ter Hoeven, exfalso, FAIJUL,
Fangjun Kuang, Fei Hu, Frank Laub, Frederic Bastien, Fredrik Knutsson, frreiss,
Frédéric Rechtenstein, fsx950223, Gaurav Singh, gbaned, George Grzegorz
Pawelczak, George Sterpu, Gian Marco Iodice, Giorgio Arena, Hans Gaiser, Hans
Pabst, Haoyu Wu, Harry Slatyer, hsahovic, Hugo, Hugo Sjöberg, IrinaM21, jacco,
Jake Tae, Jean-Denis Lesage, Jean-Michel Gorius, Jeff Daily, Jens Elofsson,
Jerry Shih, jerryyin, Jin Mingjian, Jinjing Zhou, JKIsaacLee, jojimonv, Jonathan
Dekhtiar, Jose Ignacio Gomez, Joseph-Rance, Judd, Julian Gross, Kaixi Hou,
Kaustubh Maske Patil, Keunwoo Choi, Kevin Hanselman, Khor Chean Wei, Kilaru
Yasaswi Sri Chandra Gandhi, Koan-Sin Tan, Koki Ibukuro, Kristian Holsheimer,
kurileo, Lakshay Tokas, Lee Netherton, leike666666, Leslie-Fang-Intel, Li,
Guizi, LIUJIAN435, Lukas Geiger, Lyo Nguyen, madisetti, Maher Jendoubi, Mahmoud
Abuzaina, Manuel Freiberger, Marcel Koester, Marco Jacopo Ferrarotti, Markus
Franke, marload, Mbah-Javis, mbhuiyan, Meng Zhang, Michael Liao,
MichaelKonobeev, Michal Tarnowski, Milan Straka, minoring, Mohamed Nour
Abouelseoud, MoussaMM, Mrinal Jain, mrTsjolder, Måns Nilsson, Namrata Bhave,
Nicholas Gao, Niels Ole Salscheider, nikochiko, Niranjan Hasabnis, Nishidha
Panpaliya, nmostafa, Noah Trenaman, nuka137, Officium, Owen L - Sfe, Pallavi G,
Paul Andrey, Peng Sun, Peng Wu, Phil Pearl, PhilipMay, pingsutw, Pooya Davoodi,
PragmaTwice, pshiko, Qwerty71, R Gomathi, Rahul Huilgol, Richard Xiao, Rick
Wierenga, Roberto Rosmaninho, ruchit2801, Rushabh Vasani, Sami, Sana Damani,
Sarvesh Dubey, Sasan Jafarnejad, Sergii Khomenko, Shane Smiskol, Shaochen Shi,
sharkdtu, Shawn Presser, ShengYang1, Shreyash Patodia, Shyam Sundar Dhanabalan,
Siju Samuel, Somyajit Chakraborty Sam, Srihari Humbarwadi,
srinivasan.narayanamoorthy, Srishti Yadav, Steph-En-M, Stephan Uphoff, Stephen
Mugisha, SumanSudhir, Taehun Kim, Tamas Bela Feher, TengLu, Tetragramm, Thierry
Herrmann, Tian Jin, tigertang, Tom Carchrae, Tom Forbes, Trent Lo, Victor Peng,
vijayphoenix, Vincent Abriou, Vishal Bhola, Vishnuvardhan Janapati, vladbataev,
VoVAllen, Wallyss Lima, Wen-Heng (Jack) Chung, wenxizhu, William D. Irons,
William Zhang, Xiaoming (Jason) Cui, Xiaoquan Kong, Xinan Jiang, Yasir Modak,
Yasuhiro Matsumoto, Yaxun (Sam) Liu, Yong Tang, Ytyt-Yt, yuan, Yuan Mingshuai,
Yuan Tang, Yuki Ueda, Yusup, zhangshijin, zhuwenxi

# Release 2.0.1

## Bug Fixes and Other Changes

*   Fixes a security vulnerability where converting a Python string to a
    `tf.float16` value produces a segmentation fault
    ([CVE-2020-5215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-5215))
*   Updates `curl` to `7.66.0` to handle
    [CVE-2019-5482](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-5482)
    and
    [CVE-2019-5481](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-5481)
*   Updates `sqlite3` to `3.30.01` to handle
    [CVE-2019-19646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19646),
    [CVE-2019-19645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19645)
    and
    [CVE-2019-16168](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-16168)

# Release 1.15.2

## Bug Fixes and Other Changes

*   Fixes a security vulnerability where converting a Python string to a
    `tf.float16` value produces a segmentation fault
    ([CVE-2020-5215](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-5215))
*   Updates `curl` to `7.66.0` to handle
    [CVE-2019-5482](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-5482)
    and
    [CVE-2019-5481](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-5481)
*   Updates `sqlite3` to `3.30.01` to handle
    [CVE-2019-19646](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19646),
    [CVE-2019-19645](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-19645)
    and
    [CVE-2019-16168](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2019-16168)

# Release 2.1.0

TensorFlow 2.1 will be the last TF release supporting Python 2. Python 2 support
[officially ends an January 1, 2020](https://www.python.org/dev/peps/pep-0373/#update).
[As announced earlier](https://groups.google.com/a/tensorflow.org/d/msg/announce/gVwS5RC8mds/dCt1ka2XAAAJ),
TensorFlow will also stop supporting Python 2 starting January 1, 2020, and no
more releases are expected in 2019.

## Major Features and Improvements

*   The `tensorflow` pip package now includes GPU support by default (same as
    `tensorflow-gpu`) for both Linux and Windows. This runs on machines with and
    without NVIDIA GPUs. `tensorflow-gpu` is still available, and CPU-only
    packages can be downloaded at `tensorflow-cpu` for users who are concerned
    about package size.
*   **Windows users:** Officially-released `tensorflow` Pip packages are now
    built with Visual Studio 2019 version 16.4 in order to take advantage of the
    new `/d2ReducedOptimizeHugeFunctions` compiler flag. To use these new
    packages, you must install "Microsoft Visual C++ Redistributable for Visual
    Studio 2015, 2017 and 2019", available from Microsoft's website
    [here](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads).
    *   This does not change the minimum required version for building
        TensorFlow from source on Windows, but builds enabling
        `EIGEN_STRONG_INLINE` can take over 48 hours to compile without this
        flag. Refer to `configure.py` for more information about
        `EIGEN_STRONG_INLINE` and `/d2ReducedOptimizeHugeFunctions`.
    *   If either of the required DLLs, `msvcp140.dll` (old) or `msvcp140_1.dll`
        (new), are missing on your machine, `import tensorflow` will print a
        warning message.
*   The `tensorflow` pip package is built with CUDA 10.1 and cuDNN 7.6.
*   `tf.keras`
    *   Experimental support for mixed precision is available on GPUs and Cloud
        TPUs. See
        [usage guide](https://www.tensorflow.org/guide/keras/mixed_precision).
    *   Introduced the `TextVectorization` layer, which takes as input raw
        strings and takes care of text standardization, tokenization, n-gram
        generation, and vocabulary indexing. See this
        [end-to-end text classification example](https://colab.research.google.com/drive/1RvCnR7h0_l4Ekn5vINWToI9TNJdpUZB3).
    *   Keras `.compile` `.fit` `.evaluate` and `.predict` are allowed to be
        outside of the DistributionStrategy scope, as long as the model was
        constructed inside of a scope.
    *   Experimental support for Keras `.compile`, `.fit`, `.evaluate`, and
        `.predict` is available for Cloud TPUs, Cloud TPU, for all types of
        Keras models (sequential, functional and subclassing models).
    *   Automatic outside compilation is now enabled for Cloud TPUs. This allows
        `tf.summary` to be used more conveniently with Cloud TPUs.
    *   Dynamic batch sizes with DistributionStrategy and Keras are supported on
        Cloud TPUs.
    *   Support for `.fit`, `.evaluate`, `.predict` on TPU using numpy data, in
        addition to `tf.data.Dataset`.
    *   Keras reference implementations for many popular models are available in
        the TensorFlow
        [Model Garden](https://github.com/tensorflow/models/tree/master/official).
*   `tf.data`
    *   Changes rebatching for `tf.data datasets` + DistributionStrategy for
        better performance. Note that the dataset also behaves slightly
        differently, in that the rebatched dataset cardinality will always be a
        multiple of the number of replicas.
    *   `tf.data.Dataset` now supports automatic data distribution and sharding
        in distributed environments, including on TPU pods.
    *   Distribution policies for `tf.data.Dataset` can now be tuned with 1.
        `tf.data.experimental.AutoShardPolicy(OFF, AUTO, FILE, DATA)` 2.
        `tf.data.experimental.ExternalStatePolicy(WARN, IGNORE, FAIL)`
*   `tf.debugging`
    *   Add `tf.debugging.enable_check_numerics()` and
        `tf.debugging.disable_check_numerics()` to help debugging the root
        causes of issues involving infinities and `NaN`s.
*   `tf.distribute`
    *   Custom training loop support on TPUs and TPU pods is available through
        `strategy.experimental_distribute_dataset`,
        `strategy.experimental_distribute_datasets_from_function`,
        `strategy.experimental_run_v2`, `strategy.reduce`.
    *   Support for a global distribution strategy through
        `tf.distribute.experimental_set_strategy(),` in addition to
        `strategy.scope()`.
*   `TensorRT`
    *   [TensorRT 6.0](https://developer.nvidia.com/tensorrt#tensorrt-whats-new)
        is now supported and enabled by default. This adds support for more
        TensorFlow ops including Conv3D, Conv3DBackpropInputV2, AvgPool3D,
        MaxPool3D, ResizeBilinear, and ResizeNearestNeighbor. In addition, the
        TensorFlow-TensorRT python conversion API is exported as
        `tf.experimental.tensorrt.Converter`.
*   Environment variable `TF_DETERMINISTIC_OPS` has been added. When set to
    "true" or "1", this environment variable makes `tf.nn.bias_add` operate
    deterministically (i.e. reproducibly), but currently only when XLA JIT
    compilation is *not* enabled. Setting `TF_DETERMINISTIC_OPS` to "true" or
    "1" also makes cuDNN convolution and max-pooling operate deterministically.
    This makes Keras Conv\*D and MaxPool\*D layers operate deterministically in
    both the forward and backward directions when running on a CUDA-enabled GPU.

## Breaking Changes

*   Deletes `Operation.traceback_with_start_lines` for which we know of no
    usages.
*   Removed `id` from `tf.Tensor.__repr__()` as `id` is not useful other than
    internal debugging.
*   Some `tf.assert_*` methods now raise assertions at operation creation time
    if the input tensors' values are known at that time, not during the
    `session.run()`. This only changes behavior when the graph execution would
    have resulted in an error. When this happens, a noop is returned and the
    input tensors are marked non-feedable. In other words, if they are used as
    keys in `feed_dict` argument to `session.run()`, an error will be raised.
    Also, because some assert ops don't make it into the graph, the graph
    structure changes. A different graph can result in different per-op random
    seeds when they are not given explicitly (most often).
*   The following APIs are not longer experimental:
    `tf.config.list_logical_devices`, `tf.config.list_physical_devices`,
    `tf.config.get_visible_devices`, `tf.config.set_visible_devices`,
    `tf.config.get_logical_device_configuration`,
    `tf.config.set_logical_device_configuration`.
*   `tf.config.experimentalVirtualDeviceConfiguration` has been renamed to
    `tf.config.LogicalDeviceConfiguration`.
*   `tf.config.experimental_list_devices` has been removed, please use
    `tf.config.list_logical_devices`.

## Bug Fixes and Other Changes

*   `tf.data`
    *   Fixes concurrency issue with `tf.data.experimental.parallel_interleave`
        with `sloppy=True`.
    *   Add `tf.data.experimental.dense_to_ragged_batch()`.
    *   Extend `tf.data` parsing ops to support `RaggedTensors`.
*   `tf.distribute`
    *   Fix issue where GRU would crash or give incorrect output when a
        `tf.distribute.Strategy` was used.
*   `tf.estimator`
    *   Added option in `tf.estimator.CheckpointSaverHook` to not save the
        `GraphDef`.
    *   Moving the checkpoint reader from swig to pybind11.
*   `tf.keras`
    *   Export `depthwise_conv2d` in `tf.keras.backend`.
    *   In Keras Layers and Models, Variables in `trainable_weights`,
        `non_trainable_weights`, and `weights` are explicitly deduplicated.
    *   Keras `model.load_weights` now accepts `skip_mismatch` as an argument.
        This was available in external Keras, and has now been copied over to
        `tf.keras`.
    *   Fix the input shape caching behavior of Keras convolutional layers.
    *   `Model.fit_generator`, `Model.evaluate_generator`,
        `Model.predict_generator`, `Model.train_on_batch`,
        `Model.test_on_batch`, and `Model.predict_on_batch` methods now respect
        the `run_eagerly` property, and will correctly run using `tf.function`
        by default. Note that `Model.fit_generator`, `Model.evaluate_generator`,
        and `Model.predict_generator` are deprecated endpoints. They are
        subsumed by `Model.fit`, `Model.evaluate`, and `Model.predict` which now
        support generators and Sequences.
*   `tf.lite`
    *   Legalization for `NMS` ops in TFLite.
    *   add `narrow_range` and `axis` to `quantize_v2` and `dequantize` ops.
    *   Added support for `FusedBatchNormV3` in converter.
    *   Add an `errno`-like field to `NNAPI` delegate for detecting `NNAPI`
        errors for fallback behaviour.
    *   Refactors `NNAPI` Delegate to support detailed reason why an operation
        is not accelerated.
    *   Converts hardswish subgraphs into atomic ops.
*   Other
    *   Critical stability updates for TPUs, especially in cases where the XLA
        compiler produces compilation errors.
    *   TPUs can now be re-initialized multiple times, using
        `tf.tpu.experimental.initialize_tpu_system`.
    *   Add `RaggedTensor.merge_dims()`.
    *   Added new `uniform_row_length` row-partitioning tensor to
        `RaggedTensor`.
    *   Add `shape` arg to `RaggedTensor.to_tensor`; Improve speed of
        `RaggedTensor.to_tensor`.
    *   `tf.io.parse_sequence_example` and `tf.io.parse_single_sequence_example`
        now support ragged features.
    *   Fix `while_v2` with variables in custom gradient.
    *   Support taking gradients of V2 `tf.cond` and `tf.while_loop` using
        `LookupTable`.
    *   Fix bug where `vectorized_map` failed on inputs with unknown static
        shape.
    *   Add preliminary support for sparse CSR matrices.
    *   Tensor equality with `None` now behaves as expected.
    *   Make calls to `tf.function(f)()`, `tf.function(f).get_concrete_function`
        and `tf.function(f).get_initialization_function` thread-safe.
    *   Extend `tf.identity` to work with CompositeTensors (such as
        SparseTensor)
    *   Added more `dtypes` and zero-sized inputs to `Einsum` Op and improved
        its performance
    *   Enable multi-worker `NCCL` `all-reduce` inside functions executing
        eagerly.
    *   Added complex128 support to `RFFT`, `RFFT2D`, `RFFT3D`, `IRFFT`,
        `IRFFT2D`, and `IRFFT3D`.
    *   Add `pfor` converter for `SelfAdjointEigV2`.
    *   Add `tf.math.ndtri` and `tf.math.erfinv`.
    *   Add `tf.config.experimental.enable_mlir_bridge` to allow using MLIR
        compiler bridge in eager model.
    *   Added support for MatrixSolve on Cloud TPU / XLA.
    *   Added `tf.autodiff.ForwardAccumulator` for forward-mode autodiff
    *   Add `LinearOperatorPermutation`.
    *   A few performance optimizations on `tf.reduce_logsumexp`.
    *   Added multilabel handling to `AUC` metric
    *   Optimization on `zeros_like`.
    *   Dimension constructor now requires `None` or types with an `__index__`
        method.
    *   Add `tf.random.uniform` microbenchmark.
    *   Use `_protogen` suffix for proto library targets instead of
        `_cc_protogen` suffix.
    *   Moving the checkpoint reader from `swig` to `pybind11`.
    *   `tf.device` & `MirroredStrategy` now supports passing in a
        `tf.config.LogicalDevice`
    *   If you're building Tensorflow from source, consider using
        [bazelisk](https://github.com/bazelbuild/bazelisk) to automatically
        download and use the correct Bazel version. Bazelisk reads the
        `.bazelversion` file at the root of the project directory.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

8bitmp3, Aaron Ma, AbdüLhamit Yilmaz, Abhai Kollara, aflc, Ag Ramesh, Albert Z.
Guo, Alex Torres, amoitra, Andrii Prymostka, angeliand, Anshuman Tripathy,
Anthony Barbier, Anton Kachatkou, Anubh-V, Anuja Jakhade, Artem Ryabov, autoih,
Bairen Yi, Bas Aarts, Basit Ayantunde, Ben Barsdell, Bhavani Subramanian, Brett
Koonce, candy.dc, Captain-Pool, caster, cathy, Chong Yan, Choong Yin Thong,
Clayne Robison, Colle, Dan Ganea, David Norman, David Refaeli, dengziming, Diego
Caballero, Divyanshu, djshen, Douman, Duncan Riach, EFanZh, Elena Zhelezina,
Eric Schweitz, Evgenii Zheltonozhskii, Fei Hu, fo40225, Fred Reiss, Frederic
Bastien, Fredrik Knutsson, fsx950223, fwcore, George Grzegorz Pawelczak, George
Sterpu, Gian Marco Iodice, Giorgio Arena, giuros01, Gomathi Ramamurthy, Guozhong
Zhuang, Haifeng Jin, Haoyu Wu, HarikrishnanBalagopal, HJYOO, Huang Chen-Yi,
Ilham Firdausi Putra, Imran Salam, Jared Nielsen, Jason Zaman, Jasper Vicenti,
Jeff Daily, Jeff Poznanovic, Jens Elofsson, Jerry Shih, jerryyin, Jesper
Dramsch, jim.meyer, Jongwon Lee, Jun Wan, Junyuan Xie, Kaixi Hou, kamalkraj, Kan
Chen, Karthik Muthuraman, Keiji Ariyama, Kevin Rose, Kevin Wang, Koan-Sin Tan,
kstuedem, Kwabena W. Agyeman, Lakshay Tokas, latyas, Leslie-Fang-Intel, Li,
Guizi, Luciano Resende, Lukas Folle, Lukas Geiger, Mahmoud Abuzaina, Manuel
Freiberger, Mark Ryan, Martin Mlostek, Masaki Kozuki, Matthew Bentham, Matthew
Denton, mbhuiyan, mdfaijul, Muhwan Kim, Nagy Mostafa, nammbash, Nathan Luehr,
Nathan Wells, Niranjan Hasabnis, Oleksii Volkovskyi, Olivier Moindrot, olramde,
Ouyang Jin, OverLordGoldDragon, Pallavi G, Paul Andrey, Paul Wais, pkanwar23,
Pooya Davoodi, Prabindh Sundareson, Rajeshwar Reddy T, Ralovich, Kristof,
Refraction-Ray, Richard Barnes, richardbrks, Robert Herbig, Romeo Kienzler, Ryan
Mccormick, saishruthi, Saket Khandelwal, Sami Kama, Sana Damani, Satoshi Tanaka,
Sergey Mironov, Sergii Khomenko, Shahid, Shawn Presser, ShengYang1, Siddhartha
Bagaria, Simon Plovyt, skeydan, srinivasan.narayanamoorthy, Stephen Mugisha,
sunway513, Takeshi Watanabe, Taylor Jakobson, TengLu, TheMindVirus, ThisIsIsaac,
Tim Gates, Timothy Liu, Tomer Gafner, Trent Lo, Trevor Hickey, Trevor Morris,
vcarpani, Wei Wang, Wen-Heng (Jack) Chung, wenshuai, Wenshuai-Xiaomi, wenxizhu,
william, William D. Irons, Xinan Jiang, Yannic, Yasir Modak, Yasuhiro Matsumoto,
Yong Tang, Yongfeng Gu, Youwei Song, Zaccharie Ramzi, Zhang, Zhenyu Guo, 王振华
(Zhenhua Wang), 韩董, 이중건 Isaac Lee

# Release 1.15.0

This is the last 1.x release for TensorFlow. We do not expect to update the 1.x
branch with features, although we will issue patch releases to fix
vulnerabilities for at least one year.

## Major Features and Improvements

*   As
    [announced](https://groups.google.com/a/tensorflow.org/forum/#!topic/developers/iRCt5m4qUz0),
    `tensorflow` pip package will by default include GPU support (same as
    `tensorflow-gpu` now) for the platforms we currently have GPU support (Linux
    and Windows). It will work on machines with and without Nvidia GPUs.
    `tensorflow-gpu` will still be available, and CPU-only packages can be
    downloaded at `tensorflow-cpu` for users who are concerned about package
    size.
*   TensorFlow 1.15 contains a complete implementation of the 2.0 API in its
    `compat.v2` module. It contains a copy of the 1.15 main module (without
    `contrib`) in the `compat.v1` module. TensorFlow 1.15 is able to emulate 2.0
    behavior using the `enable_v2_behavior()` function. This enables writing
    forward compatible code: by explicitly importing either
    `tensorflow.compat.v1` or `tensorflow.compat.v2`, you can ensure that your
    code works without modifications against an installation of 1.15 or 2.0.
*   EagerTensor now supports numpy buffer interface for tensors.
*   Add toggles `tf.enable_control_flow_v2()` and `tf.disable_control_flow_v2()`
    for enabling/disabling v2 control flow.
*   Enable v2 control flow as part of `tf.enable_v2_behavior()` and
    `TF2_BEHAVIOR=1`.
*   AutoGraph translates Python control flow into TensorFlow expressions,
    allowing users to write regular Python inside `tf.function`-decorated
    functions. AutoGraph is also applied in functions used with `tf.data`,
    `tf.distribute` and `tf.keras` APIS.
*   Adds `enable_tensor_equality()`, which switches the behavior such that:
    *   Tensors are no longer hashable.
    *   Tensors can be compared with `==` and `!=`, yielding a Boolean Tensor
        with element-wise comparison results. This will be the default behavior
        in 2.0.

## Breaking Changes

*   Tensorflow code now produces 2 different pip packages: `tensorflow_core`
    containing all the code (in the future it will contain only the private
    implementation) and `tensorflow` which is a virtual pip package doing
    forwarding to `tensorflow_core` (and in the future will contain only the
    public API of tensorflow). We don't expect this to be breaking, unless you
    were importing directly from the implementation.
*   TensorFlow 1.15 is built using devtoolset7 (GCC7) on Ubuntu 16. This may
    lead to ABI incompatibilities with extensions built against earlier versions
    of TensorFlow.
*   Deprecated the use of `constraint=` and `.constraint` with ResourceVariable.
*   `tf.keras`:
    *   `OMP_NUM_THREADS` is no longer used by the default Keras config. To
        configure the number of threads, use `tf.config.threading` APIs.
    *   `tf.keras.model.save_model` and `model.save` now defaults to saving a
        TensorFlow SavedModel.
    *   `keras.backend.resize_images` (and consequently,
        `keras.layers.Upsampling2D`) behavior has changed, a bug in the resizing
        implementation was fixed.
    *   Layers now default to `float32`, and automatically cast their inputs to
        the layer's dtype. If you had a model that used `float64`, it will
        probably silently use `float32` in TensorFlow2, and a warning will be
        issued that starts with Layer "layer-name" is casting an input tensor
        from dtype float64 to the layer's dtype of float32. To fix, either set
        the default dtype to float64 with
        `tf.keras.backend.set_floatx('float64')`, or pass `dtype='float64'` to
        each of the Layer constructors. See `tf.keras.layers.Layer` for more
        information.
    *   Some `tf.assert_*` methods now raise assertions at operation creation
        time (i.e. when this Python line executes) if the input tensors' values
        are known at that time, not during the session.run(). When this happens,
        a noop is returned and the input tensors are marked non-feedable. In
        other words, if they are used as keys in `feed_dict` argument to
        `session.run()`, an error will be raised. Also, because some assert ops
        don't make it into the graph, the graph structure changes. A different
        graph can result in different per-op random seeds when they are not
        given explicitly (most often).

## Bug Fixes and Other Changes

*   `tf.estimator`:
    *   `tf.keras.estimator.model_to_estimator` now supports exporting to
        `tf.train.Checkpoint` format, which allows the saved checkpoints to be
        compatible with `model.load_weights`.
    *   Fix tests in canned estimators.
    *   Expose Head as public API.
    *   Fixes critical bugs that help with `DenseFeatures` usability in TF2
*   `tf.data`:
    *   Promoting `unbatch` from experimental to core API.
    *   Adding support for datasets as inputs to `from_tensors` and
        `from_tensor_slices` and batching and unbatching of nested datasets.
*   `tf.keras`:
    *   `tf.keras.estimator.model_to_estimator` now supports exporting to
        tf.train.Checkpoint format, which allows the saved checkpoints to be
        compatible with `model.load_weights`.
    *   Saving a Keras Model using `tf.saved_model.save` now saves the list of
        variables, trainable variables, regularization losses, and the call
        function.
    *   Deprecated `tf.keras.experimental.export_saved_model` and
        `tf.keras.experimental.function`. Please use
        `tf.keras.models.save_model(..., save_format='tf')` and
        `tf.keras.models.load_model` instead.
    *   Add an `implementation=3` mode for `tf.keras.layers.LocallyConnected2D`
        and `tf.keras.layers.LocallyConnected1D` layers using `tf.SparseTensor`
        to store weights, allowing a dramatic speedup for large sparse models.
    *   Enable the Keras compile API `experimental_run_tf_function` flag by
        default. This flag enables single training/eval/predict execution path.
        With this 1. All input types are converted to `Dataset`. 2. When
        distribution strategy is not specified this goes through the no-op
        distribution strategy path. 3. Execution is wrapped in tf.function
        unless `run_eagerly=True` is set in compile.
    *   Raise error if `batch_size` argument is used when input is
        dataset/generator/keras sequence.
*   `tf.lite`
    *   Add `GATHER` support to NN API delegate.
    *   tflite object detection script has a debug mode.
    *   Add delegate support for `QUANTIZE`.
    *   Added evaluation script for COCO minival.
    *   Add delegate support for `QUANTIZED_16BIT_LSTM`.
    *   Converts hardswish subgraphs into atomic ops.
*   Add support for defaulting the value of `cycle_length` argument of
    `tf.data.Dataset.interleave` to the number of schedulable CPU cores.
*   `parallel_for`: Add converter for `MatrixDiag`.
*   Add `narrow_range` attribute to `QuantizeAndDequantizeV2` and V3.
*   Added new op: `tf.strings.unsorted_segment_join`.
*   Add HW acceleration support for `topK_v2`.
*   Add new `TypeSpec` classes.
*   CloudBigtable version updated to v0.10.0.
*   Expose `Head` as public API.
*   Update docstring for gather to properly describe the non-empty `batch_dims`
    case.
*   Added `tf.sparse.from_dense` utility function.
*   Improved ragged tensor support in `TensorFlowTestCase`.
*   Makes the a-normal form transformation in Pyct configurable as to which
    nodes are converted to variables and which are not.
*   `ResizeInputTensor` now works for all delegates.
*   Add `EXPAND_DIMS` support to NN API delegate TEST: expand_dims_test
*   `tf.cond` emits a StatelessIf op if the branch functions are stateless and
    do not touch any resources.
*   `tf.cond`, `tf.while` and `if` and `while` in AutoGraph now accept a
    nonscalar predicate if has a single element. This does not affect non-V2
    control flow.
*   `tf.while_loop` emits a StatelessWhile op if the cond and body functions are
    stateless and do not touch any resources.
*   Refactors code in Quant8 LSTM support to reduce TFLite binary size.
*   Add support of local soft device placement for eager op.
*   Add HW acceleration support for `LogSoftMax`.
*   Added a function `nested_value_rowids` for ragged tensors.
*   Add guard to avoid acceleration of L2 Normalization with input rank != 4
*   Add `tf.math.cumulative_logsumexp operation`.
*   Add `tf.ragged.stack`.
*   Fix memory allocation problem when calling `AddNewInputConstantTensor`.
*   Delegate application failure leaves interpreter in valid state.
*   Add check for correct memory alignment to
    `MemoryAllocation::MemoryAllocation()`.
*   Extracts `NNAPIDelegateKernel` from nnapi_delegate.cc
*   Added support for `FusedBatchNormV3` in converter.
*   A ragged to dense op for directly calculating tensors.
*   Fix accidental quadratic graph construction cost in graph-mode
    `tf.gradients()`.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

a6802739, Aaron Ma, Abdullah Selek, Abolfazl Shahbazi, Ag Ramesh, Albert Z. Guo,
Albin Joy, Alex Itkes, Alex Sergeev, Alexander Pivovarov, Alexey Romanov,
alhkad, Amit Srivastava, amoitra, Andrew Lihonosov, Andrii Prymostka, Anuj
Rawat, Astropeak, Ayush Agrawal, Bairen Yi, Bas Aarts, Bastian Eichenberger, Ben
Barsdell, Benjamin Peterson, bhack, Bharat Raghunathan, Bhavani Subramanian,
Bryan Cutler, candy.dc, Cao Zongyan, Captain-Pool, Casper Da Costa-Luis, Chen
Guoyin, Cheng Chang, chengchingwen, Chong Yan, Choong Yin Thong, Christopher
Yeh, Clayne Robison, Coady, Patrick, Dan Ganea, David Norman, Denis Khalikov,
Deven Desai, Diego Caballero, Duncan Dean, Duncan Riach, Dwight J Lyle, Eamon
Ito-Fisher, eashtian3, EFanZh, ejot, Elroy Ashtian Jr, Eric Schweitz, Fangjun
Kuang, Fei Hu, fo40225, formath, Fred Reiss, Frederic Bastien, Fredrik Knutsson,
G. Hussain Chinoy, Gabriel, gehring, George Grzegorz Pawelczak, Gianluca
Varisco, Gleb Popov, Greg Peatfield, Guillaume Klein, Gurpreet Singh, Gustavo
Lima Chaves, haison, Haraldur TóMas HallgríMsson, HarikrishnanBalagopal, HåKon
Sandsmark, I-Hong, Ilham Firdausi Putra, Imran Salam, Jason Zaman, Jason
Zavaglia, jayhpark530, jefby, Jeff Daily, Jeffrey Poznanovic, Jekyll Lai, Jeroen
BéDorf, Jerry Shih, jerryyin, jiakai, JiangXIAO, Joe Bowser, Joel Shapiro, Johan
Gunnarsson, Jojimon Varghese, Joon, Josh Beal, Julian Niedermeier, Jun Wan,
Junqin Zhang, Junyuan Xie, Justin Tunis, Kaixi Hou, Karl Lessard, Karthik
Muthuraman, Kbhute-Ibm, khanhlvg, Koock Yoon, kstuedem, Kyuwon Kim, Lakshay
Tokas, leike666666, leonard951, Leslie-Fang, Leslie-Fang-Intel, Li, Guizi, Lukas
Folle, Lukas Geiger, Mahmoud Abuzaina, Manraj Singh Grover, Margaret
Maynard-Reid, Mark Ryan, Matt Conley, Matthew Bentham, Matthew Denton, mbhuiyan,
mdfaijul, Mei Jie, merturl, MichaelKonobeev, Michal W. Tarnowski, minds, mpppk,
musikisomorphie, Nagy Mostafa, Nayana Thorat, Neil, Niels Ole Salscheider,
Niklas SilfverströM, Niranjan Hasabnis, ocjosen, olramde, Pariksheet Pinjari,
Patrick J. Lopresti, Patrik Gustavsson, per1234, PeterLee, Phan Van Nguyen Duc,
Phillip Kravtsov, Pooya Davoodi, Pranav Marathe, Putra Manggala, Qingqing Cao,
Rajeshwar Reddy T, Ramon ViñAs, Rasmus Diederichsen, Reuben Morais, richardbrks,
robert, RonLek, Ryan Jiang, saishruthi, Saket Khandelwal, Saleem Abdulrasool,
Sami Kama, Sana-Damani, Sergii Khomenko, Severen Redwood, Shubham Goyal, Sigrid
Keydana, Siju Samuel, sleighsoft, smilu97, Son Tran, Srini511,
srinivasan.narayanamoorthy, Sumesh Udayakumaran, Sungmann Cho, Tae-Hwan Jung,
Taehoon Lee, Takeshi Watanabe, TengLu, terryky, TheMindVirus, ThisIsIsaac, Till
Hoffmann, Timothy Liu, Tomer Gafner, Tongxuan Liu, Trent Lo, Trevor Morris, Uday
Bondhugula, Vasileios Lioutas, vbvg2008, Vishnuvardhan Janapati, Vivek
Suryamurthy, Wei Wang, Wen-Heng (Jack) Chung, wenxizhu, William D. Irons,
winstonq, wyzhao, Xiaoming (Jason) Cui, Xinan Jiang, Xinping Wang, Yann-Yy,
Yasir Modak, Yong Tang, Yongfeng Gu, Yuchen Ying, Yuxin Wu, zyeric, 王振华 (Zhenhua
Wang)

# Release 2.0.0

## Major Features and Improvements

TensorFlow 2.0 focuses on **simplicity** and **ease of use**, featuring updates
like:

*   Easy model building with Keras and eager execution.
*   Robust model deployment in production on any platform.
*   Powerful experimentation for research.
*   API simplification by reducing duplication and removing deprecated
    endpoints.

For details on best practices with 2.0, see
[the Effective 2.0 guide](https://www.tensorflow.org/beta/guide/effective_tf2)

For information on upgrading your existing TensorFlow 1.x models, please refer
to our
[Upgrade](https://medium.com/tensorflow/upgrading-your-code-to-tensorflow-2-0-f72c3a4d83b5)
and [Migration](https://www.tensorflow.org/beta/guide/migration_guide) guides.
We have also released a collection of
[tutorials and getting started guides](https://www.tensorflow.org/beta).

## Highlights

*   TF 2.0 delivers Keras as the central high level API used to build and train
    models. Keras provides several model-building APIs such as Sequential,
    Functional, and Subclassing along with eager execution, for immediate
    iteration and intuitive debugging, and `tf.data`, for building scalable
    input pipelines. Checkout
    [guide](https://www.tensorflow.org/beta/guide/keras/overview) for additional
    details.
*   Distribution Strategy: TF 2.0 users will be able to use the
    [`tf.distribute.Strategy`](https://www.tensorflow.org/beta/guide/distribute_strategy)
    API to distribute training with minimal code changes, yielding great
    out-of-the-box performance. It supports distributed training with Keras
    model.fit, as well as with custom training loops. Multi-GPU support is
    available, along with experimental support for multi worker and Cloud TPUs.
    Check out the
    [guide](https://www.tensorflow.org/beta/guide/distribute_strategy) for more
    details.
*   Functions, not Sessions. The traditional declarative programming model of
    building a graph and executing it via a `tf.Session` is discouraged, and
    replaced with by writing regular Python functions. Using the `tf.function`
    decorator, such functions can be turned into graphs which can be executed
    remotely, serialized, and optimized for performance.
*   Unification of `tf.train.Optimizers` and `tf.keras.Optimizers`. Use
    `tf.keras.Optimizers` for TF2.0. `compute_gradients` is removed as public
    API, use `GradientTape` to compute gradients.
*   AutoGraph translates Python control flow into TensorFlow expressions,
    allowing users to write regular Python inside `tf.function`-decorated
    functions. AutoGraph is also applied in functions used with tf.data,
    tf.distribute and tf.keras APIs.
*   Unification of exchange formats to SavedModel. All TensorFlow ecosystem
    projects (TensorFlow Lite, TensorFlow JS, TensorFlow Serving, TensorFlow
    Hub) accept SavedModels. Model state should be saved to and restored from
    SavedModels.
*   API Changes: Many API symbols have been renamed or removed, and argument
    names have changed. Many of these changes are motivated by consistency and
    clarity. The 1.x API remains available in the compat.v1 module. A list of
    all symbol changes can be found
    [here](https://docs.google.com/spreadsheets/d/1FLFJLzg7WNP6JHODX5q8BDgptKafq_slHpnHVbJIteQ/edit#gid=0).
    *   API clean-up, included removing `tf.app`, `tf.flags`, and `tf.logging`
        in favor of [absl-py](https://github.com/abseil/abseil-py).
*   No more global variables with helper methods like
    `tf.global_variables_initializer` and `tf.get_global_step`.
*   Add toggles `tf.enable_control_flow_v2()` and `tf.disable_control_flow_v2()`
    for enabling/disabling v2 control flow.
*   Enable v2 control flow as part of `tf.enable_v2_behavior()` and
    `TF2_BEHAVIOR=1`.
*   Fixes autocomplete for most TensorFlow API references by switching to use
    relative imports in API `__init__.py` files.
*   Auto Mixed-Precision graph optimizer simplifies converting models to
    `float16` for acceleration on Volta and Turing Tensor Cores. This feature
    can be enabled by wrapping an optimizer class with
    `tf.train.experimental.enable_mixed_precision_graph_rewrite()`.
*   Add environment variable `TF_CUDNN_DETERMINISTIC`. Setting to "true" or "1"
    forces the selection of deterministic cuDNN convolution and max-pooling
    algorithms. When this is enabled, the algorithm selection procedure itself
    is also deterministic.

## Breaking Changes

*   Many backwards incompatible API changes have been made to clean up the APIs
    and make them more consistent.
*   Toolchains:

    *   TensorFlow 2.0.0 is built using devtoolset7 (GCC7) on Ubuntu 16. This
        may lead to ABI incompatibilities with extensions built against earlier
        versions of TensorFlow.
    *   Tensorflow code now produces 2 different pip packages: tensorflow_core
        containing all the code (in the future it will contain only the private
        implementation) and tensorflow which is a virtual pip package doing
        forwarding to tensorflow_core (and in the future will contain only the
        public API of tensorflow). We don't expect this to be breaking, unless
        you were importing directly from the implementation. Removed the
        `freeze_graph` command line tool; `SavedModel` should be used in place
        of frozen graphs.

*   `tf.contrib`:

    *   `tf.contrib` has been deprecated, and functionality has been either
        migrated to the core TensorFlow API, to an ecosystem project such as
        [tensorflow/addons](https://www.github.com/tensorflow/addons) or
        [tensorflow/io](https://www.github.com/tensorflow/io), or removed
        entirely.
    *   Remove `tf.contrib.timeseries` dependency on TF distributions.
    *   Replace contrib references with `tf.estimator.experimental.*` for apis
        in `early_stopping.py`.

*   `tf.estimator`:

    *   Premade estimators in the tf.estimator.DNN/Linear/DNNLinearCombined
        family have been updated to use `tf.keras.optimizers` instead of the
        `tf.compat.v1.train.Optimizer`s. If you do not pass in an `optimizer=`
        arg or if you use a string, the premade estimator will use the Keras
        optimizer. This is checkpoint breaking, as the optimizers have separate
        variables. A checkpoint converter tool for converting optimizers is
        included with the release, but if you want to avoid any change, switch
        to the v1 version of the estimator:
        `tf.compat.v1.estimator.DNN/Linear/DNNLinearCombined*`.
    *   Default aggregation for canned Estimators is now `SUM_OVER_BATCH_SIZE`.
        To maintain previous default behavior, please pass `SUM` as the loss
        aggregation method.
    *   Canned Estimators don’t support `input_layer_partitioner` arg in the
        API. If you have this arg, you will have to switch to `tf.compat.v1
        canned Estimators`.
    *   `Estimator.export_savedmodel` has been renamed to `export_saved_model`.
    *   When saving to SavedModel, Estimators will strip default op attributes.
        This is almost always the correct behavior, as it is more forwards
        compatible, but if you require that default attributes to be saved with
        the model, please use `tf.compat.v1.Estimator`.
    *   Feature Columns have been upgraded to be more Eager-friendly and to work
        with Keras. As a result, `tf.feature_column.input_layer` has been
        deprecated in favor of `tf.keras.layers.DenseFeatures`. v1 feature
        columns have direct analogues in v2 except for
        `shared_embedding_columns`, which are not cross-compatible with v1 and
        v2. Use `tf.feature_column.shared_embeddings` instead.

*   `tf.keras`:

    *   `OMP_NUM_THREADS` is no longer used by the default Keras config. To
        configure the number of threads, use `tf.config.threading` APIs.
    *   `tf.keras.model.save_model` and `model.save` now defaults to saving a
        TensorFlow SavedModel. HDF5 files are still supported.
    *   Deprecated `tf.keras.experimental.export_saved_model` and
        `tf.keras.experimental.function`. Please use
        `tf.keras.models.save_model(..., save_format='tf')` and
        `tf.keras.models.load_model` instead.
    *   Layers now default to float32, and automatically cast their inputs to
        the layer's dtype. If you had a model that used float64, it will
        probably silently use float32 in TensorFlow 2, and a warning will be
        issued that starts with `Layer <layer-name>` is casting an input tensor
        from dtype float64 to the layer's dtype of float32. To fix, either set
        the default dtype to float64 with
        `tf.keras.backend.set_floatx('float64')`, or pass `dtype='float64'` to
        each of the Layer constructors. See `tf.keras.layers.Layer` for more
        information.

*   `tf.lite`:

    *   Removed `lite.OpHint`, `lite.experimental`, and `lite.constant` from 2.0
        API.

*   Tensors are no longer hashable, but instead compare element-wise with `==`
    and `!=`. Use `tf.compat.v1.disable_tensor_equality()` to return to the
    previous behavior.

*   Performing equality operations on Tensors or Variables with incompatible
    shapes an exception is no longer thrown. Instead `__eq__` returns False and
    `__ne__` returns True.

*   Removed `tf.string_split` from v2 API.

*   Deprecated the use of `constraint=` and `.constraint` with ResourceVariable.

*   Add `UnifiedGRU` as the new GRU implementation for tf2.0. Change the default
    recurrent activation function for GRU from `hard_sigmoid` to `sigmoid`, and
    `reset_after` to True in 2.0. Historically recurrent activation is
    `hard_sigmoid` since it is fast than 'sigmoid'. With new unified backend
    between CPU and GPU mode, since the CuDNN kernel is using sigmoid, we change
    the default for CPU mode to sigmoid as well. With that, the default GRU will
    be compatible with both CPU and GPU kernel. This will enable user with GPU
    to use CuDNN kernel by default and get a 10x performance boost in training.
    Note that this is checkpoint breaking change. If user want to use their 1.x
    pre-trained checkpoint, please construct the layer with
    GRU(recurrent_activation='hard_sigmoid', reset_after=False) to fallback to
    1.x behavior.

*   `CUDNN_INSTALL_PATH`, `TENSORRT_INSTALL_PATH`, `NCCL_INSTALL_PATH`,
    `NCCL_HDR_PATH` are deprecated. Use `TF_CUDA_PATHS` instead which supports a
    comma-separated list of base paths that are searched to find CUDA libraries
    and headers.

Refer to our
[public project status tracker](https://github.com/orgs/tensorflow/projects/4)
and
[issues tagged with `2.0`](https://github.com/tensorflow/tensorflow/issues?q=is%3Aopen+is%3Aissue+label%3A2.0)
on GitHub for insight into recent issues and development progress.

If you experience any snags when using TF 2.0, please let us know at the
[TF 2.0 Testing User Group](https://groups.google.com/a/tensorflow.org/forum/?utm_medium=email&utm_source=footer#!forum/testing).
We have a support mailing list as well as weekly testing meetings, and would
love to hear your migration feedback and questions.

## Bug Fixes and Other Changes

*   `tf.contrib`:

    *   Expose `tf.contrib.proto.*` ops in `tf.io` (they will exist in TF2)

*   `tf.data`:

    *   Add support for TensorArrays to `tf.data Dataset`.
    *   Integrate Ragged Tensors with `tf.data`.
    *   All core and experimental tf.data transformations that input
        user-defined functions can span multiple devices now.
    *   Extending the TF 2.0 support for `shuffle(...,
        reshuffle_each_iteration=True)` and `cache()` to work across different
        Python iterators for the same dataset.
    *   Removing the `experimental_numa_aware` option from `tf.data.Options`.
    *   Add `num_parallel_reads` and passing in a Dataset containing filenames
        into `TextLineDataset` and `FixedLengthRecordDataset`.
    *   Add support for defaulting the value of `cycle_length` argument of
        `tf.data.Dataset.interleave` to the number of schedulable CPU cores.
    *   Promoting `tf.data.experimental.enumerate_dataset` to core as
        `tf.data.Dataset.enumerate`.
    *   Promoting `tf.data.experimental.unbatch` to core as
        `tf.data.Dataset.unbatch`.
    *   Adds option for introducing slack in the pipeline to reduce CPU
        contention, via `tf.data.Options().experimental_slack = True`
    *   Added experimental support for parallel batching to `batch()` and
        `padded_batch()`. This functionality can be enabled through
        `tf.data.Options()`.
    *   Support cancellation of long-running `reduce`.
    *   Now we use `dataset` node name as prefix instead of the op name, to
        identify the component correctly in metrics, for pipelines with repeated
        components.
    *   Improve the performance of datasets using `from_tensors()`.
    *   Promoting `unbatch` from experimental to core API.
    *   Adding support for datasets as inputs to `from_tensors` and
        `from_tensor_slices` and batching and unbatching of nested datasets.

*   `tf.distribute`:

    *   Enable `tf.distribute.experimental.MultiWorkerMirroredStrategy` working
        in eager mode.
    *   Callbacks are supported in `MultiWorkerMirroredStrategy`.
    *   Disable `run_eagerly` and distribution strategy if there are symbolic
        tensors added to the model using `add_metric` or `add_loss`.
    *   Loss and gradients should now more reliably be correctly scaled w.r.t.
        the global batch size when using a `tf.distribute.Strategy`.
    *   Set default loss reduction as `AUTO` for improving reliability of loss
        scaling with distribution strategy and custom training loops. `AUTO`
        indicates that the reduction option will be determined by the usage
        context. For almost all cases this defaults to `SUM_OVER_BATCH_SIZE`.
        When used in distribution strategy scope, outside of built-in training
        loops such as `tf.keras` `compile` and `fit`, we expect reduction value
        to be 'None' or 'SUM'. Using other values will raise an error.
    *   Support for multi-host `ncclAllReduce` in Distribution Strategy.

*   `tf.estimator`:

    *   Replace `tf.contrib.estimator.add_metrics` with
        `tf.estimator.add_metrics`
    *   Use `tf.compat.v1.estimator.inputs` instead of `tf.estimator.inputs`
    *   Replace contrib references with `tf.estimator.experimental.*` for apis
        in early_s in Estimator
    *   Canned Estimators will now use keras optimizers by default. An error
        will be raised if tf.train.Optimizers are used, and you will have to
        switch to tf.keras.optimizers or tf.compat.v1 canned Estimators.
    *   A checkpoint converter for canned Estimators has been provided to
        transition canned Estimators that are warm started from
        `tf.train.Optimizers` to `tf.keras.optimizers`.
    *   Losses are scaled in canned estimator v2 and not in the optimizers
        anymore. If you are using Estimator + distribution strategy + optimikzer
        v1 then the behavior does not change. This implies that if you are using
        custom estimator with optimizer v2, you have to scale losses. We have
        new utilities to help scale losses `tf.nn.compute_average_loss`,
        `tf.nn.scale_regularization_loss`.

*   `tf.keras`:

    *   Premade models (including Linear and WideDeep) have been introduced for
        the purpose of replacing Premade estimators.
    *   Model saving changes
    *   `model.save` and `tf.saved_model.save` may now save to the TensorFlow
        SavedModel format. The model can be restored using
        `tf.keras.models.load_model`. HDF5 files are still supported, and may be
        used by specifying `save_format="h5"` when saving.
    *   Raw TensorFlow functions can now be used in conjunction with the Keras
        Functional API during model creation. This obviates the need for users
        to create Lambda layers in most cases when using the Functional API.
        Like Lambda layers, TensorFlow functions that result in Variable
        creation or assign ops are not supported.
    *   Add support for passing list of lists to the `metrics` argument in Keras
        `compile`.
    *   Add `tf.keras.layers.AbstractRNNCell` as the preferred implementation
        for RNN cells in TF v2. User can use it to implement RNN cells with
        custom behavior.
    *   Keras training and validation curves are shown on the same plot when
        using the TensorBoard callback.
    *   Switched Keras `fit/evaluate/predict` execution to use only a single
        unified path by default unless eager execution has been explicitly
        disabled, regardless of input type. This unified path places an
        eager-friendly training step inside of a `tf.function`. With this
    *   All input types are converted to `Dataset`.
    *   The path assumes there is always a distribution strategy. when
        distribution strategy is not specified the path uses a no-op
        distribution strategy.
    *   The training step is wrapped in `tf.function` unless `run_eagerly=True`
        is set in compile. The single path execution code does not yet support
        all use cases. We fallback to the existing v1 execution paths if your
        model contains the following:
        1.  `sample_weight_mode` in compile
        2.  `weighted_metrics` in compile
        3.  v1 optimizer
        4.  target tensors in compile If you are experiencing any issues because
            of this change, please inform us (file an issue) about your use case
            and you can unblock yourself by setting
            `experimental_run_tf_function=False` in compile meanwhile. We have
            seen couple of use cases where the model usage pattern is not as
            expected and would not work with this change.
    *   output tensors of one layer is used in the constructor of another.
    *   symbolic tensors outside the scope of the model are used in custom loss
        functions. The flag can be disabled for these cases and ideally the
        usage pattern will need to be fixed.
    *   Mark Keras `set_session` as `compat.v1` only.
    *   `tf.keras.estimator.model_to_estimator` now supports exporting to
        `tf.train.Checkpoint format`, which allows the saved checkpoints to be
        compatible with `model.load_weights`.
    *   `keras.backend.resize_images` (and consequently,
        `keras.layers.Upsampling2D`) behavior has changed, a bug in the resizing
        implementation was fixed.
    *   Add an `implementation=3` mode for `tf.keras.layers.LocallyConnected2D`
        and `tf.keras.layers.LocallyConnected1D` layers using `tf.SparseTensor`
        to store weights, allowing a dramatic speedup for large sparse models.
    *   Raise error if `batch_size` argument is used when input is
        dataset/generator/keras sequence.
    *   Update TF 2.0 `keras.backend.name_scope` to use TF 2.0 `name_scope`.
    *   Add v2 module aliases for losses, metrics, initializers and optimizers:
        `tf.losses = tf.keras.losses` & `tf.metrics = tf.keras.metrics` &
        `tf.initializers = tf.keras.initializers` & `tf.optimizers =
        tf.keras.optimizers`.
    *   Updates binary cross entropy logic in Keras when input is probabilities.
        Instead of converting probabilities to logits, we are using the cross
        entropy formula for probabilities.
    *   Added public APIs for `cumsum` and `cumprod` keras backend functions.
    *   Add support for temporal sample weight mode in subclassed models.
    *   Raise `ValueError` if an integer is passed to the training APIs.
    *   Added fault-tolerance support for training Keras model via `model.fit()`
        with `MultiWorkerMirroredStrategy`, tutorial available.
    *   Custom Callback tutorial is now available.
    *   To train with `tf.distribute`, Keras API is recommended over estimator.
    *   `steps_per_epoch` and `steps` arguments are supported with numpy arrays.
    *   New error message when unexpected keys are used in
        sample_weight/class_weight dictionaries
    *   Losses are scaled in Keras compile/fit and not in the optimizers
        anymore. If you are using custom training loop, we have new utilities to
        help scale losses `tf.nn.compute_average_loss`,
        `tf.nn.scale_regularization_loss`.
    *   `Layer` apply and add_variable APIs are deprecated.
    *   Added support for channels first data format in cross entropy losses
        with logits and support for tensors with unknown ranks.
    *   Error messages will be raised if `add_update`, `add_metric`, `add_loss`,
        activity regularizers are used inside of a control flow branch.
    *   New loss reduction types:
    *   `AUTO`: Indicates that the reduction option will be determined by the
        usage context. For almost all cases this defaults to
        `SUM_OVER_BATCH_SIZE`. When used with `tf.distribute.Strategy`, outside
        of built-in training loops such as `tf.keras` `compile` and `fit`, we
        expect reduction value to be `SUM` or `NONE`. Using `AUTO` in that case
        will raise an error.
    *   `NONE`: Weighted losses with one dimension reduced (axis=-1, or axis
        specified by loss function). When this reduction type used with built-in
        Keras training loops like `fit`/`evaluate`, the unreduced vector loss is
        passed to the optimizer but the reported loss will be a scalar value.
    *   `SUM`: Scalar sum of weighted losses. 4. `SUM_OVER_BATCH_SIZE`: Scalar
        `SUM` divided by number of elements in losses. This reduction type is
        not supported when used with `tf.distribute.Strategy` outside of
        built-in training loops like `tf.keras` `compile`/`fit`.
    *   Wraps losses passed to the `compile` API (strings and v1 losses) which
        are not instances of v2 `Loss` class in `LossWrapper` class. => All
        losses will now use `SUM_OVER_BATCH_SIZE` reduction as default.
    *   `model.add_loss(symbolic_tensor)` should work in ambient eager.
    *   Update metric name to always reflect what the user has given in compile.
        Affects following cases
    *   When name is given as 'accuracy'/'crossentropy'
    *   When an aliased function name is used eg. 'mse'
    *   Removing the `weighted` prefix from weighted metric names.
    *   Allow non-Tensors through v2 losses.
    *   Add v2 sparse categorical crossentropy metric.
    *   Add v2 APIs for `AUCCurve` and `AUCSummationMethod` enums.
    *   `add_update` can now be passed a zero-arg callable in order to support
        turning off the update when setting `trainable=False` on a Layer of a
        Model compiled with `run_eagerly=True`.
    *   Standardize the LayerNormalization API by replacing the args `norm_axis`
        and `params_axis` with `axis`.
    *   Fixed critical bugs that help with DenseFeatures usability in TF2

*   `tf.lite`:

    *   Added evaluation script for `COCO` minival
    *   Add delegate support for `QUANTIZE`.
    *   Add `GATHER` support to NN API delegate.
    *   Added support for TFLiteConverter Python API in 2.0. Contains functions
        from_saved_model, from_keras_file, and from_concrete_functions.
    *   Add `EXPAND_DIMS` support to NN API delegate TEST.
    *   Add `narrow_range` attribute to QuantizeAndDequantizeV2 and V3.
    *   Added support for `tflite_convert` command line tool in 2.0.
    *   Post-training quantization tool supports quantizing weights shared by
        multiple operations. The models made with versions of this tool will use
        INT8 types for weights and will only be executable interpreters from
        this version onwards.
    *   Post-training quantization tool supports fp16 weights and GPU delegate
        acceleration for fp16.
    *   Add delegate support for `QUANTIZED_16BIT_LSTM`.
    *   Extracts `NNAPIDelegateKernel` from nnapi_delegate.cc

*   TensorRT

    *   Add TensorFlow 2.0-compatible `TrtGraphConverterV2` API for TensorRT
        conversion. TensorRT initialization arguments are now passed wrapped in
        a named-tuple, `TrtConversionParams`, rather than as separate arguments
        as in `TrtGraphConverter`.
    *   Changed API to optimize TensorRT engines during graph optimization. This
        is now done by calling `converter.build()` where previously
        `is_dynamic_op=False` would be set.
    *   `converter.convert()` no longer returns a `tf.function`. Now the
        function must be accessed from the saved model.
    *   The `converter.calibrate()` method has been removed. To trigger
        calibration, a `calibration_input_fn` should be provided to
        `converter.convert()`.

*   Other:

    *   Fix accidental quadratic graph construction cost in graph-mode
        `tf.gradients()`.
    *   ResourceVariable's gather op supports batch dimensions.
    *   ResourceVariable support for `gather_nd`.
    *   `ResourceVariable` and `Variable` no longer accepts `constraint` in the
        constructor, nor expose it as a @property.
    *   Added gradient for `SparseToDense` op.
    *   Expose a flag that allows the number of threads to vary across Python
        benchmarks.
    *   `image.resize` in 2.0 now supports gradients for the new resize kernels.
    *   `image.resize` now considers proper pixel centers and has new kernels
        (incl. anti-aliasing).
    *   Renamed `tf.image` functions to remove duplicate "image" where it is
        redundant.
    *   Variadic reduce is supported on CPU Variadic reduce is supported on CPU
    *   Remove unused `StringViewVariantWrapper`.
    *   Delete unused `Fingerprint64Map` op registration
    *   Add broadcasting support to `tf.matmul`.
    *   Add C++ Gradient for `BatchMatMulV2`.
    *   Add `tf.math.cumulative_logsumexp` operation.
    *   Add ellipsis (...) support for `tf.einsum()`.
    *   Add expand_composites argument to all `nest.*` methods.
    *   Added `strings.byte_split`.
    *   Add a new "result_type" parameter to `tf.strings.split`.
    *   Add name argument to `tf.string_split` and `tf.strings_split`.
    *   Extend `tf.strings.split` to support inputs with any rank.
    *   Added `tf.random.binomial`.
    *   Added `key` and `skip` methods to `random.experimental.Generator`.
    *   Extend `tf.function` with basic support for CompositeTensors arguments
        (such as `SparseTensor` and `RaggedTensor`).
    *   `parallel_for.pfor`: add converters for Softmax, LogSoftmax, IsNaN, All,
        Any, and MatrixSetDiag.
    *   `parallel_for`: add converters for LowerTriangularSolve and Cholesky.
    *   `parallel_for`: add converters for `LogMatrixDeterminant` and
        `MatrixBandPart`.
    *   `parallel_for`: Add converter for `MatrixDiag`.
    *   `parallel_for`: Add converters for `OneHot`, `LowerBound`, `UpperBound`.
    *   `parallel_for`: add converter for `BroadcastTo`.
    *   Add `pfor` converter for `Squeeze`.
    *   Add `RaggedTensor.placeholder()`.
    *   Add ragged tensor support to `tf.squeeze`.
    *   Update RaggedTensors to support int32 row_splits.
    *   Allow `LinearOperator.solve` to take a `LinearOperator`.
    *   Allow all dtypes for `LinearOperatorCirculant`.
    *   Introduce MaxParallelism method
    *   Add `LinearOperatorHouseholder`.
    *   Adds Philox support to new stateful RNG's XLA path.
    *   Added `TensorSpec` support for CompositeTensors.
    *   Added `tf.linalg.tridiagonal_solve` op.
    *   Added partial_pivoting input parameter to `tf.linalg.tridiagonal_solve`.
    *   Added gradient to `tf.linalg.tridiagonal_solve`.
    *   Added `tf.linalg.tridiagonal_mul op`.
    *   Added GPU implementation of `tf.linalg.tridiagonal_matmul`.
    *   Added `LinearOperatorToeplitz`.
    *   Upgraded LIBXSMM to version 1.11.
    *   Uniform processing of quantized embeddings by Gather and EmbeddingLookup
        Ops.
    *   Correct a misstatement in the documentation of the sparse softmax cross
        entropy logit parameter.
    *   Add `tf.ragged.boolean_mask`.
    *   `tf.switch_case` added, which selects a branch_fn based on a
        branch_index.
    *   The C++ kernel of gather op supports batch dimensions.
    *   Fixed default value and documentation for `trainable` arg of
        tf.Variable.
    *   `EagerTensor` now supports numpy buffer interface for tensors.
    *   This change bumps the version number of the `FullyConnected` Op to 5.
    *   Added new op: `tf.strings.unsorted_segment_join`.
    *   Added HW acceleration support for `topK_v2`.
    *   CloudBigtable version updated to v0.10.0 BEGIN_PUBLIC CloudBigtable
        version updated to v0.10.0.
    *   Expose `Head` as public API.
    *   Added `tf.sparse.from_dense` utility function.
    *   Improved ragged tensor support in `TensorFlowTestCase`.
    *   Added a function `nested_value_rowids` for ragged tensors.
    *   Added `tf.ragged.stack`.
    *   Makes the a-normal form transformation in Pyct configurable as to which
        nodes are converted to variables and which are not.
    *   `ResizeInputTensor` now works for all delegates.
    *   `tf.cond` emits a StatelessIf op if the branch functions are stateless
        and do not touch any resources.
    *   Add support of local soft device placement for eager op.
    *   Pass partial_pivoting to the `_TridiagonalSolveGrad`.
    *   Add HW acceleration support for `LogSoftMax`.
    *   Add guard to avoid acceleration of L2 Normalization with input rank != 4
    *   Fix memory allocation problem when calling `AddNewInputConstantTensor`.
    *   Delegate application failure leaves interpreter in valid state
    *   `tf.while_loop` emits a StatelessWhile op if the cond and body functions
        are stateless and do not touch any resources.
    *   `tf.cond`, `tf.while` and if and while in AutoGraph now accept a
        nonscalar predicate if has a single element. This does not affect non-V2
        control flow.
    *   Fix potential security vulnerability where decoding variant tensors from
        proto could result in heap out of bounds memory access.
    *   Only create a GCS directory object if the object does not already exist.
    *   Introduce `dynamic` constructor argument in Layer and Model, which
        should be set to `True` when using imperative control flow in the `call`
        method.
    *   Begin adding Go wrapper for C Eager API.
    *   XLA HLO graphs can be inspected with interactive_graphviz tool now.
    *   Add dataset ops to the graph (or create kernels in Eager execution)
        during the python Dataset object creation instead doing it during
        Iterator creation time.
    *   Add `batch_dims` argument to `tf.gather`.
    *   The behavior of `tf.gather` is now correct when `axis=None` and
        `batch_dims<0`.
    *   Update docstring for gather to properly describe the non-empty
        `batch_dims` case.
    *   Removing of dtype in the constructor of initializers and partition_info
        in call.
    *   Add `tf.math.nextafter` op.
    *   Turn on MKL-DNN contraction kernels by default. MKL-DNN dynamically
        dispatches the best kernel implementation based on CPU vector
        architecture. To disable them, build with
        `--define=tensorflow_mkldnn_contraction_kernel=0`.
    *   `tf.linspace(start, stop, num)` now always uses "stop" as last value
        (for num > 1)
    *   Added top-k to precision and recall to keras metrics.
    *   Add a ragged size op and register it to the op dispatcher
    *   Transitive dependencies on :`pooling_ops` were removed. Some users may
        need to add explicit dependencies on :`pooling_ops` if they reference
        the operators from that library.
    *   Add `CompositeTensor` base class.
    *   Malformed gif images could result in an access out of bounds in the
        color palette of the frame. This has been fixed now
    *   Add templates and interfaces for creating lookup tables
    *   `Tensor::UnsafeCopyFromInternal` deprecated in favor
        `Tensor::BitcastFrom`.
    *   In `map_vectorization` optimization, reduce the degree of parallelism in
        the vectorized map node.
    *   Add variant wrapper for `absl::string_view`.
    *   Add OpKernels for some stateless maps.
    *   DType is no longer convertible to an int. Use `dtype.as_datatype_enum`
        instead of `int(dtype)` to get the same result.
    *   Support both binary and -1/1 label input in v2 hinge and squared hinge
        losses.
    *   Added `LinearOperator.adjoint` and `LinearOperator.H` (alias).
    *   Expose CriticalSection in core as `tf.CriticalSection`.
    *   Enhanced graphviz output.
    *   Add opkernel templates for common table operations.
    *   Fix callbacks do not log values in eager mode when a deferred build
        model is used.
    *   `SignatureDef` util functions have been deprecated.
    *   Update `Fingerprint64Map` to use aliases
    *   Add legacy string flat hash map op kernels.
    *   Add support for `add_metric` in the graph function mode.
    *   Updating cosine similarity loss - removed the negate sign from cosine
        similarity.
    *   Changed default for gradient accumulation for TPU embeddings to true.
    *   Adds summary trace API for collecting graph and profile information.
    *   The `precision_mode` argument to `TrtGraphConverter` is now case
        insensitive.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

1e100, a6802739, 4d55397500, a6802739, Abdullah Selek, abenmao, Abolfazl
Shahbazi, Adam Richter, Adam Weiss, Ag Ramesh, Alan Du, Albin Joy, Alex, Alex
Itkes, Alex Sergeev, Alexander Pivovarov, Alexey Romanov, alhkad, Aman Patel,
Amit, Amit Kumar Jaiswal, Amit Srivastava, amoitra, Andreas Eberle, Andrew
Lihonosov, Andy Craze, Anshuman Tripathy, Anthony Hsu, Anthony Platanios, Anuj
Rawat, arp95, Arpit Shah, Armen Poghosov, armenpoghosov, Astropeak, Ashwin
Ramaswami, Arpit Shah, Augustina Ragwitz, Aurelien Geron, AuréLien Geron,
avasid, aweers, awesomealex1, Ayush Agrawal, Bas Aarts, Bastian Eichenberger,
Bairen Yi, Bayberry Z, Ben Barsdell, Benjamin Peterson, bhack, Bharat
Raghunathan, Bhavani Subramanian, Bin Fan, blairhan, BléNesi Attila, Bodin-E,
Brandon Carter, Bryan Cutler, candy.dc, Cao Zongyan, Casper Da Costa-Luis, Chao
Liu, Chen Guoyin, chenchc, chengchingwen, chie8842, Christian Hansen, Christoph
Boeddeker, Christopher Yeh, Clayne Robison, Coady, Patrick, crafet, csukuangfj,
ctiijima, Dan Jarvis, Dan Lazewatsky, Daniel Ingram, Daniel Rasmussen, Daniel
Salvadori, Dave Airlie, David Norman, Dayananda V, delock, Denis Khalikov, Deven
Desai, Dheeraj Rajaram Reddy, Diego Caballero, dmitrievanthony, Donovan Ong,
Drew Szurko, Duncan Dean, Duncan Riach, Dustin Neighly, Dwight J Lyle, Eamon
Ito-Fisher, eashtian3, Edward Forgacs, EFanZh, ejot, Elroy Ashtian Jr, Eric
Schweitz, Evgeniy Polyakov, Fangjun Kuang, Federico Martinez, Fei Hu, Felix
Lemke, Filip Matzner, FlashTek, fo40225, formath, FrançOis Chollet, frreiss,
Fred Reiss, Frederic Bastien, Fredrik Knutsson, G. Hussain Chinoy, Gabriel,
Gautam, gehring, Geoffrey Irving, George Grzegorz Pawelczak, Grzegorz Pawelczak,
George Sterpu, Gianluca Varisco, Gleb Popov, Greg Peatfield, Guillaume Klein,
Gurpreet Singh, Gustavo Lima Chaves, Gyoung-Yoon Ryoo, haison, Hanton Yang,
HanGuo97, Haraldur TóMas HallgríMsson, Hari Shankar, hehongliang, Heungsub Lee,
Hoeseong Kim, Huan Li (李卓桓), HåKon Sandsmark, I-Hong, I-Hong Jhuo, Ilham
Firdausi Putra, Ilango R, Imran Salam, Innovimax, Jacky Ko, Irene Dea, Ivan
Habernal, Jakub Lipinski, Jacky, Jason Zaman, Jason Zavaglia, jayhpark530,
jcf94, jefby, Jeff Daily, Jeff Poznanovic, Jeffrey Poznanovic, Jekyll Lai, jer,
Jeroen BéDorf, jerryyin, jhalakp, jiakai, Jia Qingtong, Jiankang, JiangXIAO, Joe
Bowser, Joe Q, Joe Quadrino, Joel Shapiro, Johan Gunnarsson, Jojimon Varghese,
Jonas Rauber, Jonathan Kyl, Jonathan, Joon, Joppe Geluykens, Joseph Friedman,
Josh Beal, jtressle, Julian Niedermeier, Junqin Zhang, Justin Dujardin, Justin
Tunis, jwu, K. Hodges, kaixih, Kaixi Hou, kjopek, Karl Lessard, Karl
Weinmeister, Karthik Muthuraman, Kashif Rasul, Kay Zhu, Kbhute-Ibm, KDR, Keno
Fischer, Kevin Mader, khanhlvg, Kilaru Yasaswi Sri Chandra Gandhi, Koan-Sin Tan,
Koock Yoon, kouml, ktaebum, Kyuwon Kim, Lakshay Tokas, Laurent Le Brun,
leike666666, leonard951, Leslie-Fang, Letian Kang, Li, Guizi, Loo Rong Jie,
Lucas Hendren, Lukas Folle, Lukas Geiger, Luke Han, luxupu, lvli, Ma, Guokai,
Mahmoud Abuzaina, Maksym Kysylov, Mandar Deshpande, manhyuk, Manraj Singh
Grover, Marco Gaido, Marek Drozdowski, Margaret Maynard-Reid, Mark Ryan, mars20,
Mateusz Chudyk, Matt Conley, mbhuiyan, mdfaijul, Mei Jie, Melissa Grueter,
merturl, MichaelKonobeev, Michael KäUfl, Michal W. Tarnowski, MickaëL
Schoentgen, Miguel Morin, Mihail Salnikov, Mikalai Drabovich, Mike Arpaia, Mike
Holcomb, minds, monklof, Moses Marin, mpppk, Mr. Metal, Mshr-H, musikisomorphie,
nammbash, Natalia Gimelshein, Nathan Luehr, Nayana-Ibm, Nayana Thorat, neargye,
Neeraj Pradhan, Nehal J Wani, Neil, Nick, Nick Lewycky, Niels Ole Salscheider,
Niklas SilfverströM, Niranjan Hasabnis, Nuka-137, Nutti, ocjosen, olicht,
omeir1, P Sudeepam, Paige Bailey, Palmer Lao, Pan Daoxin, Pariksheet Pinjari,
Pasquale Minervini, Patrick J. Lopresti, Patrik Gustavsson, Pavel Akhtyamov,
Pavel Samolysov, PENGWA, per1234, PeterLee, Phan Van Nguyen Duc, Philipp Jund,
Phillip Kravtsov, Pooya Davoodi, Pranav Marathe, Putra Manggala, Qingqing Cao, R
S Nikhil Krishna, Rajeshwar Reddy T, Ramon ViñAs, Rasmus Diederichsen, Reuben
Morais, robert, Rohit Gupta, Roland Zimmermann, Roman Soldatow, RonLek, Ruizhe,
Ryan Jiang, saishruthi, Saleem Abdulrasool, Samantha Andow, Sami Kama,
Sana-Damani, Saurabh Deoras, sdamani, Sean Morgan, seanshpark, Sebastien Iooss,
Serv-Inc, Severen Redwood, Shahzad Lone, Shashank Gupta, shashvat, Shashvat
Chand Shahi, Shubham Goyal, Shashi, Sigrid Keydana, Siju, Siju Samuel,
sleighsoft, smilu97, Snease-Abq, Son Tran, Spencer Schaber, sremedios, Srini511,
srinivasan.narayanamoorthy, Steve Lang, Steve Nesae, Subin, Sumesh Udayakumaran,
Sungmann Cho, sunway513, Supriya Rao, sxwang, Tae-Hwan Jung, Taehoon Lee, Takeo
Sawada, Taylor Jakobson, Taylor Thornton, Ted Chang, TengLu, terryky,
ThisIsIsaac, ThisIsPIRI, Thomas Deegan, Thomas Hagebols, tianyapiaozi, Till
Hoffmann, Tim Zaman, tomguluson92, Tongxuan Liu, Trent Lo, Trevor Morris,
TungJerry, Tyorden, Uday Bondhugula, v1incent, Vagif, Vasileios Lioutas,
vbvg2008, vcarpani, Vijay Ravichandran, Vikram Tiwari,Viktor Gal, Vishwak
Srinivasan, Vincent, Vishnuvardhan Janapati, Vitor-Alves, Vivek Suryamurthy,
wangsiyu, wateryzephyr, WeberXie, Wei Wang, WeijieSun, Wen-Heng (Jack) Chung,
wenxizhu, Will Battel, William D. Irons, winstonq, wyzhao, Xiaoming (Jason) Cui,
Xiaoquan Kong, Xin, Xinping Wang, Yan Facai (颜发才), Yann-Yy, Yasir Modak,
Yasuhiro Matsumoto, ymodak, Yong Tang, Yongfeng Gu, Younes Khoudli, Yuan Lin,
Yuan (Terry) Tang, Yuchen Ying, Yves-Noel Weweler, zhangyujing, zjjott, zyeric,
王振华 (Zhenhua Wang), 黄鑫

# Release 1.14.0

## Major Features and Improvements

*   This is the first 1.x release containing the compat.v2 module. This module
    is required to allow libraries to publish code which works in both 1.x and
    2.x. After this release, no backwards incompatible changes are allowed in
    the 2.0 Python API.
*   Turn on MKL-DNN contraction kernels by default. MKL-DNN dynamically
    dispatches the best kernel implementation based on CPU vector architecture.
    To disable them, build with --define=tensorflow_mkldnn_contraction_kernel=0.

## Behavioral changes

*   Set default loss reduction as `AUTO` for improving reliability of loss
    scaling with distribution strategy and custom training loops. `AUTO`
    indicates that the reduction option will be determined by the usage context.
    For almost all cases this defaults to `SUM_OVER_BATCH_SIZE`. When used in
    distribution strategy scope, outside of built-in training loops such as
    `tf.keras` `compile` and `fit`, we expect reduction value to be 'None' or
    'SUM'. Using other values will raise an error.
*   Wraps losses passed to the `compile` API (strings and v1 losses) which are
    not instances of v2 `Loss` class in `LossWrapper` class. => All losses will
    now use `SUM_OVER_BATCH_SIZE` reduction as default.
*   Disable `run_eagerly` and distribution strategy if there are symbolic
    tensors added to the model using `add_metric` or `add_loss`.
*   tf.linspace(start, stop, num) now always uses "stop" as last value (for
    num > 1)
*   `ResourceVariable` and `Variable` no longer accepts `constraint` in the
    constructor, nor expose it as a @property.
*   The behavior of tf.gather is now correct when axis=None and batch_dims<0.
*   Only create a GCS directory object if the object does not already exist.
*   In `map_vectorization` optimization, reduce the degree of parallelism in the
    vectorized map node.
*   Bug fix: loss and gradients should now more reliably be correctly scaled
    w.r.t. the global batch size when using a tf.distribute.Strategy.
*   Updating cosine similarity loss - removed the negate sign from cosine
    similarity.
*   DType is no longer convertible to an int. Use dtype.as_datatype_enum instead
    of int(dtype) to get the same result.
*   Changed default for gradient accumulation for TPU embeddings to true.
*   Callbacks now log values in eager mode when a deferred build model is used.
*   Transitive dependencies on :pooling_ops were removed. Some users may need to
    add explicit dependencies on :pooling_ops if they reference the operators
    from that library.
*   tf.keras.optimizers default learning rate changes:
    *   Adadelta: 1.000 to 0.001
    *   Adagrad: 0.01 to 0.001
    *   Adamax: 0.002 to 0.001
    *   NAdam: 0.002 to 0.001

## Bug Fixes and Other Changes

*   Documentation
*   Deprecations and Symbol renames.
    *   Remove unused StringViewVariantWrapper
    *   Delete unused Fingerprint64Map op registration
    *   SignatureDef util functions have been deprecated.
    *   Renamed tf.image functions to remove duplicate "image" where it is
        redundant.
    *   tf.keras.experimental.export renamed to
        tf.keras.experimental.export_saved_model
    *   Standardize the LayerNormalization API by replacing the args `norm_axis`
        and `params_axis` with `axis`.
    *   Tensor::UnsafeCopyFromInternal deprecated in favor Tensor::BitcastFrom
*   Keras & Python API
    *   Add v2 module aliases for:
    *   tf.initializers => tf.keras.initializers
    *   tf.losses => tf.keras.losses & tf.metrics => tf.keras.metrics
    *   tf.optimizers => tf.keras.optimizers
    *   Add tf.keras.layers.AbstractRNNCell as the preferred implementation of
        RNN cell for TF v2. User can use it to implement RNN cell with custom
        behavior.
    *   Adding `clear_losses` API to be able to clear losses at the end of
        forward pass in a custom training loop in eager.
    *   Add support for passing list of lists to the `metrics` param in Keras
        `compile`.
    *   Added top-k to precision and recall to keras metrics.
    *   Adding public APIs for `cumsum` and `cumprod` keras backend functions.
    *   Fix: model.add_loss(symbolic_tensor) should work in ambient eager.
    *   Add name argument to tf.string_split and tf.strings_split
    *   Minor change to SavedModels exported from Keras using
        tf.keras.experimental.export. (SignatureDef key for evaluation mode is
        now "eval" instead of "test"). This will be reverted back to "test" in
        the near future.
    *   Updates binary cross entropy logic in Keras when input is probabilities.
        Instead of converting probabilities to logits, we are using the cross
        entropy formula for probabilities.
    *   Raw TensorFlow functions can now be used in conjunction with the Keras
        Functional API during model creation. This obviates the need for users
        to create Lambda layers in most cases when using the Functional API.
        Like Lambda layers, TensorFlow functions that result in Variable
        creation or assign ops are not supported.
    *   Keras training and validation curves are shown on the same plot.
    *   Introduce `dynamic` constructor argument in Layer and Model, which
        should be set to True when using imperative control flow in the `call`
        method.
    *   Removing of dtype in the constructor of initializers and partition_info
        in call.
*   New ops and improved op functionality
    *   Add OpKernels for some stateless maps
    *   Add v2 APIs for AUCCurve and AUCSummationMethod
        enums. #tf-metrics-convergence
    *   Add tf.math.nextafter op.
    *   Add CompositeTensor base class.
    *   Add tf.linalg.tridiagonal_solve op.
    *   Add opkernel templates for common table operations.
    *   Added support for TFLite in TensorFlow 2.0.
    *   Adds summary trace API for collecting graph and profile information.
    *   Add batch_dims argument to tf.gather.
    *   Add support for `add_metric` in the graph function mode.
    *   Add C++ Gradient for BatchMatMulV2.
    *   Added tf.random.binomial
    *   Added gradient for SparseToDense op.
    *   Add legacy string flat hash map op kernels
    *   Add a ragged size op and register it to the op dispatcher
    *   Add broadcasting support to tf.matmul.
    *   Add ellipsis (...) support for tf.einsum()
    *   Added LinearOperator.adjoint and LinearOperator.H (alias).
    *   Added GPU implementation of tf.linalg.tridiagonal_solve.
    *   Added strings.byte_split
    *   Add RaggedTensor.placeholder()
    *   Add a new "result_type" parameter to tf.strings.split
    *   `add_update` can now be passed a zero-arg callable in order to support
        turning off the update when setting `trainable=False` on a Layer of a
        Model compiled with `run_eagerly=True`.
    *   Add variant wrapper for absl::string_view
    *   Add expand_composites argument to all nest.* methods.
    *   Add pfor converter for Squeeze.
    *   Bug fix for tf.tile gradient
    *   Expose CriticalSection in core as tf.CriticalSection.
    *   Update Fingerprint64Map to use aliases
    *   ResourceVariable support for gather_nd.
    *   ResourceVariable's gather op supports batch dimensions.
    *   Variadic reduce is supported on CPU
    *   Extend tf.function with basic support for CompositeTensors arguments
        (such as SparseTensor and RaggedTensor).
    *   Add templates and interfaces for creating lookup tables
    *   Post-training quantization tool supports quantizing weights shared by
        multiple operations. The models made with versions of this tool will use
        INT8 types for weights and will only be executable interpreters from
        this version onwards.
    *   Malformed gif images could result in an access out of bounds in the
        color palette of the frame. This has been fixed now
    *   image.resize now considers proper pixel centers and has new kernels
        (incl. anti-aliasing).
    *   Added an isotonic regression solver (tf.nn.isotonic_regression).
*   Performance
    *   Turn on MKL-DNN contraction kernels by default. MKL-DNN dynamically
        dispatches the best kernel implementation based on CPU vector
        architecture. To disable them, build with
        --define=tensorflow_mkldnn_contraction_kernel=0.
    *   Support for multi-host ncclAllReduce in Distribution Strategy.
    *   Expose a flag that allows the number of threads to vary across Python
        benchmarks.
*   TensorFlow 2.0 Development
    *   Add v2 sparse categorical crossentropy metric.
    *   Allow non-Tensors through v2 losses.
    *   Add UnifiedGRU as the new GRU implementation for tf2.0. Change the
        default recurrent activation function for GRU from 'hard_sigmoid' to
        'sigmoid', and 'reset_after' to True in 2.0. Historically recurrent
        activation is 'hard_sigmoid' since it is fast than 'sigmoid'. With new
        unified backend between CPU and GPU mode, since the CuDNN kernel is
        using sigmoid, we change the default for CPU mode to sigmoid as well.
        With that, the default GRU will be compatible with both CPU and GPU
        kernel. This will enable user with GPU to use CuDNN kernel by default
        and get a 10x performance boost in training. Note that this is
        checkpoint breaking change. If user want to use their 1.x pre-trained
        checkpoint, please construct the layer with
        GRU(recurrent_activation='hard_sigmoid', reset_after=False) to fallback
        to 1.x behavior.
    *   TF 2.0 - Update metric name to always reflect what the user has given in
        compile. Affects following cases 1. When name is given as
        'accuracy'/'crossentropy' 2. When an aliased function name is used eg.
        'mse' 3. Removing the `weighted` prefix from weighted metric names.
    *   Begin adding Go wrapper for C Eager API
    *   image.resize in 2.0 now supports gradients for the new resize kernels.
    *   removed tf.string_split from v2 API
    *   Expose tf.contrib.proto.* ops in tf.io (they will exist in TF2)
    *   "Updates the TFLiteConverter API in 2.0. Changes from_concrete_function
        to from_concrete_functions."
    *   Enable tf.distribute.experimental.MultiWorkerMirroredStrategy working in
        eager mode.
    *   Support both binary and -1/1 label input in v2 hinge and squared hinge
        losses.
*   TensorFlow Lite
    *   "Adds support for tflite_convert in 2.0."
    *   "Remove lite.OpHint, lite.experimental, and lite.constant from 2.0 API."
*   tf.contrib
    *   Added Neural Turing Implementation as described in
        https://arxiv.org/abs/1807.08518.
    *   Remove tf.contrib.timeseries dependency on TF distributions.
*   tf.data
    *   Add num_parallel_reads and passing in a Dataset containing filenames
        into TextLineDataset and FixedLengthRecordDataset
    *   Going forward we operate in TF 2.0, this change is part of the effort to
        slowly converting XYZDataset to DatasetV2 type which is the official
        version going to be used in TF 2.0 and motivated by some compatibility
        issue found, _BigtableXYZDataset (of type DatasetV2) does not implement
        the _as_variant_tensor() of DatasetV1, when moving contrib.bigtable to
        tensorflow_io. Converting into DatasetV2 removes the overheads to
        maintain V1 while we are moving into TF 2.0.
    *   Add dataset ops to the graph (or create kernels in Eager execution)
        during the python Dataset object creation instead doing it during
        Iterator creation time.
    *   Add support for TensorArrays to tf.data Dataset.
    *   Switching tf.data functions to use `defun`, providing an escape hatch to
        continue using the legacy `Defun`.
*   Toolchains
    *   CUDNN_INSTALL_PATH, TENSORRT_INSTALL_PATH, NCCL_INSTALL_PATH,
        NCCL_HDR_PATH are deprecated. Use TF_CUDA_PATHS instead which supports a
        comma-separated list of base paths that are searched to find CUDA
        libraries and headers.
    *   TF code now resides in `tensorflow_core` and `tensorflow` is just a
        virtual pip package. No code changes are needed for projects using
        TensorFlow, the change is transparent
*   XLA
    *   XLA HLO graphs can be inspected with interactive_graphviz tool now.
*   Estimator
    *   Use tf.compat.v1.estimator.inputs instead of tf.estimator.inputs
    *   Replace contrib references with tf.estimator.experimental.* for apis in
        early_stopping.py

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

1e100, 4d55397500, a6802739, abenmao, Adam Weiss, Ag Ramesh, Alan Du, Albin Joy,
Alex, Aman Patel, Amit, Amit Kumar Jaiswal, Amit Srivastava, Andreas Eberle,
Andy Craze, Anthony Platanios, Armen Poghosov, armenpoghosov, arp95, Arpit Shah,
Ashwin Ramaswami, Aurelien Geron, AuréLien Geron, aweers, awesomealex1, Ayush
Agrawal, Ben Barsdell, Bharat Raghunathan, Bhavani Subramanian, blairhan,
BléNesi Attila, Brandon Carter, candy.dc, Chao Liu, chenchc, chie8842, Christian
Hansen, Christian Sigg, Clayne Robison, crafet, csukuangfj, ctiijima, Dan
Jarvis, Dan Lazewatsky, Daniel Ingram, Daniel Salvadori, Dave Airlie, David
Norman, Dayananda V, Dayananda-V, delock, Denis Khalikov, Deven Desai, Dheeraj
Rajaram Reddy, dmitrievanthony, Donovan Ong, Drew Szurko, Duncan Riach, Dustin
Neighly, Edward Forgacs, EFanZh, Fei Hu, Felix Lemke, Filip Matzner, fo40225,
frreiss, Gautam, gehring, Geoffrey Irving, Grzegorz George Pawelczak, Grzegorz
Pawelczak, Gyoung-Yoon Ryoo, HanGuo97, Hanton Yang, Hari Shankar, hehongliang,
Heungsub Lee, Hoeseong Kim, I-Hong Jhuo, Ilango R, Innovimax, Irene Dea, Jacky
Ko, Jakub Lipinski, Jason Zaman, jcf94, Jeffrey Poznanovic, Jens Elofsson,
Jeroen BéDorf, Jia Qingtong, Jiankang, Joe Q, Joe Quadrino, Joeran Beel, Jonas
Rauber, Jonathan, Jonathan Kyl, Joppe Geluykens, Joseph Friedman, jtressle, jwu,
K Yasaswi Sri Chandra Gandhi, K. Hodges, Kaixi Hou, Karl Lessard, Karl
Weinmeister, Karthik Muthuraman, Kashif Rasul, KDR, Keno Fischer, Kevin Mader,
kjopek, Koan-Sin Tan, kouml, ktaebum, Lakshay Tokas, Laurent Le Brun, Letian
Kang, Li, Guizi, Loo Rong Jie, Lucas Hendren, Lukas Geiger, Luke Han, luxupu,
Ma, Guokai, Mahmoud Abuzaina, Mandar Deshpande, manhyuk, Marco Gaido, Marek
Drozdowski, Mark Collier, Mark Ryan, mars20, Mateusz Chudyk, Matt Conley,
MattConley, mbhuiyan, mdfaijul, Melissa Grueter, Michael KäUfl, MickaëL
Schoentgen, Miguel Morin, Mihail Salnikov, Mike Arpaia, Mike Holcomb, monklof,
Moses Marin, Mshr-H, nammbash, Natalia Gimelshein, Nayana-Ibm, neargye, Neeraj
Pradhan, Nehal J Wani, Nick, Niels Ole Salscheider, Niranjan Hasabnis, nlewycky,
Nuka-137, Nutti, olicht, P Sudeepam, Palmer Lao, Pan Daoxin, Pariksheet Pinjari,
Pavel Samolysov, PENGWA, Pooya Davoodi, R S Nikhil Krishna, Rohit Gupta, Roman
Soldatow, rthadur, Ruizhe, Ryan Jiang, Samantha Andow, Sami Kama, Sana-Damani,
Saurabh Deoras, sdamani, seanshpark, Sebastien Iooss, Serv-Inc, Shahzad Lone,
Shashank Gupta, Shashi, shashvat, shashvatshahi1998, Siju, Siju Samuel,
Snease-Abq, Spencer Schaber, sremedios, srinivasan.narayanamoorthy, Steve Lang,
Steve Nesae, Sumesh Udayakumaran, Supriya Rao, Taylor Jakobson, Taylor Thornton,
Ted Chang, ThisIsPIRI, Thomas Deegan, Thomas Hagebols, tianyapiaozi, Tim Zaman,
tomguluson92, Tongxuan Liu, TungJerry, v1incent, Vagif, vcarpani, Vikram Tiwari,
Vishwak Srinivasan, Vitor-Alves, wangsiyu, wateryzephyr, WeberXie, WeijieSun,
Wen-Heng (Jack) Chung, wenxizhu, Will Battel, William D. Irons, wyzhao, Xin,
Yasuhiro Matsumoto, ymodak, Yong Tang, Younes Khoudli, Yuan Lin, Yves-Noel
Weweler, Zantares, zjjott, 卜居, 王振华 (Wang Zhenhua), 黄鑫

# Release 1.12.3

## Bug Fixes and Other Changes

*   Updates `png_archive` dependency to 1.6.37 to not be affected by
    CVE-2019-7317, CVE-2018-13785, and CVE-2018-14048.
*   Updates `sqlite` dependency to 3.28.0 to not be affected by CVE-2018-20506,
    CVE-2018-20346, and CVE-2018-20505.

# Release 1.12.2

## Bug Fixes and Other Changes

*   Fixes a potential security vulnerability where carefully crafted GIF images
    can produce a null pointer dereference during decoding.

# Release 1.13.0

## Major Features and Improvements

*   TensorFlow Lite has moved from contrib to core. This means that Python
    modules are under `tf.lite` and source code is now under `tensorflow/lite`
    rather than `tensorflow/contrib/lite`.
*   TensorFlow GPU binaries are now built against CUDA 10 and TensorRT 5.0.
*   Support for Python3.7 on all operating systems.
*   Moved NCCL to core.

## Behavioral changes

*   Disallow conversion of python floating types to uint32/64 (matching behavior
    of other integer types) in `tf.constant`.
*   Make the `gain` argument of convolutional orthogonal initializers
    (`convolutional_delta_orthogonal`, `convolutional_orthogonal_1D`,
    `convolutional_orthogonal_2D`, `convolutional_orthogonal_3D`) have
    consistent behavior with the `tf.initializers.orthogonal` initializer, i.e.
    scale the output l2-norm by `gain` and NOT by `sqrt(gain)`. (Note that these
    functions are currently in `tf.contrib` which is not guaranteed backward
    compatible).

## Bug Fixes and Other Changes

*   Documentation
    *   Update the doc with the details about the rounding mode used in
        quantize_and_dequantize_v2.
    *   Clarify that tensorflow::port::InitMain() *should* be called before
        using the TensorFlow library. Programs failing to do this are not
        portable to all platforms.
*   Deprecations and Symbol renames.
    *   Removing deprecations for the following endpoints: `tf.acos`,
        `tf.acosh`, `tf.add`, `tf.as_string`, `tf.asin`, `tf.asinh`, `tf.atan`,
        `tf.atan2`, `tf.atanh`, `tf.cos`, `tf.cosh`, `tf.equal`, `tf.exp`,
        `tf.floor`, `tf.greater`, `tf.greater_equal`, `tf.less`,
        `tf.less_equal`, `tf.log`, `tf.logp1`, `tf.logical_and`,
        `tf.logical_not`, `tf.logical_or`, `tf.maximum`, `tf.minimum`,
        `tf.not_equal`, `tf.sin`, `tf.sinh`, `tf.tan`
    *   Deprecate `tf.data.Dataset.shard`.
    *   Deprecate `saved_model.loader.load` which is replaced by
        `saved_model.load` and `saved_model.main_op`, which will be replaced by
        `saved_model.main_op` in V2.
    *   Deprecate tf.QUANTIZED_DTYPES. The official new symbol is
        tf.dtypes.QUANTIZED_DTYPES.
    *   Update sklearn imports for deprecated packages.
    *   Deprecate `Variable.count_up_to` and `tf.count_up_to` in favor of
        `Dataset.range`.
    *   Export `confusion_matrix` op as `tf.math.confusion_matrix` instead of
        `tf.train.confusion_matrix`.
    *   Add `tf.dtypes.` endpoint for every constant in dtypes.py. Moving
        endpoints in versions.py to corresponding endpoints in `tf.sysconfig.`
        and `tf.version.`. Moving all constants under `tf.saved_model`
        submodules to `tf.saved_model` module. New endpoints are added in V1 and
        V2 but existing endpoint removals are only applied in V2.
    *   Deprecates behavior where device assignment overrides collocation
        constraints inside a collocation context manager.
*   Keras & Python API
    *   Add to Keras functionality analogous to
        `tf.register_tensor_conversion_function`.
    *   Subclassed Keras models can now be saved through
        `tf.contrib.saved_model.save_keras_model`.
    *   `LinearOperator.matmul` now returns a new `LinearOperator`.
*   New ops and improved op functionality
    *   Add a Nearest Neighbor Resize op.
    *   Add an `ignore_unknown` argument to `parse_values` which suppresses
        ValueError for unknown hyperparameter types. Such * Add
        `tf.linalg.matvec` convenience function.
    *   `tf.einsum()`raises `ValueError` for unsupported equations like
        `"ii->"`.
    *   Add DCT-I and IDCT-I in `tf.signal.dct` and `tf.signal.idct`.
    *   Add LU decomposition op.
    *   Add quantile loss to gradient boosted trees in estimator.
    *   Add `round_mode` to `QuantizeAndDequantizeV2` op to select rounding
        algorithm.
    *   Add `unicode_encode`, `unicode_decode`, `unicode_decode_with_offsets`,
        `unicode_split`, `unicode_split_with_offset`, and `unicode_transcode`
        ops. Amongst other things, this Op adds the ability to encode, decode,
        and transcode a variety of input text encoding formats into the main
        Unicode encodings (UTF-8, UTF-16-BE, UTF-32-BE)
    *   Add "unit" attribute to the substr op, which allows obtaining the
        substring of a string containing unicode characters.
    *   Broadcasting support for Ragged Tensors.
    *   `SpaceToDepth` supports uint8 data type.
    *   Support multi-label quantile regression in estimator.
    *   We now use "div" as the default partition_strategy in
        `tf.nn.safe_embedding_lookup_sparse`, `tf.nn.sampled_softmax` and
        `tf.nn.nce_loss`. hyperparameter are ignored.
*   Performance
    *   Improve performance of GPU cumsum/cumprod by up to 300x.
    *   Added support for weight decay in most TPU embedding optimizers,
        including AdamW and MomentumW.
*   TensorFlow 2.0 Development
    *   Add a command line tool to convert to TF2.0, tf_upgrade_v2
    *   Merge `tf.spectral` into `tf.signal` for TensorFlow 2.0.
    *   Change the default recurrent activation function for LSTM from
        'hard_sigmoid' to 'sigmoid' in 2.0. Historically recurrent activation is
        'hard_sigmoid' since it is fast than 'sigmoid'. With new unified backend
        between CPU and GPU mode, since the CuDNN kernel is using sigmoid, we
        change the default for CPU mode to sigmoid as well. With that, the
        default LSTM will be compatible with both CPU and GPU kernel. This will
        enable user with GPU to use CuDNN kernel by default and get a 10x
        performance boost in training. Note that this is checkpoint breaking
        change. If user want to use their 1.x pre-trained checkpoint, please
        construct the layer with LSTM(recurrent_activation='hard_sigmoid') to
        fallback to 1.x behavior.
*   TensorFlow Lite
    *   Move from `tensorflow/contrib/lite` to `tensorflow/lite`.
    *   Add experimental Java API for injecting TensorFlow Lite delegates
    *   Add support for strings in TensorFlow Lite Java API.
*   `tf.contrib`:
    *   Add Apache Ignite Filesystem plugin to support accessing Apache IGFS.
    *   Dropout now takes `rate` argument, `keep_prob` is deprecated.
    *   Estimator occurrences references `tf.contrib.estimator` were changed to
        `tf.estimator`:
    *   `tf.contrib.estimator.BaselineEstimator` with
        `tf.estimator.BaselineEstimator`
    *   `tf.contrib.estimator.DNNLinearCombinedEstimator` with
        `tf.estimator.DNNLinearCombinedEstimator`
    *   `tf.contrib.estimator.DNNEstimator` with `tf.estimator.DNNEstimator`
    *   `tf.contrib.estimator.LinearEstimator` with
        `tf.estimator.LinearEstimator`
    *   `tf.contrib.estimator.InMemoryEvaluatorHook` and
        tf.estimator.experimental.InMemoryEvaluatorHook`.
    *   `tf.contrib.estimator.make_stop_at_checkpoint_step_hook` with
        `tf.estimator.experimental.make_stop_at_checkpoint_step_hook`.
    *   Expose `tf.distribute.Strategy as the new name for
        tf.contrib.distribute.DistributionStrategy.
    *   Migrate linear optimizer from contrib to core.
    *   Move `tf.contrib.signal` to `tf.signal` (preserving aliases in
        tf.contrib.signal).
    *   Users of `tf.contrib.estimator.export_all_saved_models` and related
        should switch to
        `tf.estimator.Estimator.experimental_export_all_saved_models`.
*   tf.data:
    *   Add `tf.data.experimental.StatsOptions()`, to configure options to
        collect statistics from `tf.data.Dataset` pipeline using
        `StatsAggregator`. Add nested option, `experimental_stats` (which takes
        a `tf.data.experimen tal.StatsOptions` object), to `tf.data.Options`.
        Deprecates `tf.data.experimental.set_stats_agregator`.
    *   Performance optimizations:
    *   Add `tf.data.experimental.OptimizationOptions()`, to configure options
        to enable `tf.data` performance optimizations. Add nested option,
        `experimental_optimization` (which takes a
        `tf.data.experimental.OptimizationOptions` object), to
        `tf.data.Options`. Remove performance optimization options from
        `tf.data.Options`, and add them under
        `tf.data.experimental.OptimizationOptions` instead.
    *   Enable `map_and_batch_fusion` and `noop_elimination` optimizations by
        default. They can be disabled by configuring
        `tf.data.experimental.OptimizationOptions` to set `map_and_batch =
        False` or `noop_elimination = False` respectively. To disable all
        default optimizations, set `apply_default_optimizations = False`.
    *   Support parallel map in `map_and_filter_fusion`.
    *   Disable static optimizations for input pipelines that use non-resource
        `tf.Variable`s.
    *   Add NUMA-aware MapAndBatch dataset.
    *   Deprecate `tf.data.Dataset.make_one_shot_iterator()` in V1, removed it
        from V2, and added tf.compat.v1.data.make_one_shot_iterator()`.
    *   Deprecate `tf.data.Dataset.make_initializable_iterator()` in V1, removed
        it from V2, and added `tf.compat.v1.data.make_initializable_iterator()`.
    *   Enable nested dataset support in core `tf.data` transformations.
    *   For `tf.data.Dataset` implementers: Added
        `tf.data.Dataset._element_structured property` to replace
        `Dataset.output_{types,shapes,classes}`.
    *   Make `num_parallel_calls` of `tf.data.Dataset.interleave` and
        `tf.data.Dataset.map` work in Eager mode.
*   Toolchains
    *   Fixed OpenSSL compatibility by avoiding `EVP_MD_CTX_destroy`.
    *   Added bounds checking to printing deprecation warnings.
    *   Upgraded CUDA dependency to 10.0
    *   To build with Android NDK r14b, add "#include <linux/compiler.h>" to
        android-ndk-r14b/platforms/android-14/arch-*/usr/include/linux/futex.h
    *   Removed `:android_tensorflow_lib_selective_registration*` targets, use
        `:android_tensorflow_lib_lite*` targets instead.
*   XLA
    *   Move `RoundToEven` function to xla/client/lib/math.h.
    *   A new environment variable `TF_XLA_DEBUG_OPTIONS_PASSTHROUGH` set to "1"
        or "true" allows the debug options passed within an XRTCompile op to be
        passed directly to the XLA compilation backend. If such variable is not
        set (service side), only a restricted set will be passed through.
    *   Allow the XRTCompile op to return the ProgramShape resulted form the XLA
        compilation as a second return argument.
    *   XLA HLO graphs can now be rendered as SVG/HTML.
*   Estimator
    *   Replace all occurrences of `tf.contrib.estimator.BaselineEstimator` with
        `tf.estimator.BaselineEstimator`
    *   Replace all occurrences of
        `tf.contrib.estimator.DNNLinearCombinedEstimator` with
        `tf.estimator.DNNLinearCombinedEstimator`
    *   Replace all occurrences of `tf.contrib.estimator.DNNEstimator` with
        `tf.estimator.DNNEstimator`
    *   Replace all occurrences of `tf.contrib.estimator.LinearEstimator` with
        `tf.estimator.LinearEstimator`
    *   Users of `tf.contrib.estimator.export_all_saved_models` and related
        should switch to
        `tf.estimator.Estimator.experimental_export_all_saved_models`.
    *   Update `regression_head` to the new Head API for Canned Estimator V2.
    *   Switch `multi_class_head` to Head API for Canned Estimator V2.
    *   Replace all occurrences of `tf.contrib.estimator.InMemoryEvaluatorHook`
        and `tf.contrib.estimator.make_stop_at_checkpoint_step_hook` with
        `tf.estimator.experimental.InMemoryEvaluatorHook` and
        `tf.estimator.experimental.make_stop_at_checkpoint_step_hook`
    *   Migrate linear optimizer from contrib to core.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abhinav Upadhyay, Ag Ramesh, akikaaa, Alexis Louis, Anders Huss, Andreas Madsen,
Andrew Banchich, Andy Craze, Anton Dmitriev, Artem Malykh, Avijit-Nervana,
Balint Cristian, Benjamin Tan Wei Hao, Bhavani Subramanian, Brendan Finan, Brian
Nemsick, Bryan Cutler, By Shen, Cao Zongyan, Castiel, Chris Antaki, Christian
Goll, Cibifang, Clayne Robison, Codrut Grosu, Cong Xu, Dalmo Cirne, Daniel
Hunter, Dougal J. Sutherland, Edvard Fagerholm, EFanZh, Erik Smistad, Evgeniy
Polyakov, Feiyang Chen, franklin5, Fred Reiss, Gautam, gehring, Geoffrey Irving,
George Sterpu, Gitea, Grzegorz George Pawelczak, Guozhong Zhuang, himkt,
Hoeseong Kim, Huan Li (李卓桓), HuiyangFei, hyunyoung, Isaac Burbank, jackonan,
Jacky Ko, Jason Furmanek, Jason Zaman, Javier Luraschi, Jiang,Zhoulong, joaak,
John Lin, Jonathan Wyatt Hoech, josephyearsley, Josh Gordon, Julian Niedermeier,
Karl Lessard, Keno Fischer, lanhin, Leon Graser, leondgarse, Li, Guizi, Li,
Yiqiang, lxl910915, Mahmoud Abuzaina, manhyuk, Marcela Morales Quispe,
margaretmz, Matt Conley, Max Pumperla, mbhuiyan, mdfaijul, Meng, Peng, Michael,
Michael Gielda, mrTsjolder, Muhammad Wildan, neargye, Nehal J Wani, NEWPLAN,
Niranjan Hasabnis, Nutti, olicht, Pan Daoxin, Pedro Monreal, Peng Yu,
pillarpond, Pooya Davoodi, qiezi, Rholais Lii, Richard Yu, Rin Arakaki, Roger
Iyengar, sahilbadyal, Sami Kama, Sandip Giri, Scott Leishman, Serge Panev,
Seunghoon Park, Shafi Dayatar, shengfuintel, Shimin Guo, Siju, silent567, Stefan
Dyulgerov, steven, Tao Wei, Thor Johnsen, Tingbo Lu, tomguluson92, Tongxuan Liu,
Trevor Morris, Ubuntu, Vadim Borisov, vanderliang, wangsiyu, Wen Yun, Wen-Heng
(Jack) Chung, wenxizhu, William D. Irons, Xiaoming (Jason) Cui, Yan Facai (颜发才),
Yanbo Liang, Yaniv Blumenfeld, Yash Gaurkar, Yicheng Fan, Yong Tang, Yongjoon
Lee, Yuan (Terry) Tang, Yuxin Wu, zldrobit

# Release 1.12.0

## Major Features and Improvements

*   Keras models can now be directly exported to the SavedModel
    format(`tf.contrib.saved_model.save_keras_model()`) and used with Tensorflow
    Serving.
*   Keras models now support evaluating with a `tf.data.Dataset`.
*   TensorFlow binaries are built with XLA support linked in by default.
*   Ignite Dataset added to contrib/ignite that allows to work with Apache
    Ignite.

## Bug Fixes and Other Changes

*   tf.data:
    *   tf.data users can now represent, get, and set options of TensorFlow
        input pipelines using `tf.data.Options()`, `tf.data.Dataset.options()`,
        and `tf.data.Dataset.with_options()` respectively.
    *   New `tf.data.Dataset.reduce()` API allows users to reduce a finite
        dataset to a single element using a user-provided reduce function.
    *   New `tf.data.Dataset.window()` API allows users to create finite windows
        of input dataset; when combined with the `tf.data.Dataset.reduce()` API,
        this allows users to implement customized batching.
    *   All C++ code moves to the `tensorflow::data` namespace.
    *   Add support for `num_parallel_calls` to `tf.data.Dataset.interleave`.
*   `tf.contrib`:
    *   Remove `tf.contrib.linalg`. `tf.linalg` should be used instead.
    *   Replace any calls to `tf.contrib.get_signature_def_by_key(metagraph_def,
        signature_def_key)` with
        `meta_graph_def.signature_def[signature_def_key]`. Catching a ValueError
        exception thrown by `tf.contrib.get_signature_def_by_key` should be
        replaced by catching a KeyError exception.
*   `tf.contrib.data`
    *   Deprecate, and replace by tf.data.experimental.
*   Other:
    *   Instead of jemalloc, revert back to using system malloc since it
        simplifies build and has comparable performance.
    *   Remove integer types from `tf.nn.softplus` and `tf.nn.softsign` OpDefs.
        This is a bugfix; these ops were never meant to support integers.
    *   Allow subslicing Tensors with a single dimension.
    *   Add option to calculate string length in Unicode characters.
    *   Add functionality to SubSlice a tensor.
    *   Add searchsorted (ie lower/upper_bound) op.
    *   Add model explainability to Boosted Trees.
    *   Support negative positions for tf.substr.
    *   There was previously a bug in the bijector_impl where the
        _reduce_jacobian_det_over_event does not handle scalar ILDJ
        implementations properly.
    *   In tf eager execution, allow re-entering a GradientTape context.
    *   Add tf_api_version flag. If --define=tf_api_version=2 flag is passed in,
        then bazel will build TensorFlow API version 2.0. Note that TensorFlow
        2.0 is under active development and has no guarantees at this point.
    *   Add additional compression options to TfRecordWriter.
    *   Performance improvements for regex full match operations.
    *   Replace tf.GraphKeys.VARIABLES with `tf.GraphKeys.GLOBAL_VARIABLES`.
    *   Remove unused dynamic learning rate support.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

(David) Siu-Kei Muk, Ag Ramesh, Anton Dmitriev, Artem Sobolev, Avijit-Nervana,
Bairen Yi, Bruno Goncalves, By Shen, candy.dc, Cheng Chen, Clayne Robison,
coder3101, Dao Zhang, Elms, Fei Hu, feiquan, Geoffrey Irving, Guozhong Zhuang,
hellcom, Hoeseong Kim, imsheridan, Jason Furmanek, Jason Zaman, Jenny Sahng,
jiefangxuanyan, Johannes Bannhofer, Jonathan Homer, Koan-Sin Tan, kouml, Loo
Rong Jie, Lukas Geiger, manipopopo, Ming Li, Moritz KröGer, Naurril, Niranjan
Hasabnis, Pan Daoxin, Peng Yu, pengwa, rasmi, Roger Xin, Roland Fernandez, Sami
Kama, Samuel Matzek, Sangjung Woo, Sergei Lebedev, Sergii Khomenko, shaohua,
Shaohua Zhang, Shujian2015, Sunitha Kambhampati, tomguluson92, ViníCius Camargo,
wangsiyu, weidankong, Wen-Heng (Jack) Chung, William D. Irons, Xin Jin, Yan
Facai (颜发才), Yanbo Liang, Yash Katariya, Yong Tang, 在原佐为

# Release 1.11.0

## Major Features and Improvements

*   Nvidia GPU:
    *   Prebuilt binaries are now (as of TensorFlow 1.11) built against cuDNN
        7.2 and TensorRT 4. See updated install guides:
        [Installing TensorFlow on Ubuntu](https://www.tensorflow.org/install/install_linux#tensorflow_gpu_support)
*   Google Cloud TPU:
    *   Experimental tf.data integration for Keras on Google Cloud TPUs.
    *   Experimental / preview support for eager execution on Google Cloud TPUs.
*   DistributionStrategy:
    *   Add multi-GPU DistributionStrategy support in tf.keras. Users can now
        use `fit`, `evaluate` and `predict` to distribute their model on
        multiple GPUs.
    *   Add multi-worker DistributionStrategy and standalone client support in
        Estimator. See
        [README](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/contrib/distribute)
        for more details.
*   Add C, C++, and Python functions for querying kernels.

## Breaking Changes

*   Keras:
    *   The default values for tf.keras `RandomUniform`, `RandomNormal`, and
        `TruncatedNormal` initializers have been changed to match those in
        external Keras.
    *   Breaking change: `model.get_config()` on a Sequential model now returns
        a config dictionary (consistent with other Model instances) instead of a
        list of configs for the underlying layers.

## Bug Fixes and Other Changes

*   C++:
    *   Changed the signature of SessionFactory::NewSession so that it can
        return a meaningful error message on failure.
*   tf.data:
    *   Remove `num_parallel_parser_calls` argument from
        `tf.contrib.data.make_csv_dataset()`. [tf.data] Remove
        `num_parallel_parser_calls` argument from
        `tf.contrib.data.make_csv_dataset()`.
    *   `tf.data.Dataset.list_files()` raises an exception at initialization
        time if the argument matches no files.
    *   Renamed BigTable class to BigtableTable for clarity
    *   Document use of the Cloud Bigtable API
    *   Add `tf.contrib.data.reduce_dataset` which can be used to reduce a
        dataset to a single element.
    *   Generalization of `tf.contrib.data.sliding_window_batch`.
*   INC:
    *   Runtime improvements to triangular solve.
*   `tf.contrib`:
    *   Add an `implementation` argument to `tf.keras.layers.LocallyConnected2D`
        and `tf.keras.layers.LocallyConnected1D`. The new mode
        (`implementation=2`) performs forward pass as a single dense matrix
        multiplication, allowing dramatic speedups in certain scenarios (but
        worse performance in others - see docstring). The option also allows to
        use `padding=same`.
    *   Add documentation clarifying the differences between tf.fill and
        tf.constant.
    *   Add experimental IndexedDatasets.
    *   Add selective registration target using the lite proto runtime.
    *   Add simple Tensor and DataType classes to TensorFlow Lite Java
    *   Add support for bitcasting to/from uint32 and uint64.
    *   Added a subclass of Estimator that can be created from a SavedModel
        (SavedModelEstimator).
    *   Adds leaf index modes as an argument.
    *   Allow a different output shape from the input in
        tf.contrib.image.transform.
    *   Change the state_size order of the StackedRNNCell to be natural order.
        To keep the existing behavior, user can add reverse_state_order=True
        when constructing the StackedRNNCells.
    *   Deprecate self.test_session() in favor of self.session() or
        self.cached_session().
    *   Directly import tensor.proto.h (the transitive import will be removed
        from tensor.h soon).
    *   Estimator.train() now supports tf.contrib.summary.\* summaries out of
        the box; each call to .train() will now create a separate tfevents file
        rather than re-using a shared one.
    *   Fix FTRL L2-shrinkage behavior: the gradient from the L2 shrinkage term
        should not end up in the accumulator.
    *   Fix toco compilation/execution on Windows.
    *   GoogleZoneProvider class added to detect which Google Cloud Engine zone
        tensorflow is running in.
    *   It is now safe to call any of the C API's TF_Delete\* functions on
        nullptr.
    *   Log some errors on Android to logcat.
    *   Match FakeQuant numerics in TFLite to improve accuracy of TFLite
        quantized inference models.
    *   Optional bucket location check for the GCS Filesystem.
    *   Performance enhancements for StringSplitOp & StringSplitV2Op.
    *   Performance improvements for regex replace operations.
    *   TFRecordWriter now raises an error if .write() fails.
    *   TPU: More helpful error messages in TPUClusterResolvers.
    *   The legacy_init_op argument to SavedModelBuilder methods for adding
        MetaGraphs has been deprecated. Please use the equivalent main_op
        argument instead. As part of this, we now explicitly check for a single
        main_op or legacy_init_op at the time of SavedModel building, whereas
        the check on main_op was previously only done at load time.
    *   The protocol used for Estimator training is now configurable in
        RunConfig.
    *   Triangular solve performance improvements.
    *   Unify RNN cell interface between TF and Keras. Add new
        get_initial_state() to Keras and TF RNN cell, which will use to replace
        the existing zero_state() method.
    *   Update initialization of variables in Keras.
    *   Updates to "constrained_optimization" in tensorflow/contrib.
    *   boosted trees: adding pruning mode.
    *   tf.train.Checkpoint does not delete old checkpoints by default.
    *   tfdbg: Limit the total disk space occupied by dumped tensor data to 100
        GBytes. Add environment variable `TFDBG_DISK_BYTES_LIMIT` to allow
        adjustment of this upper limit.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aapeli, adoda, Ag Ramesh, Amogh Mannekote, Andrew Gibiansky, Andy Craze, Anirudh
Koul, Aurelien Geron, Avijit, Avijit-Nervana, Ben, Benjamin H. Myara, bhack,
Brett Koonce, Cao Zongyan, cbockman, cheerss, Chikanaga Tomoyuki, Clayne
Robison, cosine0, Cui Wei, Dan J, David, David Norman, Dmitry Klimenkov, Eliel
Hojman, Florian Courtial, fo40225, formath, Geoffrey Irving, gracehoney,
Grzegorz Pawelczak, Guoliang Hua, Guozhong Zhuang, Herman Zvonimir DošIlović,
HuiyangFei, Jacker, Jan HüNnemeyer, Jason Taylor, Jason Zaman, Jesse,
Jiang,Zhoulong, Jiawei Zhang, Jie, Joe Yearsley, Johannes Schmitz, Jon Perl, Jon
Triebenbach, Jonathan, Jonathan Hseu, Jongmin Park, Justin Shenk, karl@kubx.ca,
Kate Hodesdon, Kb Sriram, Keishi Hattori, Kenneth Blomqvist, Koan-Sin Tan, Li
Liangbin, Li, Yiqiang, Loo Rong Jie, Madiyar, Mahmoud Abuzaina, Mark Ryan, Matt
Dodge, mbhuiyan, melvinljy96, Miguel Mota, Nafis Sadat, Nathan Luehr, naurril,
Nehal J Wani, Niall Moran, Niranjan Hasabnis, Nishidha Panpaliya, npow, olicht,
Pei Zhang, Peng Wang (Simpeng), Peng Yu, Philipp Jund, Pradeep Banavara, Pratik
Kalshetti, qwertWZ, Rakesh Chada, Randy West, Ray Kim, Rholais Lii, Robin
Richtsfeld, Rodrigo Silveira, Ruizhi, Santosh Kumar, Seb Bro, Sergei Lebedev,
sfujiwara, Shaba Abhiram, Shashi, SneakyFish5, Soila Kavulya, Stefan Dyulgerov,
Steven Winston, Sunitha Kambhampati, Surry Shome, Taehoon Lee, Thor Johnsen,
Tristan Rice, TShapinsky, tucan, tucan9389, Vicente Reyes, Vilmar-Hillow, Vitaly
Lavrukhin, wangershi, weidan.kong, weidankong, Wen-Heng (Jack) Chung, William D.
Irons, Wim Glenn, XFeiF, Yan Facai (颜发才), Yanbo Liang, Yong Tang, Yoshihiro
Yamazaki, Yuan (Terry) Tang, Yuan, Man, zhaoyongke, ÁRon Ricardo Perez-Lopez,
张天启, 张晓飞

# Release 1.10.1

## Bug Fixes and Other Changes

*   `tf.keras`:
    *   Fixing keras on Cloud TPUs. No new binaries will be built for Windows.

# Release 1.10.0

## Major Features And Improvements

*   The `tf.lite` runtime now supports `complex64`.
*   Initial
    [Google Cloud Bigtable integration](https://github.com/tensorflow/tensorflow/tree/r1.10/tensorflow/contrib/bigtable)
    for `tf.data`.
*   Improved local run behavior in `tf.estimator.train_and_evaluate` which does
    not reload checkpoints for evaluation.
*   `RunConfig` now sets device_filters to restrict how workers and PS can
    communicate. This can speed up training and ensure clean shutdowns in some
    situations. But if you have jobs that require communication between workers,
    you will have to set custom session_options in your `RunConfig`.
*   Moved Distributions and Bijectors from `tf.contrib.distributions` to
    [Tensorflow Probability (TFP)](https://github.com/tensorflow/probability).
    `tf.contrib.distributions` is now deprecated and will be removed by the end
    of 2018.
*   Adding new endpoints for existing tensorflow symbols. These endpoints are
    going to be the preferred endpoints going forward and may replace some of
    the existing endpoints in the future. See below for the complete list. New
    symbols have been added to the following modules:
    [`tf.debugging`](https://www.tensorflow.org/versions/master/api_docs/python/tf/debugging),
    [`tf.dtypes`](https://www.tensorflow.org/versions/master/api_docs/python/tf/dtypes),
    [`tf.image`](https://www.tensorflow.org/versions/master/api_docs/python/tf/image),
    [`tf.io`](https://www.tensorflow.org/versions/master/api_docs/python/tf/io),
    [`tf.linalg`](https://www.tensorflow.org/versions/master/api_docs/python/tf/linalg),
    [`tf.manip`](https://www.tensorflow.org/versions/master/api_docs/python/tf/manip),
    [`tf.math`](https://www.tensorflow.org/versions/master/api_docs/python/tf/math),
    [`tf.quantization`](https://www.tensorflow.org/versions/master/api_docs/python/tf/quantization),
    [`tf.strings`](https://www.tensorflow.org/versions/master/api_docs/python/tf/strings)

## Breaking Changes

*   Prebuilt binaries are now (as of TensorFlow 1.10) built against NCCL 2.2 and
    no longer include NCCL in the binary install. TensorFlow usage with multiple
    GPUs and NCCL requires upgrade to
    [NCCL 2.2](https://developer.nvidia.com/nccl). See updated install guides:
    [TensorFlow GPU support](https://www.tensorflow.org/install/gpu) and
    [Build TensorFlow from source](https://www.tensorflow.org/install/source).
*   Starting from TensorFlow 1.11, Windows builds will use Bazel. Therefore, we
    will drop official support for cmake.

## Bug Fixes and Other Changes

*   `tf.data`:
    *   `tf.contrib.data.group_by_reducer()` is now available via the public
        API.
    *   `tf.contrib.data.choose_from_datasets()` is now available via the public
        API.
    *   Adding `drop_remainder` argument to `tf.data.Dataset.batch()` and
        `tf.data.Dataset.padded_batch()`, deprecating
        `tf.contrib.data.batch_and_drop_remainder()` and
        `tf.contrib.data.padded_batch_and_drop_remainder()`.
*   `tf.estimator`:
    *   `Estimator`s now use custom savers included in `EstimatorSpec` scaffolds
        for saving SavedModels during export.
    *   `EstimatorSpec` will now add a default prediction output for export if
        no `export_output` is provided, eliminating the need to explicitly
        include a `PredictOutput` object in the `model_fn` for simple use-cases.
    *   Support sparse_combiner in canned Linear Estimators.
    *   Added batch normalization to `DNNClassifier`, `DNNRegressor`, and
        `DNNEstimator`.
    *   Adding ranking support for boosted trees.
    *   Adding center bias option for boosted trees.
*   Add `synchronization` and `aggregation` args to get_variable(). These args
    will be used for distributed variables.
*   Add `synchronization` and `aggregation` args to the layer `add_weight()`
    API. These args will be used for distributed variables.
*   `tf.losses.*` do not add to the global collection when executing eagerly (to
    avoid leaking memory).
*   Support different summary and checkpoint directories in
    `tf.train.MonitoredTrainingSession()`.
*   Added IndRNN, IndyGRU, and IndyLSTM cells to `tf.contrib.rnn`.
*   Add safe static factory functions for SparseTensor and convert all CHECKs to
    DCHECKs. Using the constructor directly is unsafe and deprecated.
*   Make the Bigtable client connection pool configurable & increase the
    default # of connections for performance.
*   Added derivative of `tf.random_gamma` with respect to the alpha parameter.
*   Added derivative of `tf.igamma(a, x)` and `tf.igammac(a, x)` with respect to
    a.
*   Modified Bessel functions of order zero and one.
*   Add FillTriangular Bijector to create triangular matrices.
*   Added support for Type III DCT, and `tf.spectral.idct(type=2|3)`.
*   Correctly handle CuDNN RNN weight loaded when nest in `TimeDistributed`.
*   Adding per-element weight support for `WALSComputePartialLhsAndRhsOp`.
*   ZerosLike and OnesLike ops treated as constants by Graph Transform Tool.
*   Gamma distribution and the derived distributions (Beta, Dirichlet, Student's
    t, inverse Gamma) now fully reparameterized.
*   Java: Experimental wrapper classes to make graph generation easier. Thanks
    @karllessard and @kbsriram
*   Build & link in secure gRPC components (switch from the insecure grpc
    dependency to secure grpc dependency).
*   Adding new endpoints for existing tensorflow symbols. These endpoints are
    going to be the preferred endpoints going forward and may replace some of
    the existing endpoints in the future. List of new endpoints:
    *   New endpoints in `tf.image` namespace: `tf.image.extract_image_patches`
    *   New endpoints in `tf.debugging` namespace:
        `tf.debugging.check_numerics`, `tf.debugging.is_finite`,
        `tf.debugging.is_inf`, `tf.debugging.is_nan`.
    *   New endpoints in `tf.dtypes` namespace: `tf.dtypes.as_string`.
    *   New endpoints in `tf.io` namespace: `tf.io.decode_base64`,
        `tf.io.decode_compressed`, `tf.io.decode_json_example`,
        `tf.io.decode_raw`, `tf.io.encode_base64`, `tf.io.matching_files`,
        `tf.io.parse_tensor`, `tf.io.read_file,`tf.io.write_file`.
    *   New endpoints in tf.linalg namespace: `tf.linalg.cross`,
        `tf.linalg.tensor_diag` (corresponds to `tf.diag`),
        `tf.linalg.tensor_diag_part` (corresponds to `tf.diag_part`).
    *   New endpoints in tf.manip namespace: `tf.manip.batch_to_space_nd`,
        `tf.manip.gather_nd`, `tf.manip.reshape`, `tf.manip.reverse`,
        `tf.manip.scatter_nd`, `tf.manip.space_to_batch_nd`, `tf.manip.tile`
    *   New endpoints in tf.math namespace: `tf.math.acos`, `tf.math.acosh`,
        `tf.math.add`, `tf.math.asin`, `tf.math.asinh`, `tf.math.atan`,
        `tf.math.atan2`, `tf.math.atanh`, `tf.math.betainc`, `tf.math.ceil`,
        `tf.math.cos`, `tf.math.cosh`, `tf.math.digamma`, `tf.math.equal`,
        `tf.math.erfc`, `tf.math.exp`, `tf.math.expm1`, `tf.math.floor`,
        `tf.math.greater`, `tf.math.greater_equal`, `tf.math.igamma`,
        `tf.math.igammac`, `tf.math.invert_permutation`, `tf.math.less`,
        `tf.math.less_equal`, `tf.math.lgamma`, `tf.math.log`, `tf.math.log1p`,
        `tf.math.logical_and`, `tf.math.logical_not`, `tf.math.logical_or`,
        `tf.math.maximum`, `tf.math.minimum`, `tf.math.not_equal`,
        `tf.math.polygamma`, `tf.math.reciprocal`, `tf.math.rint`,
        `tf.math.rsqrt`, `tf.math.segment_max`, `tf.math.segment_mean`,
        `tf.math.segment_min`, `tf.math.segment_prod`, `tf.math.segment_sum`,
        `tf.math.sin`, `tf.math.sinh`, `tf.math.softplus`, `tf.math.softsign`,
        `tf.math.squared_difference`, `tf.math.tan`,
        `tf.math.unsorted_segment_max`, `tf.math.unsorted_segment_min`,
        `tf.math.unsorted_segment_prod`, `tf.math.unsorted_segment_sum`,
        `tf.math.zeta`.
    *   New endpoints in `tf.quantization` namespace:
        `tf.quantization.dequantize`,
        `tf.quantization.fake_quant_with_min_max_args`,
        `tf.quantization.fake_quant_with_min_max_args_gradient`,
        `tf.quantization.fake_quant_with_min_max_vars`,
        `tf.quantization.fake_quant_with_min_max_vars_gradient`,
        `tf.quantization.fake_quant_with_min_max_vars_per_channel`,
        `tf.quantization.fake_quant_with_min_max_vars_per_channel_gradient`.
    *   New endpoints in tf.strings namespace: `tf.strings.join` (corresponds to
        `tf.string_join`), `tf.strings.regex_replace`, `tf.strings.to_number`
        (corresponds to `tf.string_to_number`), `tf.strings.strip` (corresponds
        to `tf.string_strip`), `tf.strings.substr`, `tf.strings.to_hash_bucket`
        (corresponds to `tf.string_to_hash_bucket`),
        `tf.strings.to_hash_bucket_fast` (corresponds to
        `tf.string_to_hash_bucket_fast`), `tf.strings.to_hash_bucket_strong`
        (corresponds to `tf.string_to_hash_bucket_strong`).

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Ag Ramesh, Alex Wiltschko, Alexander Pantyukhin, Amogh Mannekote, An Jiaoyang,
Andrei Nigmatulin, Andrew Ginns, BjøRn Moholt, Brett Koonce, Chengzhi Chen,
Chinmay Das, Christian Ertler, Christoph Boeddeker, Clayne Robison, Courtial
Florian, ctiijima, Dan Douthit, Dan J, Dan Ringwalt, EFanZh, Emanuele Ballarin,
eqy, Evgeniy Zheltonozhskiy, Freedom" Koan-Sin Tan, FréDéRic Branchaud-Charron,
G K, gracehoney, Guillaume Klein, Guozhong Zhuang, Hsien-Yang Li, hsm207,
ImSheridan, Jayaram Bobba, Jiandong Ruan, Jie, Joel Shor, Jonas Rauber, Jongmin
Baek, jsawruk, Karan Kaw, Karl Lessard, karl@kubx.ca, Kb Sriram, KinmanLam,
leiiwang, Li, Yiqiang, Loo Rong Jie, Mahmoud Abuzaina, Mahmoud Aslan, ManHyuk,
Martin Patz, Martin Zeitler, mktozk, Mohammad Ashraf Bhuiyan, mrTsjolder, Naman
Bhalla, Nick Felt, Nicolas Lopez, Niranjan Hasabnis, Nishidha Panpaliya, Nitish,
nrstott, Nutti, Parag Jain, PeterLee, Philipp Jund, Rach L, Rafal Wojdyla,
Roland Zimmermann, Sergei Lebedev, SneakyFish5, Soila Kavulya, Sriram Veturi,
Steven Schmatz, Taehoon Lee, Tang, Wenyi, Taras Sereda, Ted Chang, Tim Zaman,
Tristan Rice, tucan, vchigrin, Vikram Tiwari, Vincent, WeberXie, William D.
Irons, Yan Facai (颜发才), Yong Tang, Yu Yi, Yuxin Wu, Zé ViníCius

# Release 1.9.0

## Major Features And Improvements

*   Updated docs for `tf.keras`: New Keras-based
    [get started](http://tensorflow.org/versions/r1.9/get_started), and
    [programmers guide page](http://tensorflow.org/versions/r1.9/programmers_guide/keras).
*   Update `tf.keras` to the Keras 2.1.6 API.
*   Added
    [`tf.keras.layers.CuDNNGRU`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/keras/layers/CuDNNGRU)
    and
    [`tf.keras.layers.CuDNNLSTM`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/keras/layers/CuDNNLSTM)
    layers.
    [Try it](https://colab.sandbox.google.com/github/tensorflow/tensorflow/blob/master/tensorflow/contrib/eager/python/examples/nmt_with_attention/nmt_with_attention.ipynb?linkId=53292082).
*   Adding support of core
    [feature columns](https://www.tensorflow.org/get_started/feature_columns)
    and [losses](https://www.tensorflow.org/api_docs/python/tf/losses) to
    [gradient boosted trees estimators](https://github.com/tensorflow/models/tree/master/official/r1/boosted_trees).
*   The
    [python interface](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/lite)
    for the
    [TFLite Optimizing Converter](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/lite/toco/README.md)
    has been expanded, and the command line interface (AKA: `toco`,
    `tflite_convert`) is once again included in the standard `pip` installation.
*   Improved data-loading and text processing with:
    *   [`tf.decode_compressed`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/decode_compressed)
    *   [`tf.string_strip`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/string_strip)
    *   [`tf.strings.regex_full_match`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/strings/regex_full_match)
*   Added experimental support for new pre-made Estimators:
    *   [`tf.contrib.estimator.BaselineEstimator`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/contrib/estimator/BaselineEstimator)
    *   [`tf.contrib.estimator.RNNClassifier`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/contrib/estimator/RNNEstimator)
    *   [`tf.contrib.estimator.RNNEstimator`](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/contrib/estimator/RNNClassifier)
*   The
    [distributions.Bijector](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/contrib/distributions/bijectors/Bijector)
    API supports broadcasting for Bijectors with new API changes.

## Breaking Changes

*   If you're opening empty variable scopes; replace `variable_scope('', ...)`
    by `variable_scope(tf.get_variable_scope(), ...)`.
*   Headers used for building custom ops have been moved from
    site-packages/external into site-packages/tensorflow/include/external.

## Bug Fixes and Other Changes

*   `tfe.Network` is deprecated. Please inherit from `tf.keras.Model`.
*   Layered variable names have changed in the following conditions:
    *   Using `tf.keras.layers` with custom variable scopes.
    *   Using `tf.layers` in a subclassed `tf.keras.Model` class. See
        [here](https://www.tensorflow.org/versions/r1.9/api_docs/python/tf/layers)
        for more details
*   `tf.data`:
    *   `Dataset.from_generator()` now accepts an `args` list, in order to
        create nested generators.
    *   `Dataset.list_files()` now produces deterministic results when
        `shuffle=False` or a `seed` is passed.
    *   `tf.contrib.data.sample_from_datasets()` and
        `tf.contrib.data.choose_from_datasets()` make it easier to sample or
        deterministically choose elements from multiple datasets.
    *   `tf.contrib.data.make_csv_dataset()` now supports line breaks in quoted
        strings, and two infrequently used arguments removed.
    *   (C++) `DatasetBase::DebugString()` is now `const`.
    *   (C++) `DatasetBase::MakeIterator()` has been renamed to
        `DatasetBase::MakeIteratorInternal()`.
    *   (C++) `IteratorBase::Initialize()` method was added to support raising
        errors during iterator construction.
*   Eager Execution:
    *   Added the ability to pause recording operations for gradient computation
        via `tf.GradientTape.stop_recording`.
    *   Updated documentation, introductory notebooks.
*   `tf.keras`:
    *   Move Keras code out of _impl folder and remove API files.
    *   `tf.keras.Model.save_weights` now saves in TensorFlow format by default.
    *   Enable dataset iterators to be passed to `tf.keras.Model` training/eval
        methods.
*   TensorFlow Debugger (tfdbg) CLI: fix an issue in which the TensorBoard
    Debugger Plugin could not handle total source file size exceeding gRPC
    message size limit (4 MB).
*   `tf.contrib`:
    *   `tf.contrib.framework.zero_initializer` supports ResourceVariable.
    *   Adding "constrained_optimization" to tensorflow/contrib.
*   Other:
    *   Add GCS Configuration Ops.
    *   Changing signature of `MakeIterator` to enable propagating error status.
    *   KL divergence for two Dirichlet distributions.
    *   More consistent GcsFileSystem behavior for certain reads past EOF.
    *   Update benchmark for tf.scan to match ranges across eager and graph
        modes.
    *   Fixed bug in `tf.reduce_prod gradient` for complex dtypes.
    *   Allow the use of '.' in variables (e.g. "hparams.parse('a.b=1.0')"),
        which would previously raise an error. This will correspond to an
        attribute name with an embedded '.' symbol (e.g. 'a.b'), which can only
        be accessed indirectly (e.g. through getattr and setattr). To set this
        up the user will first need to explicitly add the variable to the hparam
        object (e.g. "hparams.add_hparam(name='a.b', value=0.0)").
    *   Benchmark for tf.scan in graph and eager modes.
    *   Added complex128 support to FFT, FFT2D, FFT3D, IFFT, IFFT2D, and IFFT3D.
    *   Making ids unique in `nn.embedding_lookup_sparse`. This helps to reduce
        RPC calls for looking up the embeddings when there are repeated ids in
        the batch.
    *   Support indicator column in boosted trees.
    *   Prevent `tf.gradients()` from backpropagating through integer tensors.
    *   LinearOperator[1D,2D,3D]Circulant added to `tensorflow.linalg`.
    *   Conv3D, Conv3DBackpropInput, Conv3DBackpropFilter now supports
        arbitrary.
    *   Added `tf.train.Checkpoint` for reading/writing object-based
        checkpoints.
    *   Added LinearOperatorKronecker, a dense-free implementation of the
        Kronecker Product.
    *   Allow LinearOperator to broadcast.
    *   SavedModelBuilder will now deduplicate asset names that point to files
        with the same basename and the same contents. Note that this may result
        in new asset files included in SavedModels in cases where assets with
        the same name but different contents were previously overwriting each
        other.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abdullah Alrasheed, Achal Shah, Ad-530, ADiegoCAlonso, Aditya Yogi, Ag Ramesh,
akindyakov, Andy Kernahan, Anya Petrova, Aurelien Geron, Ben, Ben Barsdell,
Bhavani-Subramanian, braincodercn, Brett Koonce, Brian Nemsick, Brian Zier,
Bryan Heden, candy.dc, cclauss, Clayne Robison, ctiijima, Dalmo Cirne, David
Norman, David T.H. Kao, DosLin, ekelsen, Elson Rodriguez, Erik Smistad, Felix
Abecassis, Fergal Cotter, fo40225, foo0x29a, Freedom" Koan-Sin Tan, FréDéRic
Branchaud-Charron, gdh1995, Geoffrey Irving, Giuseppe, gracehoney, Guido
Zuidhof, Guillaume Klein, Guozhong Zhuang, Haggai, Harald Husum, imsheridan,
Ivan Zhang, Jan Zikes, Jayaram Bobba, Jesse Benson, Jesse Gumz, Jiajia Li, Jie,
jinghuangintel, Jingwen, jjsjann123, Joe Yearsley, Joel Hestness, Joel Shor,
josephyearsley, Junpeng Lao, Karol M. Langner, Kb Sriram, krantideep95, Krish
Ravindranath, Letian Feng, Loo Rong Jie, Lukas Geiger, Maciej, Mahmoud Abuzaina,
ManHyuk, Mark Ryan, mbhuiyan, Michal Turek, Mostafa Alaa, Myungsung Kwak, Nand
Dalal, Nehal J Wani, Neil Tenenholtz, ngc92, Nicholas Nadeau, P.Eng., Avs,
Niranjan Hasabnis, P-Hidringer, Paul Van Eck, Peng Yu, Qing Zhao, Qingying Chen,
Quanlong, Rajendra Arora, Rholais Lii, rmanyari, Robin Richtsfeld, Russell
Klopfer, Sagi, Sam Sendelbach, Sandeep N Gupta, Sandip Giri, Sarah Edkins, Scott
Tseng, Sdalbsoo, Sergii Khomenko, Seungwoo Choi (Biggie), Seyed Majid Azimi,
Shaoning Zeng, shengfuintel, Siu Kei, Muk, Smit Shilu, soonson, Stefan Schweter,
Sukhwan Kim, Sunitha Kambhampati, Taehoon Lee, tamimaddari82, Tang, Wenyi, Ted
Chang, u2takey, Utkarsh Upadhyay, Vadim Markovtsev, voegtlel, Wai Hon Law,
wangsiyu, Wenhao Hu, wenhao.hu, William D. Irons, Yan Facai (颜发才), Yanbo Liang,
Yihong Wang, Yilei (Dolee) Yang, Yong Tang, Yuan (Terry) Tang

# Release 1.8.0

## Major Features And Improvements

*   Can now pass `tf.contrib.distribute.MirroredStrategy()` to
    `tf.estimator.RunConfig()` to run an Estimator model on multiple GPUs on one
    machine.
*   Add `tf.contrib.data.prefetch_to_device()`, which supports prefetching to
    GPU memory.
*   Added Gradient Boosted Trees as pre-made Estimators: BoostedTreesClassifier,
    BoostedTreesRegressor.
*   Add 3rd generation pipeline config for Cloud TPUs which improves performance
    and usability.
*   `tf.contrib.bayesflow` is moving out to it's own repo.
*   Added `tf.contrib.{proto,rpc}` to allow generic proto parsing and RPC
    communication<sup>[1](#rpc-issue)</sup>.

## Bug Fixes and Other Changes

*   `tf.data`:
    *   Add `tf.contrib.data.prefetch_to_device`, which enables prefetching
        dataset elements to GPU memory.
    *   Add `tf.contrib.data.AUTOTUNE`, which allows the tf.data runtime to
        automatically tune the prefetch buffer sizes based on your system and
        environment.
    *   Add `tf.contrib.data.make_csv_dataset` for building datasets of CSV
        files.
*   Eager Execution:
    *   With eager execution Datasets can now be used as standard python
        iterators (`for batch in dataset:`). Both `Dataset.__iter__()` and
        `Dataset.make_one_shot_iterator()` can now be used to create iterators
        when eager execution is enabled.
    *   Automatic device placement has been enabled (i.e., use a GPU if
        available automatically, without requiring an explicit `with
        tf.device(“/gpu:0”)`) (Fixes #14133)
    *   `tf.GradientTape` has moved out of contrib.
*   `tf.keras`:
    *   Added the fashion mnist dataset.
    *   New data preprocessing functions: `image/random_brightness`,
        `sequence/TimeseriesGenerator`, and `text/hashing_trick`.
*   Accelerated Linear Algebra (XLA):
    *   Select and scatter in reference util and evaluator now use
        lexicographical order to break ties.
*   TensorFlow Debugger (tfdbg) CLI:
    *   During tensor-filter operations, allow exclusion of nodes by regular
        expressions.
    *   Fix spurious background colors in some text terminals.
*   `tf.contrib`:
    *   Add meta-distribution BatchReshape which reshapes batch dimensions.
    *   `tf.contrib.layers.recompute_grad` works for explicit gradient
        checkpointing on TPU.
    *   Add `tf.contrib.framework.argsort`.
    *   Allow `DNNBoostedTreeCombinedEstimator` to work with core versions of
        feature columns and losses.
    *   Add non-linear image warping ops: `tf.contrib.image.sparse_image_warp`,
        `tf.contrib.image.dense_image_warp`, and
        `tf.contrib.image.interpolate_spline`.
    *   Fix bug in `tf.contrib.opt.MultitaskOptimizerWrapper` where types of
        tensors were mismatched.
*   Other:
    *   Low-level graph construction now calls the TensorFlow C API. This change
        should be invisible to most users, but can be disabled by setting the
        environment variable `TF_C_API_GRAPH_CONSTRUCTION=0` in this release.
        Future releases will remove the ability to disable this change. Please
        [file a bug](https://github.com/tensorflow/tensorflow/issues/new) if you
        find yourself using this escape hatch.
    *   Add description of shapes and a pointer to tutorial notebook in
        `tf.distributions.Distribution`.
    *   Update scatter operations:
    *   Add `tf.scatter_min` and `tf.scatter_max`
    *   Extend scatter operations to work with a scalar update parameter.
    *   Move cuDNN RNN ops to core for use in TensorFlow codebase only.
    *   Add `float64` support for `Conv2d`, `Conv2dBackpropInput`, and
        `Conv2dBackpropFilter`.
    *   Add `float64` support for `AvgPool`/`AvgPoolGrad`.
    *   Make graph name scope thread local so that they work correctly in
        multi-threaded environments.
    *   Update nsync synchronization library to avoid slow primitives on Linux.
    *   Removed need to put nsync/public on C include path when building custom
        ops.
    *   Add `tf.image.psnr`, `tf.image.ssim`, `tf.image.ssim_multiscale`,
        `tf.image.image_gradients`, `tf.image.sobel_edges`.
    *   Add links to https://js.tensorflow.org.
    *   Fix non-uniformity of orthogonal matrices.
    *   Fix bug where multi-image Estimator eval summaries were not displayed
        correctly.

<a name="rpc-issue"><sup>1</sup></a> The cancellation logic of the RPC op
contains a concurrency error. A fix has been submitted to master and will be
part of the next release.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4d55397500, Aghasy, Alan Du, Alan Lee, Alan Yee, Alex Wiltschko, Animesh
Karnewar, Ankit Gupta, Anton Matosov, Aris L, Ben Barsdell, Brent Yi, Brett
Koonce, Carl Thomé, cbockman, Chikanaga Tomoyuki, Chris Tava, CéDric Deltheil,
Dahan Gong, Dalmo Cirne, Daniel Erenrich, David Norman, DavidNorman, Edd
Wilder-James, Fanjin Zeng, Felix Abecassis, fo40225, George Sterpu, Giovanni
Terlingen, Gor Baghdasaryan, Guillaume Klein, Hanchen Li, Ilya Polenov, Jakub
Kolodziejczyk, Jason Sadler, Jayaram Bobba, Jerry Liu, jinghuangintel, Jiongyan
Zhang (张炯衍), Joel Shor, Jong Wook Kim, Julian Eisenschlos, Karl Lessard, Krish
Ravindranath, Loo Rong Jie, Lukas Geiger, Luke Iwanski, Mahmoud Abuzaina,
ManHyuk, Marvin Richter, Maximilian Mitchell, Mohammad Ashraf Bhuiyan, msofka,
Mustafa Kasap, Nathan Burnham, Nathan Luehr, Naveen Marri, ngc92, nio1814, Oleg
Zabluda, Ou Changkun, Panos Ipeirotis, Paul Van Eck, Peter Lee, Piotr Czapla,
qjivy, Rholais Lii, Rodrigo Formigone, Russell Klopfer, ryantimjohn, Sang Han,
SebastiáN RamíRez, shengfuintel, Siby Jose Plathottam, Silver Chan, Stanislaw
Antol, Taehoon Lee, Tarang Chugh, Ted Chang, Thomas Bastiani, Xian Xu, Xiaoming
(Jason) Cui, Yan Facai (颜发才), yaox12, Yashal Shakti Kanungo, Yong Tang, Yuan
(Terry) Tang, Yuxin Wu, Ziyue(Louis) Lu

# Release 1.7.0

## Major Features And Improvements

*   Eager mode is moving out of contrib, try `tf.enable_eager_execution()`.
*   Graph rewrites emulating fixed-point quantization compatible with TensorFlow
    Lite, supported by new `tf.contrib.quantize` package.
*   Easily customize gradient computation with `tf.custom_gradient`.
*   [TensorBoard Debugger Plugin](https://github.com/tensorflow/tensorboard/blob/master/tensorboard/plugins/debugger/README.md),
    the graphical user interface (GUI) of TensorFlow Debugger (tfdbg), is now in
    alpha.
*   Experimental support for reading a sqlite database as a `Dataset` with new
    `tf.contrib.data.SqlDataset`.
*   Distributed Mutex / CriticalSection added to
    `tf.contrib.framework.CriticalSection`.
*   Better text processing with `tf.regex_replace`.
*   Easy, efficient sequence input with
    `tf.contrib.data.bucket_by_sequence_length`
*   Initial support for `tf.contrib.tensorrt` that enables native TensorRT in
    TensorFlow.

## Bug Fixes and Other Changes

*   Accelerated Linear Algebra (XLA):
    *   Add `MaxPoolGradGrad` support for XLA
    *   CSE pass from Tensorflow is now disabled in XLA.
*   `tf.data`:
    *   `tf.data.Dataset`
    *   Add support for building C++ Dataset op kernels as external libraries,
        using the `tf.load_op_library()` mechanism.
    *   `Dataset.list_files()` now shuffles its output by default.
    *   `Dataset.shuffle(..., seed=tf.constant(0, dtype=tf.int64))` now yields
        the same sequence of elements as `Dataset.shuffle(..., seed=0)`.
    *   Add `num_parallel_reads` argument to `tf.data.TFRecordDataset`.
*   `tf.contrib`:
    *   `tf.contrib.bayesflow.halton_sequence` now supports randomization.
    *   Add support for scalars in `tf.contrib.all_reduce`.
    *   Add `effective_sample_size` to `tf.contrib.bayesflow.mcmc_diagnostics`.
    *   Add `potential_scale_reduction` to
        `tf.contrib.bayesflow.mcmc_diagnostics`.
    *   Add `BatchNormalization`, `Kumaraswamy` bijectors.
    *   Deprecate `tf.contrib.learn`. Please check contrib/learn/README.md for
        instructions on how to convert existing code.
    *   `tf.contrib.data`
    *   Remove deprecated `tf.contrib.data.Dataset`, `tf.contrib.data.Iterator`,
        `tf.contrib.data.FixedLengthRecordDataset`,
        `tf.contrib.data.TextLineDataset`, and `tf.contrib.data.TFRecordDataset`
        classes.
    *   Added `bucket_by_sequence_length`, `sliding_window_batch`, and
        `make_batched_features_dataset`
    *   Remove unmaintained `tf.contrib.ndlstm`. You can find it externally at
        https://github.com/tmbarchive/tfndlstm.
    *   Moved most of `tf.contrib.bayesflow` to its own repo: `tfp`
*   Other:
    *   tf.py_func now reports the full stack trace if an exception occurs.
    *   Integrate `TPUClusterResolver` with GKE's integration for Cloud TPUs.
    *   Add a library for statistical testing of samplers.
    *   Add Helpers to stream data from the GCE VM to a Cloud TPU.
    *   Integrate ClusterResolvers with TPUEstimator.
    *   Unify metropolis_hastings interface with HMC kernel.
    *   Move LIBXSMM convolutions to a separate --define flag so that they are
        disabled by default.
    *   Fix `MomentumOptimizer` lambda.
    *   Reduce `tfp.layers` boilerplate via programmable docstrings.
    *   Add `auc_with_confidence_intervals`, a method for computing the AUC and
        confidence interval with linearithmic time complexity.
    *   `regression_head` now accepts customized link function, to satisfy the
        usage that user can define their own link function if the
        `array_ops.identity` does not meet the requirement.
    *   Fix `initialized_value` and `initial_value` behaviors for
        `ResourceVariables` created from `VariableDef` protos.
    *   Add TensorSpec to represent the specification of Tensors.
    *   Constant folding pass is now deterministic.
    *   Support `float16` `dtype` in `tf.linalg.*`.
    *   Add `tf.estimator.export.TensorServingInputReceiver` that allows
        `tf.estimator.Estimator.export_savedmodel` to pass raw tensors to model
        functions.

## Deprecations

*   TensorFlow 1.7 may be the last time we support Cuda versions below 8.0.
    Starting with TensorFlow 1.8 release, 8.0 will be the minimum supported
    version.
*   TensorFlow 1.7 may be the last time we support cuDNN versions below 6.0.
    Starting with TensorFlow 1.8 release, 6.0 will be the minimum supported
    version.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4d55397500, Abe, Alistair Low, Andy Kernahan, Appledore, Ben, Ben Barsdell,
Boris Pfahringer, Brad Wannow, Brett Koonce, Carl Thomé, cclauss, Chengzhi Chen,
Chris Drake, Christopher Yeh, Clayne Robison, Codrut Grosu, Daniel Trebbien,
Danny Goodman, David Goodwin, David Norman, Deron Eriksson, Donggeon Lim, Donny
Viszneki, DosLin, DylanDmitri, Francisco Guerrero, Fred Reiss, gdh1995,
Giuseppe, Glenn Weidner, gracehoney, Guozhong Zhuang, Haichen "Hc" Li, Harald
Husum, harumitsu.nobuta, Henry Spivey, hsm207, Jekyll Song, Jerome, Jiongyan
Zhang, jjsjann123, John Sungjin Park, Johnson145, JoshVarty, Julian Wolff, Jun
Wang, June-One, Kamil Sindi, Kb Sriram, Kdavis-Mozilla, Kenji, lazypanda1,
Liang-Chi Hsieh, Loo Rong Jie, Mahesh Bhosale, MandarJKulkarni, ManHyuk, Marcus
Ong, Marshal Hayes, Martin Pool, matthieudelaro, mdfaijul, mholzel, Michael
Zhou, Ming Li, Minmin Sun, Myungjoo Ham, MyungsungKwak, Naman Kamra, Peng Yu,
Penghao Cen, Phil, Raghuraman-K, resec, Rohin Mohanadas, Sandeep N Gupta, Scott
Tseng, seaotterman, Seo Sanghyeon, Sergei Lebedev, Ted Chang, terrytangyuan, Tim
H, tkunic, Tod, vihanjain, Yan Facai (颜发才), Yin Li, Yong Tang, Yukun Chen,
Yusuke Yamada

# Release 1.6.0

## Breaking Changes

*   Prebuilt binaries are now built against CUDA 9.0 and cuDNN 7.
*   Prebuilt binaries will use AVX instructions. This may break TF on older
    CPUs.

## Major Features And Improvements

*   New Optimizer internal API for non-slot variables. Descendants of
    AdamOptimizer that access _beta[12]_power will need to be updated.
*   `tf.estimator.{FinalExporter,LatestExporter}` now export stripped
    SavedModels. This improves forward compatibility of the SavedModel.
*   FFT support added to XLA CPU/GPU.

## Bug Fixes and Other Changes

*   Documentation updates:
    *   Added a second version of Getting Started, which is aimed at ML
        newcomers.
    *   Clarified documentation on `resize_images.align_corners` parameter.
    *   Additional documentation for TPUs.
*   Google Cloud Storage (GCS):
    *   Add client-side throttle.
    *   Add a `FlushCaches()` method to the FileSystem interface, with an
        implementation for GcsFileSystem.
*   Other:
    *   Add `tf.contrib.distributions.Kumaraswamy`.
    *   `RetryingFileSystem::FlushCaches()` calls the base FileSystem's
        `FlushCaches()`.
    *   Add `auto_correlation` to distributions.
    *   Add `tf.contrib.distributions.Autoregressive`.
    *   Add SeparableConv1D layer.
    *   Add convolutional Flipout layers.
    *   When both inputs of `tf.matmul` are bfloat16, it returns bfloat16,
        instead of float32.
    *   Added `tf.contrib.image.connected_components`.
    *   Add `tf.contrib.framework.CriticalSection` that allows atomic variable
        access.
    *   Output variance over trees predictions for classifications tasks.
    *   For `pt` and `eval` commands, allow writing tensor values to filesystem
        as numpy files.
    *   gRPC: Propagate truncated errors (instead of returning gRPC internal
        error).
    *   Augment `parallel_interleave` to support 2 kinds of prefetching.
    *   Improved XLA support for C64-related ops log, pow, atan2, tanh.
    *   Add probabilistic convolutional layers.

## API Changes

*   Introducing `prepare_variance` boolean with default setting to False for
    backward compatibility.
*   Move `layers_dense_variational_impl.py` to `layers_dense_variational.py`.

## Known Bugs

*   Using XLA:GPU with CUDA 9 and CUDA 9.1 results in garbage results and/or
    `CUDA_ILLEGAL_ADDRESS` failures.

    Google discovered in mid-December 2017 that the PTX-to-SASS compiler in CUDA
    9 and CUDA 9.1 sometimes does not properly compute the carry bit when
    decomposing 64-bit address calculations with large offsets (e.g. `load [x +
    large_constant]`) into 32-bit arithmetic in SASS.

    As a result, these versions of `ptxas` miscompile most XLA programs which
    use more than 4GB of temp memory. This results in garbage results and/or
    `CUDA_ERROR_ILLEGAL_ADDRESS` failures.

    A fix in CUDA 9.1.121 is expected in late February 2018. We do not expect a
    fix for CUDA 9.0.x. Until the fix is available, the only workaround is to
    [downgrade](https://developer.nvidia.com/cuda-toolkit-archive) to CUDA 8.0.x
    or disable XLA:GPU.

    TensorFlow will print a warning if you use XLA:GPU with a known-bad version
    of CUDA; see e00ba24c4038e7644da417ddc639169b6ea59122.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4d55397500, Ag Ramesh, Aiden Scandella, Akimasa Kimura, Alex Rothberg, Allen
Goodman, amilioto, Andrei Costinescu, Andrei Nigmatulin, Anjum Sayed, Anthony
Platanios, Anush Elangovan, Armando Fandango, Ashish Kumar Ram, Ashwini Shukla,
Ben, Bhavani Subramanian, Brett Koonce, Carl Thomé, cclauss, Cesc, Changming
Sun, Christoph Boeddeker, Clayne Robison, Clemens Schulz, Clint (Woonhyuk Baek),
codrut3, Cole Gerdemann, Colin Raffel, Daniel Trebbien, Daniel Ylitalo, Daniel
Zhang, Daniyar, Darjan Salaj, Dave Maclachlan, David Norman, Dong--Jian,
dongsamb, dssgsra, Edward H, eladweiss, elilienstein, Eric Lilienstein, error.d,
Eunji Jeong, fanlu, Florian Courtial, fo40225, Fred, Gregg Helt, Guozhong
Zhuang, Hanchen Li, hsm207, hyunyoung2, ImSheridan, Ishant Mrinal Haloi, Jacky
Ko, Jay Young, Jean Flaherty, Jerome, JerrikEph, Jesse Kinkead, jfaath, Jian
Lin, jinghuangintel, Jiongyan Zhang, Joel Hestness, Joel Shor, Johnny Chan,
Julian Niedermeier, Julian Wolff, JxKing, K-W-W, Karl Lessard, Kasper Marstal,
Keiji Ariyama, Koan-Sin Tan, Loki Der Quaeler, Loo Rong Jie, Luke Schaefer, Lynn
Jackson, ManHyuk, Matt Basta, Matt Smith, Matthew Schulkind, Michael,
michaelkhan3, Miguel Piedrafita, Mikalai Drabovich, Mike Knapp, mjwen, mktozk,
Mohamed Aly, Mohammad Ashraf Bhuiyan, Myungjoo Ham, Naman Bhalla, Namrata-Ibm,
Nathan Luehr, nathansilberman, Netzeband, Niranjan Hasabnis, Omar Aflak, Ozge
Yalcinkaya, Parth P Panchal, patrickzzy, Patryk Chrabaszcz, Paul Van Eck, Paweł
Kapica, Peng Yu, Philip Yang, Pierre Blondeau, Po-Hsien Chu, powderluv, Puyu
Wang, Rajendra Arora, Rasmus, Renat Idrisov, resec, Robin Richtsfeld, Ronald
Eddy Jr, Sahil Singh, Sam Matzek, Sami Kama, sandipmgiri, Santiago Castro, Sayed
Hadi Hashemi, Scott Tseng, Sergii Khomenko, Shahid, Shengpeng Liu, Shreyash
Sharma, Shrinidhi Kl, Simone Cirillo, simsicon, Stanislav Levental,
starsblinking, Stephen Lumenta, Steven Hickson, Su Tang, Taehoon Lee, Takuya
Wakisaka, Ted Chang, Ted Ying, Tijmen Verhulsdonck, Timofey Kondrashov, vade,
vaibhav, Valentin Khrulkov, vchigrin, Victor Costan, Viraj Navkal, Vivek Rane,
wagonhelm, Yan Facai (颜发才), Yanbo Liang, Yaroslav Bulatov, yegord, Yong Tang,
Yoni Tsafir, yordun, Yuan (Terry) Tang, Yuxin Wu, zhengdi, Zhengsheng Wei, 田传武

# Release 1.5.0

## Breaking Changes

*   Prebuilt binaries are now built against CUDA 9.0 and cuDNN 7.
*   Starting from 1.6 release, our prebuilt binaries will use AVX instructions.
    This may break TF on older CPUs.

## Major Features And Improvements

*   [Eager execution](https://github.com/tensorflow/tensorflow/tree/r1.5/tensorflow/contrib/eager)
    preview version is now available.
*   [TensorFlow Lite](https://github.com/tensorflow/tensorflow/tree/r1.5/tensorflow/lite)
    dev preview is now available.
*   CUDA 9.0 and cuDNN 7 support.
*   Accelerated Linear Algebra (XLA):
    *   Add `complex64` support to XLA compiler.
    *   `bfloat` support is now added to XLA infrastructure.
    *   Make `ClusterSpec` propagation work with XLA devices.
    *   Use a deterministic executor to generate XLA graph.
*   `tf.contrib`:
    *   `tf.contrib.distributions`:
    *   Add `tf.contrib.distributions.Autoregressive`.
    *   Make `tf.contrib.distributions` QuadratureCompound classes support batch
    *   Infer `tf.contrib.distributions.RelaxedOneHotCategorical` `dtype` from
        arguments.
    *   Make `tf.contrib.distributions` quadrature family parameterized by
        `quadrature_grid_and_prob` vs `quadrature_degree`.
    *   `auto_correlation` added to `tf.contrib.distributions`
    *   Add `tf.contrib.bayesflow.layers`, a collection of probabilistic
        (neural) layers.
    *   Add `tf.contrib.bayesflow.halton_sequence`.
    *   Add `tf.contrib.data.make_saveable_from_iterator.`
    *   Add `tf.contrib.data.shuffle_and_repeat`.
    *   Add new custom transformation: `tf.contrib.data.scan()`.
    *   `tf.contrib.distributions.bijectors`:
    *   Add `tf.contrib.distributions.bijectors.MaskedAutoregressiveFlow`.
    *   Add `tf.contrib.distributions.bijectors.Permute`.
    *   Add `tf.contrib.distributions.bijectors.Gumbel`.
    *   Add `tf.contrib.distributions.bijectors.Reshape`.
    *   Support shape inference (i.e., shapes containing -1) in the Reshape
        bijector.
*   Add `streaming_precision_recall_at_equal_thresholds,` a method for computing
    streaming precision and recall with `O(num_thresholds + size of
    predictions)` time and space complexity.
*   Change `RunConfig` default behavior to not set a random seed, making random
    behavior independently random on distributed workers. We expect this to
    generally improve training performance. Models that do rely on determinism
    should set a random seed explicitly.
*   Replaced the implementation of `tf.flags` with `absl.flags`.
*   Add support for `CUBLAS_TENSOR_OP_MATH` in fp16 GEMM
*   Add support for CUDA on NVIDIA Tegra devices

## Bug Fixes and Other Changes

*   Documentation updates:
    *   Clarified that you can only install TensorFlow on 64-bit machines.
    *   Added a short doc explaining how `Estimator`s save checkpoints.
    *   Add documentation for ops supported by the `tf2xla` bridge.
    *   Fix minor typos in the doc of `SpaceToDepth` and `DepthToSpace`.
    *   Updated documentation comments in `mfcc_mel_filterbank.h` and `mfcc.h`
        to clarify that the input domain is squared magnitude spectra and the
        weighting is done on linear magnitude spectra (sqrt of inputs).
    *   Change `tf.contrib.distributions` docstring examples to use `tfd` alias
        rather than `ds`, `bs`.
    *   Fix docstring typos in `tf.distributions.bijectors.Bijector`.
    *   `tf.assert_equal` no longer raises `ValueError.` It now raises
        `InvalidArgumentError,` as documented.
    *   Update Getting Started docs and API intro.
*   Google Cloud Storage (GCS):
    *   Add userspace DNS caching for the GCS client.
    *   Customize request timeouts for the GCS filesystem.
    *   Improve GCS filesystem caching.
*   Bug Fixes:
    *   Fix bug where partitioned integer variables got their wrong shapes.
        Before
    *   Fix correctness bug in CPU and GPU implementations of Adadelta.
    *   Fix a bug in `import_meta_graph`'s handling of partitioned variables
        when importing into a scope. WARNING: This may break loading checkpoints
        of graphs with partitioned variables saved after using
        `import_meta_graph` with a non-empty `import_scope` argument.
    *   Fix bug in offline debugger which prevented viewing events.
    *   Added the `WorkerService.DeleteWorkerSession` method to the gRPC
        interface, to fix a memory leak. Ensure that your master and worker
        servers are running the same version of TensorFlow to avoid
        compatibility issues.
    *   Fix bug in peephole implementation of BlockLSTM cell.
    *   Fix bug by casting dtype of `log_det_jacobian` to match `log_prob` in
        `TransformedDistribution`.
    *   Fix a bug in `import_meta_graph`'s handling of partitioned variables
        when
    *   Ensure `tf.distributions.Multinomial` doesn't underflow in `log_prob`.
        Before this change, all partitions of an integer variable were
        initialized with the shape of the unpartitioned variable; after this
        change they are initialized correctly.
*   Other:
    *   Add necessary shape util support for bfloat16.
    *   Add a way to run ops using a step function to MonitoredSession.
    *   Add `DenseFlipout` probabilistic layer.
    *   A new flag `ignore_live_threads` is available on train. If set to
        `True`, it will ignore threads that remain running when tearing down
        infrastructure after successfully completing training, instead of
        throwing a RuntimeError.
    *   Restandardize `DenseVariational` as simpler template for other
        probabilistic layers.
    *   `tf.data` now supports `tf.SparseTensor` components in dataset elements.
    *   It is now possible to iterate over `Tensor`s.
    *   Allow `SparseSegmentReduction` ops to have missing segment IDs.
    *   Modify custom export strategy to account for multidimensional sparse
        float splits.
    *   `Conv2D`, `Conv2DBackpropInput`, `Conv2DBackpropFilter` now supports
        arbitrary dilations with GPU and cuDNNv6 support.
    *   `Estimator` now supports `Dataset`: `input_fn` can return a `Dataset`
        instead of `Tensor`s.
    *   Add `RevBlock`, a memory-efficient implementation of reversible residual
        layers.
    *   Reduce BFCAllocator internal fragmentation.
    *   Add `cross_entropy` and `kl_divergence` to
        `tf.distributions.Distribution`.
    *   Add `tf.nn.softmax_cross_entropy_with_logits_v2` which enables backprop
        w.r.t. the labels.
    *   GPU back-end now uses `ptxas` to compile generated PTX.
    *   `BufferAssignment`'s protocol buffer dump is now deterministic.
    *   Change embedding op to use parallel version of `DynamicStitch`.
    *   Add support for sparse multidimensional feature columns.
    *   Speed up the case for sparse float columns that have only 1 value.
    *   Allow sparse float splits to support multivalent feature columns.
    *   Add `quantile` to `tf.distributions.TransformedDistribution`.
    *   Add `NCHW_VECT_C` support for `tf.depth_to_space` on GPU.
    *   Add `NCHW_VECT_C` support for `tf.space_to_depth` on GPU.

## API Changes

*   Rename `SqueezeDims` attribute to `Axis` in C++ API for Squeeze op.
*   `Stream::BlockHostUntilDone` now returns Status rather than bool.
*   Minor refactor: move stats files from `stochastic` to `common` and remove
    `stochastic`.

## Known Bugs

*   Using XLA:GPU with CUDA 9 and CUDA 9.1 results in garbage results and/or
    `CUDA_ILLEGAL_ADDRESS` failures.

    Google discovered in mid-December 2017 that the PTX-to-SASS compiler in CUDA
    9 and CUDA 9.1 sometimes does not properly compute the carry bit when
    decomposing 64-bit address calculations with large offsets (e.g. `load [x +
    large_constant]`) into 32-bit arithmetic in SASS.

    As a result, these versions of `ptxas` miscompile most XLA programs which
    use more than 4GB of temp memory. This results in garbage results and/or
    `CUDA_ERROR_ILLEGAL_ADDRESS` failures.

    A fix in CUDA 9.1.121 is expected in late February 2018. We do not expect a
    fix for CUDA 9.0.x. Until the fix is available, the only workaround is to
    [downgrade](https://developer.nvidia.com/cuda-toolkit-archive) to CUDA 8.0.x
    or disable XLA:GPU.

    TensorFlow will print a warning if you use XLA:GPU with a known-bad version
    of CUDA; see e00ba24c4038e7644da417ddc639169b6ea59122.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Adam Zahran, Ag Ramesh, Alan Lee, Alan Yee, Alex Sergeev, Alexander, Amir H.
Jadidinejad, Amy, Anastasios Doumoulakis, Andrei Costinescu, Andrei Nigmatulin,
Anthony Platanios, Anush Elangovan, arixlin, Armen Donigian, ArtëM Sobolev,
Atlas7, Ben Barsdell, Bill Prin, Bo Wang, Brett Koonce, Cameron Thomas, Carl
Thomé, Cem Eteke, cglewis, Changming Sun, Charles Shenton, Chi-Hung, Chris
Donahue, Chris Filo Gorgolewski, Chris Hoyean Song, Chris Tava, Christian Grail,
Christoph Boeddeker, cinqS, Clayne Robison, codrut3, concerttttt, CQY, Dan
Becker, Dan Jarvis, Daniel Zhang, David Norman, dmaclach, Dmitry Trifonov,
Donggeon Lim, dongpilYu, Dr. Kashif Rasul, Edd Wilder-James, Eric Lv, fcharras,
Felix Abecassis, FirefoxMetzger, formath, FredZhang, Gaojin Cao, Gary Deer,
Guenther Schmuelling, Hanchen Li, Hanmin Qin, hannesa2, hyunyoung2, Ilya
Edrenkin, Jackson Kontny, Jan, Javier Luraschi, Jay Young, Jayaram Bobba, Jeff,
Jeff Carpenter, Jeremy Sharpe, Jeroen BéDorf, Jimmy Jia, Jinze Bai, Jiongyan
Zhang, Joe Castagneri, Johan Ju, Josh Varty, Julian Niedermeier, JxKing, Karl
Lessard, Kb Sriram, Keven Wang, Koan-Sin Tan, Kyle Mills, lanhin, LevineHuang,
Loki Der Quaeler, Loo Rong Jie, Luke Iwanski, LáSzló Csomor, Mahdi Abavisani,
Mahmoud Abuzaina, ManHyuk, Marek ŠUppa, MathSquared, Mats Linander, Matt Wytock,
Matthew Daley, Maximilian Bachl, mdymczyk, melvyniandrag, Michael Case, Mike
Traynor, miqlas, Namrata-Ibm, Nathan Luehr, Nathan Van Doorn, Noa Ezra, Nolan
Liu, Oleg Zabluda, opensourcemattress, Ouwen Huang, Paul Van Eck, peisong, Peng
Yu, PinkySan, pks, powderluv, Qiao Hai-Jun, Qiao Longfei, Rajendra Arora, Ralph
Tang, resec, Robin Richtsfeld, Rohan Varma, Ryohei Kuroki, SaintNazaire, Samuel
He, Sandeep Dcunha, sandipmgiri, Sang Han, scott, Scott Mudge, Se-Won Kim, Simon
Perkins, Simone Cirillo, Steffen Schmitz, Suvojit Manna, Sylvus, Taehoon Lee,
Ted Chang, Thomas Deegan, Till Hoffmann, Tim, Toni Kunic, Toon Verstraelen,
Tristan Rice, Urs KöSter, Utkarsh Upadhyay, Vish (Ishaya) Abrams, Winnie Tsang,
Yan Chen, Yan Facai (颜发才), Yi Yang, Yong Tang, Youssef Hesham, Yuan (Terry)
Tang, Zhengsheng Wei, zxcqwe4906, 张志豪, 田传武

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 1.4.1

## Bug Fixes and Other Changes

*   `LinearClassifier` fix.

# Release 1.4.0

## Major Features And Improvements

*   `tf.keras` is now part of the core TensorFlow API.
*   [`tf.data`](https://tensorflow.org/guide/data) is now part of the core
    TensorFlow API.
    *   The API is now subject to backwards compatibility guarantees.
    *   For a guide to migrating from the `tf.contrib.data` API, see the
        [README](https://github.com/tensorflow/tensorflow/blob/r1.4/tensorflow/contrib/data/README.md).
    *   Major new features include `Dataset.from_generator()` (for building an
        input pipeline from a Python generator), and the `Dataset.apply()`
        method for applying custom transformation functions.
    *   Several custom transformation functions have been added, including
        `tf.contrib.data.batch_and_drop_remainder()` and
        `tf.contrib.data.sloppy_interleave()`.
*   Add `train_and_evaluate` for simple distributed `Estimator` training.
*   Add `tf.spectral.dct` for computing the DCT-II.
*   Add Mel-Frequency Cepstral Coefficient support to `tf.contrib.signal` (with
    GPU and gradient support).
*   Add a self-check on `import tensorflow` for Windows DLL issues.
*   Add NCHW support to `tf.depth_to_space` on GPU.
*   TensorFlow Debugger (tfdbg):
    *   Add `eval` command to allow evaluation of arbitrary Python/numpy
        expressions in tfdbg command-line interface. See
        [Debugging TensorFlow Programs](https://www.tensorflow.org/guide/debugger)
        for more details.
    *   Usability improvement: The frequently used tensor filter
        `has_inf_or_nan` is now added to `Session` wrappers and hooks by
        default. So there is no need for clients to call
        `.add_tensor_filter(tf_debug.has_inf_or_nan)` anymore.
*   SinhArcsinh (scalar) distribution added to `contrib.distributions`.
*   Make `GANEstimator` opensource.
*   `Estimator.export_savedmodel()` now includes all valid serving signatures
    that can be constructed from the Serving Input Receiver and all available
    ExportOutputs. For instance, a classifier may provide regression- and
    prediction-flavored outputs, in addition to the classification-flavored one.
    Building signatures from these allows TF Serving to honor requests using the
    different APIs (Classify, Regress, and Predict). Furthermore,
    `serving_input_receiver_fn()` may now specify alternative subsets of nodes
    that may act as inputs. This allows, for instance, producing a prediction
    signature for a classifier that accepts raw `Tensors` instead of a
    serialized `tf.Example`.
*   Add `tf.contrib.bayesflow.hmc`.
*   Add `tf.contrib.distributions.MixtureSameFamily`.
*   Make `Dataset.shuffle()` always reshuffles after each iteration by default.
*   Add `tf.contrib.bayesflow.metropolis_hastings`.
*   Add `log_rate` parameter to `tf.contrib.distributions.Poisson`.
*   Extend `tf.contrib.distributions.bijector` API to handle some non-injective
    transforms.
*   Java:
    *   Generics (e.g., `Tensor<Integer>`) for improved type-safety (courtesy
        @andrewcmyers).
    *   Support for multi-dimensional string tensors.
    *   Support loading of custom operations (e.g. many in `tf.contrib`) on
        Linux and OS X
*   All our prebuilt binaries have been built with CUDA 8 and cuDNN 6. We
    anticipate releasing TensorFlow 1.5 with CUDA 9 and cuDNN 7.

## Bug Fixes and Other Changes

*   `tf.nn.rnn_cell.DropoutWrapper` is now more careful about dropping out LSTM
    states. Specifically, it no longer ever drops the `c` (memory) state of an
    `LSTMStateTuple`. The new behavior leads to proper dropout behavior for
    LSTMs and stacked LSTMs. This bug fix follows recommendations from published
    literature, but is a behavioral change. State dropout behavior may be
    customized via the new `dropout_state_filter_visitor` argument.
*   Removed `tf.contrib.training.python_input`. The same behavior, in a more
    flexible and reproducible package, is available via the new
    `tf.contrib.data.Dataset.from_generator` method!
*   Fix `tf.contrib.distributions.Affine` incorrectly computing
    log-det-jacobian.
*   Fix `tf.random_gamma` incorrectly handling non-batch, scalar draws.
*   Resolved a race condition in TensorForest TreePredictionsV4Op.
*   Google Cloud Storage file system, Amazon S3 file system, and Hadoop file
    system support are now default build options.
*   Custom op libraries must link against libtensorflow_framework.so (installed
    at `tf.sysconfig.get_lib()`).
*   Change `RunConfig` default behavior to not set a random seed, making random
    behavior independently random on distributed workers. We expect this to
    generally improve training performance. Models that do rely on determinism
    should set a random seed explicitly.

## Breaking Changes to the API

*   The signature of the `tf.contrib.data.rejection_resample()` function has
    been changed. It now returns a function that can be used as an argument to
    `Dataset.apply()`.
*   Remove `tf.contrib.data.Iterator.from_dataset()` method. Use
    `Dataset.make_initializable_iterator()` instead.
*   Remove seldom used and unnecessary `tf.contrib.data.Iterator.dispose_op()`.
*   Reorder some TF-GAN loss functions in a non-backwards compatible way.

## Known Issues

*   In Python 3, `Dataset.from_generator()` does not support Unicode strings.
    You must convert any strings to bytes objects before yielding them from the
    generator.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4d55397500, Abdullah Alrasheed, abenmao, Adam Salvail, Aditya Dhulipala, Ag
Ramesh, Akimasa Kimura, Alan Du, Alan Yee, Alexander, Amit Kushwaha, Amy, Andrei
Costinescu, Andrei Nigmatulin, Andrew Erlichson, Andrew Myers, Andrew Stepanov,
Androbin, AngryPowman, Anish Shah, Anton Daitche, Artsiom Chapialiou, asdf2014,
Aseem Raj Baranwal, Ash Hall, Bart Kiers, Batchu Venkat Vishal, ben, Ben
Barsdell, Bill Piel, Carl Thomé, Catalin Voss, Changming Sun, Chengzhi Chen, Chi
Zeng, Chris Antaki, Chris Donahue, Chris Oelmueller, Chris Tava, Clayne Robison,
Codrut, Courtial Florian, Dalmo Cirne, Dan J, Darren Garvey, David
Kristoffersson, David Norman, David RöThlisberger, DavidNorman, Dhruv, DimanNe,
Dorokhov, Duncan Mac-Vicar P, EdwardDixon, EMCP, error.d, FAIJUL, Fan Xia,
Francois Xavier, Fred Reiss, Freedom" Koan-Sin Tan, Fritz Obermeyer, Gao, Xiang,
Guenther Schmuelling, Guo Yejun (郭叶军), Hans Gaiser, HectorSVC, Hyungsuk Yoon,
James Pruegsanusak, Jay Young, Jean Wanka, Jeff Carpenter, Jeremy Rutman, Jeroen
BéDorf, Jett Jones, Jimmy Jia, jinghuangintel, jinze1994, JKurland, Joel
Hestness, joetoth, John B Nelson, John Impallomeni, John Lawson, Jonas, Jonathan
Dekhtiar, joshkyh, Jun Luan, Jun Mei, Kai Sasaki, Karl Lessard, karl@kubx.ca, Kb
Sriram, Kenichi Ueno, Kevin Slagle, Kongsea, Lakshay Garg, lhlmgr, Lin Min,
liu.guangcong, Loki Der Quaeler, Louie Helm, lucasmoura, Luke Iwanski, Lyndon
White, Mahmoud Abuzaina, Marcel Puyat, Mark Aaron Shirley, Michele Colombo,
MtDersvan, Namrata-Ibm, Nathan Luehr, Naurril, Nayana Thorat, Nicolas Lopez,
Niranjan Hasabnis, Nolan Liu, Nouce, Oliver Hennigh, osdamv, Patrik Erdes,
Patryk Chrabaszcz, Pavel Christof, Penghao Cen, postBG, Qingqing Cao, Qingying
Chen, qjivy, Raphael, Rasmi, raymondxyang, Renze Yu, resec, Roffel, Ruben
Vereecken, Ryohei Kuroki, sandipmgiri, Santiago Castro, Scott Kirkland, Sean
Vig, Sebastian Raschka, Sebastian Weiss, Sergey Kolesnikov, Sergii Khomenko,
Shahid, Shivam Kotwalia, Stuart Berg, Sumit Gouthaman, superzerg, Sven Mayer,
tetris, Ti Zhou, Tiago Freitas Pereira, Tian Jin, Tomoaki Oiki, Vaibhav Sood,
vfdev, Vivek Rane, Vladimir Moskva, wangqr, Weber Xie, Will Frey, Yan Facai
(颜发才), yanivbl6, Yaroslav Bulatov, Yixing Lao, Yong Tang, youkaichao, Yuan
(Terry) Tang, Yue Zhang, Yuxin Wu, Ziming Dong, ZxYuan, 黄璞

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 1.3.0

See also
[TensorBoard 0.1.4](https://github.com/tensorflow/tensorboard/releases/tag/0.1.4)
release notes.

## Major Features and Improvements

*   Added canned estimators to Tensorflow library. List of added estimators:
    *   `DNNClassifier`
    *   `DNNRegressor`
    *   `LinearClassifier`
    *   `LinearRegressor`
    *   `DNNLinearCombinedClassifier`
    *   `DNNLinearCombinedRegressor`.
*   All our prebuilt binaries have been built with cuDNN 6. We anticipate
    releasing TensorFlow 1.4 with cuDNN 7.
*   `import tensorflow` now goes much faster.
*   Adds a file cache to the GCS filesystem with configurable max staleness for
    file contents. This permits caching of file contents across close/open
    boundaries.
*   Added an axis parameter to `tf.gather`.
*   Added a `constant_values` keyword argument to `tf.pad`.
*   Adds `Dataset.interleave` transformation.
*   Add `ConcatenateDataset` to concatenate two datasets.
*   Added Mobilenet support to TensorFlow for Poets training script.
*   Adds a block cache to the GCS filesystem with configurable block size and
    count.
*   SinhArcSinh bijector added.
*   Added `Dataset.list_files` API.
*   Introduces new operations and Python bindings for the Cloud TPU.
*   Adding TensorFlow-iOS CocoaPod for symmetry with tensorflow-android.
*   Introduces base implementations of ClusterResolvers.
*   Unify memory representations of TensorShape and PartialTensorShape. As a
    consequence, tensors now have a maximum of 254 dimensions, not 255.
*   Changed references to LIBXSMM to use version 1.8.1.
*   TensorFlow Debugger (tfdbg):
    *   Display summaries of numeric tensor values with the `-s` flag to command
        `print_tensor` or `pt`.
    *   Display feed values with the `print_feed` or `pf` command and clickable
        links in the curses UI.
    *   Runtime profiler at the op level and the Python source line level with
        the `run -p` command.
*   Initial release of the statistical distribution library `tf.distributions`.
*   GPU kernels and speed improvements for unary `tf.where` and `tf.nn.top_k`.
*   Monotonic Attention wrappers added to `tf.contrib.seq2seq`.
*   Added `tf.contrib.signal`, a library for signal processing primitives.
*   Added `tf.contrib.resampler`, containing CPU and GPU ops for differentiable
    resampling of images.

## Breaking Changes to the API

*   `tf.RewriterConfig` was removed from the Python API after being available in
    1.2 release candidates (it was never in an actual release). Graph rewriting
    is still available, just not as `tf.RewriterConfig`. Instead add an explicit
    import.
*   Breaking change to `tf.contrib.data.Dataset` APIs that expect a nested
    structure. Lists are now converted to `tf.Tensor` implicitly. You may need
    to change uses of lists to tuples in existing code. In addition, dicts are
    now supported as a nested structure.

## Changes to contrib APIs

*   Adds tf.contrib.nn.rank_sampled_softmax_loss, a sampled-softmax variant that
    can improve rank loss.
*   `tf.contrib.metrics`.{streaming_covariance,streaming_pearson_correlation}
    modified to return nan when they have seen less or equal to 1 unit of
    weight.
*   Adds time series models to contrib. See contrib/timeseries/README.md for
    details.
*   Adds FULLY_CONNECTED Op to tensorflow/lite/schema.fbs

## Known Issues

*   Tensorflow_gpu compilation fails with Bazel 0.5.3.

## Bug Fixes and Other Changes

*   Fixes `strides` and `begin` dtype mismatch when slicing using int64 Tensor
    index in python.
*   Improved convolution padding documentation.
*   Add a tag constant, gpu, to present graph with GPU support.
*   `saved_model.utils` now support SparseTensors transparently.
*   A more efficient implementation of non-max suppression.
*   Add support for the shrinkage-type L2 to FtrlOptimizer in addition to the
    online L2 it already supports.
*   Fix negative variance in moments calculation.
*   Expand UniqueOp Benchmark Tests to cover more collision cases.
*   Improves stability of GCS filesystem on Mac.
*   Add time estimation to HloCostAnalysis.
*   Fixed the bug in Estimator that params in constructor was not a deepcopy of
    the user provided one. This bugs inadvertently enabled user to mutate the
    params after the creation of Estimator, leading to potentially undefined
    behavior.
*   Added None check for save_path in `saver.restore`.
*   Register devices under their legacy names in device_mgr to ease the
    transition to clusterspec-propagated configurations.
*   VectorExponential added to distributions.
*   Add a bitwise module with bitwise_and, bitwise_or, bitwise_xor, and invert
    functions.
*   Add fixed-grid ODE integration routines.
*   Allow passing bounds to ScipyOptimizerInterface.
*   Correctness fixes for fft_length parameter to `tf.spectral.rfft` &
    `tf.spectral.irfft`.
*   Exported model signatures using the 'predict' method will no longer have
    their input and output keys silently ignored and rewritten to 'inputs' and
    'outputs'. If a model was exported with different names before 1.2, and is
    now served with tensorflow/serving, it will accept requests using 'inputs'
    and 'outputs'. Starting at 1.2, such a model will accept the keys specified
    during export. Therefore, inference requests using 'inputs' and 'outputs'
    may start to fail. To fix this, either update any inference clients to send
    requests with the actual input and output keys used by the trainer code, or
    conversely, update the trainer code to name the input and output Tensors
    'inputs' and 'outputs', respectively. Signatures using the 'classify' and
    'regress' methods are not affected by this change; they will continue to
    standardize their input and output keys as before.
*   Add in-memory caching to the Dataset API.
*   Set default end_of_sequence variable in datasets iterators to false.
*   [Performance] Increase performance of `tf.layers.conv2d` when setting
    use_bias=True by 2x by using nn.bias_add.
*   Update iOS examples to use CocoaPods, and moved to tensorflow/examples/ios.
*   Adds a family= attribute in `tf.summary` ops to allow controlling the tab
    name used in Tensorboard for organizing summaries.
*   When GPU is configured, do not require --config=cuda, instead, automatically
    build for GPU if this is requested in the configure script.
*   Fix incorrect sampling of small probabilities in CPU/GPU multinomial.
*   Add a list_devices() API on sessions to list devices within a cluster.
    Additionally, this change augment the ListDevices master API to support
    specifying a session.
*   Allow uses of over-parameterized separable convolution.
*   TensorForest multi-regression bug fix.
*   Framework now supports armv7, cocoapods.org now displays correct page.
*   Script to create iOS framework for CocoaPods.
*   Android releases of TensorFlow are now pushed to jcenter for easier
    integration into apps. See
    https://github.com/tensorflow/tensorflow/blob/master/tensorflow/tools/android/inference_interface/README.md
    for more details.
*   TensorFlow Debugger (tfdbg):
    *   Fixed a bug that prevented tfdbg from functioning with multi-GPU setups.
    *   Fixed a bug that prevented tfdbg from working with
        `tf.Session.make_callable`.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4F2E4A2E, Adriano Carmezim, Adrià Arrufat, Alan Yee, Alex Lattas, Alex Rothberg,
Alexandr Baranezky, Ali Siddiqui, Andreas Solleder, Andrei Costinescu, Andrew
Hundt, Androbin, Andy Kernahan, Anish Shah, Anthony Platanios, Arvinds-Ds, b1rd,
Baptiste Arnaud, Ben Mabey, Benedikt Linse, Beomsu Kim, Bo Wang, Boyuan Deng,
Brett Koonce, Bruno Rosa, Carl Thomé, Changming Sun, Chase Roberts, Chirag
Bhatia, Chris Antaki, Chris Hoyean Song, Chris Tava, Christos Nikolaou, Croath
Liu, cxx, Czxck001, Daniel Ylitalo, Danny Goodman, Darren Garvey, David
Brailovsky, David Norman, DavidNorman, davidpham87, ddurham2, Dhruv, DimanNe,
Drew Hintz, Dustin Tran, Earthson Lu, ethiraj, Fabian Winnen, Fei Sun, Freedom"
Koan-Sin Tan, Fritz Obermeyer, Gao, Xiang, Gautam, Guenther Schmuelling, Gyu-Ho
Lee, Hauke Brammer, horance, Humanity123, J Alammar, Jayeol Chun, Jeroen BéDorf,
Jianfei Wang, jiefangxuanyan, Jing Jun Yin, Joan Puigcerver, Joel Hestness,
Johannes Mayer, John Lawson, Johnson145, Jon Malmaud, Jonathan
Alvarez-Gutierrez, Juang, Yi-Lin, Julian Viereck, Kaarthik Sivashanmugam, Karl
Lessard, karl@kubx.ca, Kevin Carbone, Kevin Van Der Burgt, Kongsea, ksellesk,
lanhin, Lef Ioannidis, Liangliang He, Louis Tiao, Luke Iwanski, LáSzló Csomor,
magixsno, Mahmoud Abuzaina, Marcel Hlopko, Mark Neumann, Maxwell Paul Brickner,
mdfaijul, MichaëL Defferrard, Michał JastrzęBski, Michele Colombo, Mike Brodie,
Mosnoi Ion, mouradmourafiq, myPrecious, Nayana Thorat, Neeraj Kashyap, Nelson
Liu, Niranjan Hasabnis, Olivier Moindrot, orome, Pankaj Gupta, Paul Van Eck,
peeyush18, Peng Yu, Pierre, preciousdp11, qjivy, Raingo, raoqiyu, ribx, Richard
S. Imaoka, Rishabh Patel, Robert Walecki, Rockford Wei, Ryan Kung, Sahil Dua,
Sandip Giri, Sayed Hadi Hashemi, sgt101, Shitian Ni, Shuolongbj, Siim PõDer,
Simon Perkins, sj6077, SOLARIS, Spotlight0xff, Steffen Eberbach, Stephen Fox,
superryanguo, Sven Mayer, Tapan Prakash, Tiago Morais Morgado, Till Hoffmann, Tj
Rana, Vadim Markovtsev, vhasanov, Wei Wu, windead, Yan (Asta) Li, Yan Chen, Yann
Henon, Yi Wang, Yong Tang, yorkie, Yuan (Terry) Tang, Yuxin Wu, zhengjiajin,
zhongzyd, 黄璞

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 1.2.1

## Bug Fixes and Other Changes

*   Updating markdown version required to >= 2.6.8.
*   Support tensors as dropout rates again, by removing the min(max(..))

# Release 1.2.0

## Major Features and Improvements

*   Python 3.6 support on Windows.
*   Added `tf.layers.conv3d_transpose` layer for spatio temporal deconvolution.
*   Added `tf.Session.make_callable()`, which provides a lower overhead means of
    running a similar step multiple times.
*   Added libverbs-based RDMA support to contrib (courtesy @junshi15 from
    Yahoo).
*   Bring `tf.feature_column.*` into the API. Non-deprecated functionality from
    `tf.contrib.layers.*` is moved to `tf.feature_column.*` with cosmetic
    changes.
*   `RNNCell` objects now subclass `tf.layers.Layer`. The strictness described
    in the TensorFlow 1.1 release is gone: The first time an RNNCell is used, it
    caches its scope. All future uses of the RNNCell will reuse variables from
    that same scope. This is a breaking change from the behavior of RNNCells in
    TensorFlow versions <= 1.0.1. TensorFlow 1.1 had checks in place to ensure
    old code works correctly with the new semantics; this version allows more
    flexible uses of RNNCell but can lead to subtle errors if using code meant
    for TensorFlow <= 1.0.1. For example, writing: `MultiRNNCell([lstm] * 5)`
    will now build a 5-layer LSTM stack where each layer shares the **same**
    parameters. To get 5 layers each with their own parameters, write:
    `MultiRNNCell([LSTMCell(...) for _ in range(5)])`. If at all unsure, first
    test your code with TF 1.1; ensure it raises no errors, and then upgrade to
    TF 1.2.
*   RNNCells' variable names have been renamed for consistency with Keras
    layers. Specifically, the previous variable names "weights" and "biases"
    have been changed to "kernel" and "bias", respectively. This may cause
    backward incompatibility with regard to your old checkpoints containing such
    RNN cells, in which case you can use the tool
    [checkpoint_convert script](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/contrib/rnn/python/tools/checkpoint_convert.py)
    to convert the variable names in your old checkpoints.
*   Many of the RNN functions and classes that were in the `tf.nn` namespace
    before the 1.0 release and which were moved to `tf.contrib.rnn` have now
    been moved back to the core namespace. This includes `RNNCell`, `LSTMCell`,
    `GRUCell`, and a number of other cells. These now reside in `tf.nn.rnn_cell`
    (with aliases in `tf.contrib.rnn` for backwards compatibility). The original
    `tf.nn.rnn` function is now `tf.nn.static_rnn`, and the bidirectional static
    and state saving static rnn functions are also now back in the `tf.nn`
    namespace.

    Notable exceptions are the `EmbeddingWrapper`, `InputProjectionWrapper` and
    `OutputProjectionWrapper`, which will slowly be moved to deprecation in
    `tf.contrib.rnn`. These are inefficient wrappers that should often be
    replaced by calling `embedding_lookup` or `layers.dense` as pre- or post-
    processing of the rnn. For RNN decoding, this functionality has been
    replaced with an alternative API in `tf.contrib.seq2seq`.

*   Intel MKL Integration
    (https://software.intel.com/en-us/articles/tensorflow-optimizations-on-modern-intel-architecture).
    Intel developed a number of optimized deep learning primitives: In addition
    to matrix multiplication and convolution, these building blocks include:
    Direct batched convolution Pooling: maximum, minimum, average Normalization:
    LRN, batch normalization Activation: rectified linear unit (ReLU) Data
    manipulation: multi-dimensional transposition (conversion), split, concat,
    sum and scale.

*   TensorForest Estimator now supports SavedModel export for serving.

*   Support client-provided ClusterSpec's and propagate them to all workers to
    enable the creation of dynamic TensorFlow clusters.

*   TensorFlow C library now available for Windows.

*   We released a new open-source version of TensorBoard.

*   [`SavedModel CLI`](https://www.tensorflow.org/versions/master/guide/saved_model_cli)
    tool available to inspect and execute MetaGraph in SavedModel

*   Android releases of TensorFlow are now pushed to jcenter for easier
    integration into apps. See
    https://github.com/tensorflow/tensorflow/blob/master/tensorflow/tools/android/inference_interface/README.md
    for more details.

## Deprecations

*   TensorFlow 1.2 may be the last time we build with cuDNN 5.1. Starting with
    TensorFlow 1.3, we will try to build all our prebuilt binaries with cuDNN
    6.0. While we will try to keep our source code compatible with cuDNN 5.1, it
    will be best effort.

## Breaking Changes to the API

*   `org.tensorflow.contrib.android.TensorFlowInferenceInterface` now throws
    exceptions where possible and has simplified method signatures.

## Changes to contrib APIs

*   Added `tf.contrib.util.create_example`.
*   Added bilinear interpolation to `tf.contrib.image`.
*   Add `tf.contrib.stateless` for random ops with custom seed control.
*   MultivariateNormalFullCovariance added to contrib/distributions/
*   tensorflow/contrib/rnn undergoes RNN cell variable renaming for consistency
    with Keras layers. Specifically, the previous variable names "weights" and
    "biases" are changed to "kernel" and "bias", respectively. This may cause
    backward incompatibility with regard to your old checkpoints containing such
    RNN cells, in which case you can use the
    [checkpoint_convert script](https://github.com/tensorflow/tensorflow/blob/master/tensorflow/contrib/rnn/python/tools/checkpoint_convert.py)
    to convert the variable names in your old checkpoints.
*   Added `tf.contrib.kernel_methods` module with Ops and estimators for primal
    (explicit) kernel methods in TensorFlow.

## Bug Fixes and Other Changes

*   In python, `Operation.get_attr` on type attributes returns the Python DType
    version of the type to match expected get_attr documentation rather than the
    protobuf enum.
*   tensorflow/contrib/rnn undergoes RNN cell variable renaming for consistency
    with Keras layers. Specifically, the previous variable names "weights" and
    "biases" are changed to "kernel" and "bias", respectively.
*   Changed MIN_SDK version to 8.0 when building iOS libraries.
*   Fixed LIBXSMM integration.
*   Make decode_jpeg/decode_png/decode_gif handle all formats, since users
    frequently try to decode an image as the wrong type.
*   Improve implicit broadcasting lowering.
*   Improving stability of GCS/BigQuery clients by a faster retrying of stale
    transmissions.
*   Remove OpKernelConstruction::op_def() as part of minimizing proto
    dependencies.
*   VectorLaplaceDiag distribution added.
*   Android demo no longer requires libtensorflow_demo.so to run
    (libtensorflow_inference.so still required)
*   Added `categorical_column_with_vocabulary_file`.
*   Introduce ops for batching/unbatching tensors across Session::Run() calls.
*   Add tf.log_sigmoid(x) = tf.log(tf.sigmoid(x)) = -tf.nn.softplus(-x).
*   Changed hooks lists to immutable tuples, and now allow any iterable for the
    associated arguments.
*   Introduce TFDecorator.
*   Added an Mfcc op for speech feature generation.
*   Improved DirectSession::Run() overhead and error checking. Feeding a value
    of the wrong type will now synchronously raise an INVALID_ARGUMENT error
    instead of asynchronously raising an INTERNAL error. Code that depends on
    the (undefined) behavior when feeding a tensor of the wrong type may need to
    be updated.
*   Added unreduced NONE, and reduced MEAN options for losses. Removed
    "WEIGHTED_" prefix from other Reduction constants.
*   assertAllClose now handles dicts.
*   Added Gmock matcher for HloInstructions.
*   Add var name to errors on variable restore.
*   Added an AudioSpectrogram op for audio feature generation.
*   Added `reduction` arg to losses.
*   `tf.placeholder` can represent scalar shapes and partially known.
*   Remove estimator_spec(mode) argument.
*   Added an AudioSpectrogram op for audio feature generation.
*   TensorBoard disables all runs by default if there are more than 40 runs.
*   Removed old doc generator code.
*   GCS file system integration now supports domain buckets, e.g
    gs://bucket.domain.com/path.
*   Add `tf.summary.text` for outputting text to TensorBoard.
*   The "run" command of tfdbg's command-line interface now supports filtering
    of tensors by node name, op type and tensor dtype.
*   `tf.string_to_number` now supports int64 and float64 outputs.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

4F2E4A2E, Aaron Schumacher, Abhi Agg, admcrae, Adriano Carmezim, Adrià Arrufat,
agramesh1, Akimitsu Seo, Alan Mosca, Alex Egg, Alex Rothberg, Alexander
Heinecke, Alexander Matyasko, Alexandr Baranezky, Alexandre Caulier, Ali
Siddiqui, Anand Venkat, Andrew Hundt, Androbin, Anmol Sharma, Arie, Arno Leist,
Arron Cao, AuréLien Geron, Bairen Yi, Beomsu Kim, Carl Thomé, cfperez, Changming
Sun, Corey Wharton, critiqjo, Dalei Li, Daniel Rasmussen, Daniel Trebbien, DaríO
Hereñú, David Eng, David Norman, David Y. Zhang, Davy Song, ddurham2, Deepak
Subburam, Dmytro Kyrychuk, Dominic Rossi, Dominik SchlöSser, Dustin Tran,
Eduardo Pinho, Egil Martinsson, Elliot Saba, Eric Bigelow, Erik Smistad, Evan
Klitzke, Fabrizio Milo, Falcon Dai, Fei Gao, FloopCZ, Fung Lam, Gautam,
GBLin5566, Greg Peatfield, Gu Wang, Guenther Schmuelling, Hans Pabst, Harun
Gunaydin, Huaizheng, Ido Shamay, Ikaro Silva, Ilya Edrenkin, Immexxx, James
Mishra, Jamie Cooke, Jay Young, Jayaram Bobba, Jianfei Wang, jinghua2, Joey
Meyer, John Maidens, Jonghoon Jin, Julian Villella, Jun Kim, Jun Shi, Junwei
Pan, jyegerlehner, Karan Desai, Karel Van De Plassche, Kb Sriram,
KhabarlakKonstantin, Koan-Sin Tan, krivard, Kwotsin, Leandro Gracia Gil, Li
Chen, Liangliang He, Louie Helm, lspvic, Luiz Henrique Soares, LáSzló Csomor,
Mark Wong, Mathew Wicks, Matthew Rahtz, Maxwell Paul Brickner, Michael Hofmann,
Miguel Flores Ruiz De Eguino, MikeTam1021, Mortada Mehyar, Mycosynth, Namnamseo,
Nate Harada, Neven Miculinic, Nghia Tran, Nick Lyu, Niranjan Hasabnis, Nishidha,
Oleksii Kuchaiev, Oyesh Mann Singh, Panmari, Patrick, Paul Van Eck, Piyush
Chaudhary, Quim Llimona, Raingo, Richard Davies, Ruben Vereecken, Sahit
Chintalapudi, Sam Abrahams, Santiago Castro, Scott Sievert, Sean O'Keefe,
Sebastian Schlecht, Shane, Shubhankar Deshpande, Spencer Schaber, Sunyeop Lee,
t13m, td2014, Thomas H. P. Andersen, Toby Petty, Umang Mehta, Vadim Markovtsev,
Valentin Iovene, Vincent Zhao, Vit Stepanovs, Vivek Rane, Vu Pham,
wannabesrevenge, weipingpku, wuhaixutab, wydwww, Xiang Gao, Xiaolin Lin,
xiaoyaozhuzi, Yaroslav Bulatov, Yi Liu, Yoshihiro Sugi, Yuan (Terry) Tang,
Yuming Wang, Yuxin Wu, Zader Zheng, Zhaojun Zhang, zhengjiajin, ZhipengShen,
Ziming Dong, zjj2wry

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 1.1.0

## Major Features and Improvements

*   Added Java API support for Windows.
*   Added `tf.spectral` module. Moved existing FFT ops to `tf.spectral` while
    keeping an alias in the old location (`tf.*`).
*   Added 1D, 2D and 3D Fourier transform ops for real signals to `tf.spectral`.
*   Added a `tf.bincount` function.
*   Added Keras 2 API to contrib.
*   Added a new lightweight queue-like object - `RecordInput`.
*   Added `tf.contrib.image.compose_transforms` function.
*   Bring `tf.estimator.*` into the API. Non-deprecated functionality from
    `tf.contrib.learn.Estimator` is moved to `tf.estimator.Estimator` with
    cosmetic changes.
*   Docker images: TF images on gcr.io and Docker Hub are upgraded to
    ubuntu:16.04.
*   Added the following features to TensorFlow Debugger (tfdbg):
    *   Ability to inspect Python source file against TF ops and tensors
        (command `print_source` / `ps`)
    *   New navigation bar in Curses-based UI
    *   NodeStepper (command `invoke_stepper`) now uses intermediate tensor
        dumps. It also uses `TensorHandles` as direct feeds during successive
        `cont` calls for improved performance and reduced memory consumption.
*   Initial release of installation guides for Java, C, and Go.
*   Added Text Dashboard to TensorBoard.

## Deprecations

*   TensorFlow 1.1.0 will be the last time we release a binary with Mac GPU
    support. Going forward, we will stop testing on Mac GPU systems. We continue
    to welcome patches that maintain Mac GPU support, and we will try to keep
    the Mac GPU build working.

## Changes to contrib APIs

*   The behavior of RNNCells is now stricter due to the transition towards
    making RNNCells act more like Keras layers.
    *   If an RNNCell is used twice in two different variable scopes, an error
        is raised describing how to avoid this behavior.
    *   If an RNNCell is used in a variable scope with existing conflicting
        variables, an error is raised showing that the RNNCell must be
        constructed with argument `reuse=True`.
*   Deprecated contrib/distributions `pmf`, `pdf`, `log_pmf`, `log_pdf`.
*   Moved `bayesflow.special_math` to distributions.
*   `tf.contrib.tensor_forest.python.tensor_forest.RandomForestDeviceAssigner`
    removed.
*   Changed some MVN classes and parameters:
    *   `tf.contrib.distributions.MultivariateNormalFull` replaced by
        `tf.contrib.distributions.MultivariateNormalTriL`.
    *   `tf.contrib.distributions.MultivariateNormalCholesky` replaced by
        `tf.contrib.distributions.MultivariateNormalTriL`
    *   `tf.contrib.distributions.MultivariateNormalDiagWithSoftplusStDev`
        replaced by
        `tf.contrib.distributions.MultivariateNormalDiagWithSoftplusScale`
    *   `tf.contrib.distributions.MultivariateNormalDiag` arguments changed from
        `mu`, `diag_stddev` to `log`, `scale_diag`.
    *   `tf.contrib.distributions.MultivariateNormalDiagPlusVDVT` removed.
    *   `tf.contrib.distributions.MultivariateNormalDiagPlusLowRank` added.

## Bug Fixes and Other Changes

*   Java: Support for loading models exported using the SavedModel API (courtesy
    @EronWright).
*   Go: Added support for incremental graph execution.
*   Fix a bug in the WALS solver when single-threaded.
*   Added support for integer sparse feature values in
    `tf.contrib.layers.sparse_column_with_keys`.
*   Fixed `tf.set_random_seed(0)` to be deterministic for all ops.
*   Stability improvements for the GCS file system support.
*   Improved TensorForest performance.
*   Added support for multiple filename globs in `tf.matching_files`.
*   `LogMessage` now includes a timestamp as beginning of a message.
*   Added MultiBox person detector example standalone binary.
*   Android demo: Makefile build functionality added to build.gradle to fully
    support building TensorFlow demo in Android on Windows.
*   Android demo: read MultiBox priors from txt file rather than protobuf.
*   Added colocation constraints to `StagingArea`.
*   `sparse_matmul_op` reenabled for Android builds.
*   Restrict weights rank to be the same as the broadcast target, to avoid
    ambiguity on broadcast rules.
*   Upgraded libxsmm to 1.7.1 and applied other changes for performance and
    memory usage.
*   Fixed bfloat16 integration of LIBXSMM sparse mat-mul.
*   Improved performance and reduce memory usage by allowing ops to forward
    input buffers to output buffers and perform computations in-place.
*   Improved the performance of CPU assignment for strings.
*   Speed up matrix * vector multiplication and matrix * matrix with unknown
    shapes.
*   C API: Graph imports now support input remapping, control dependencies, and
    returning imported nodes (see `TF_GraphImportGraphDefWithReturnOutputs()`)
*   Multiple C++ API updates.
*   Multiple TensorBoard updates including:
    *   Users can now view image summaries at various sampled steps (instead of
        just the last step).
    *   Bugs involving switching runs as well as the image dashboard are fixed.
    *   Removed data download links from TensorBoard.
    *   TensorBoard uses a relative data directory, for easier embedding.
    *   TensorBoard automatically ignores outliers for domain calculation, and
        formats proportional values consistently.
*   Multiple tfdbg bug fixes:
    *   Fixed Windows compatibility issues.
    *   Command history now persists across runs.
    *   Bug fix in graph validation related to `tf.while_loops`.
*   Java Maven fixes for bugs with Windows installation.
*   Backport fixes and improvements from external keras.
*   Keras config file handling fix.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

A. Besir Kurtulmus, Adal Chiriliuc, @akash, Alec-Desouza, Alex Rothberg, Alex
Sergeev, Alexander Heinecke, Allen Guo, Andreas Madsen, Ankesh Anand, Anton
Loss, @Aravind, @Arie, Ashutosh Das, AuréLien Geron, Bairen Yi, @bakunyo, Ben
Visser, Brady Zhou, Calpa Liu, Changming Sun, Chih Cheng Liang, Christopher
Berner, Clark Zinzow, @Conchylicultor, Dan Ellis, Dan J, Dan Jarvis, Daniel
Ylitalo, Darren Garvey, David Norman, David Truong, @DavidNorman, Dimitar
Pavlov, Dmitry Persiyanov, @Eddie, @elirex, Erfan Noury, Eron Wright, Evgeny
Mazovetskiy, Fabrizio (Misto) Milo, @fanlu, Fisher Coder, Florian Courtial,
Franck Dernoncourt, Gagan Goel, Gao, Xiang, @Gautam, Gefu Tang, @guilherme,
@guschmue, Hannah Provenza, Hans Pabst, @hartb, Hsiao Yi, Huazuo Gao, Igor
ChorążEwicz, Ivan Smirnov, Jakub Kolodziejczyk, Jason Gavris, Jason Morton, Jay
Young, Jayaram Bobba, Jeremy Sawruk, Jiaming Liu, Jihun Choi, @jiqiu, Joan
Thibault, John C F, Jojy George Varghese, Jon Malmaud, Julian Berman, Julian
Niedermeier, Junpeng Lao, Kai Sasaki, @Kankroc, Karl Lessard, Kyle Bostelmann,
@Lezcano, Li Yi, Luo Yun, @lurker, Mahmoud-Abuzaina, Mandeep Singh, Marek
Kolodziej, Mark Szepieniec, Martial Hue, Medhat Omr, Memo Akten, Michael Gharbi,
MichaëL Defferrard, Milan Straka, @MircoT, @mlucool, Muammar Ibn Faisal, Nayana
Thorat, @nghiattran, Nicholas Connor, Nikolaas Steenbergen, Niraj Patel,
Niranjan Hasabnis, @Panmari, Pavel Bulanov, Philip Pries Henningsen, Philipp
Jund, @polonez, Prayag Verma, Rahul Kavi, Raphael Gontijo Lopes, @rasbt, Raven
Iqqe, Reid Pryzant, Richard Shin, Rizwan Asif, Russell Kaplan, Ryo Asakura,
RüDiger Busche, Saisai Shao, Sam Abrahams, @sanosay, Sean Papay, @seaotterman,
@selay01, Shaurya Sharma, Sriram Narayanamoorthy, Stefano Probst, @taknevski,
@tbonza, @teldridge11, Tim Anglade, Tomas Reimers, Tomer Gafner, Valentin
Iovene, Vamsi Sripathi, Viktor Malyi, Vit Stepanovs, Vivek Rane, Vlad Firoiu,
@wangg12, @will, Xiaoyu Tao, Yaroslav Bulatov, Yi Liu, Yuan (Terry) Tang,
@Yufeng, Yuming Wang, Yuxin Wu, Zafar Takhirov, Ziming Dong

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 1.0.1

## Bug Fixes and Other Changes

*   Change GraphConstructor to not increase the version when importing, but
    instead take the min of all versions.
*   Google Cloud Storage fixes.
*   Removed `tf.core` and `tf.python` modules from the API. These were never
    intended to be exposed. Please use the same objects through top-level `tf`
    module instead.

# Release 1.0.0

## Major Features and Improvements

*   XLA (experimental): initial release of
    [XLA](https://www.tensorflow.org/versions/master/experimental/xla/), a
    domain-specific compiler for TensorFlow graphs, that targets CPUs and GPUs.
*   TensorFlow Debugger (tfdbg): command-line interface and API.
*   New python 3 docker images added.
*   Made pip packages pypi compliant. TensorFlow can now be installed by `pip
    install tensorflow` command.
*   Several python API calls have been changed to resemble NumPy more closely.
*   Android: person detection + tracking demo implementing Scalable Object
    Detection using Deep Neural Networks.
*   New (experimental)
    [Java API](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/java).
*   Add new Android image stylization demo based on "A Learned Representation
    For Artistic Style", and add YOLO object detector support.

## Breaking Changes to the API

To help you upgrade your existing TensorFlow Python code to match the API
changes below, we have prepared a
[conversion script](https://github.com/tensorflow/tensorflow/tree/master/tensorflow/tools/compatibility).
* TensorFlow/models have been moved to a separate github repository. * Division
and modulus operators (/, //, %) now match Python (flooring) semantics. This
applies to `tf.div` and `tf.mod` as well. To obtain forced integer truncation
based behaviors you can use `tf.truncatediv` and `tf.truncatemod`. *
`tf.divide()` is now the recommended division function. `tf.div()` will remain,
but its semantics do not respond to Python 3 or `from future` mechanisms. *
tf.reverse() now takes indices of axes to be reversed. E.g. `tf.reverse(a,
[True, False, True])` must now be written as `tf.reverse(a, [0, 2])`.
`tf.reverse_v2()` will remain until 1.0 final. * `tf.mul`, `tf.sub` and `tf.neg`
are deprecated in favor of `tf.multiply`, `tf.subtract` and `tf.negative`. *
`tf.pack` and `tf.unpack` are deprecated in favor of `tf.stack` and
`tf.unstack`. * `TensorArray.pack` and `TensorArray.unpack` are getting
deprecated in favor of `TensorArray.stack` and `TensorArray.unstack`. * The
following Python functions have had their arguments changed to use `axis` when
referring to specific dimensions. We have kept the old keyword arguments for
compatibility currently, but we will be removing them well before the final 1.0.
* `tf.argmax`: `dimension` becomes `axis` * `tf.argmin`: `dimension` becomes
`axis` * `tf.count_nonzero`: `reduction_indices` becomes `axis` *
`tf.expand_dims`: `dim` becomes `axis` * `tf.reduce_all`: `reduction_indices`
becomes `axis` * `tf.reduce_any`: `reduction_indices` becomes `axis` *
`tf.reduce_join`: `reduction_indices` becomes `axis` * `tf.reduce_logsumexp`:
`reduction_indices` becomes `axis` * `tf.reduce_max`: `reduction_indices`
becomes `axis` * `tf.reduce_mean`: `reduction_indices` becomes `axis` *
`tf.reduce_min`: `reduction_indices` becomes `axis` * `tf.reduce_prod`:
`reduction_indices` becomes `axis` * `tf.reduce_sum`: `reduction_indices`
becomes `axis` * `tf.reverse_sequence`: `batch_dim` becomes `batch_axis`,
`seq_dim` becomes `seq_axis` * `tf.sparse_concat`: `concat_dim` becomes `axis` *
`tf.sparse_reduce_sum`: `reduction_axes` becomes `axis` *
`tf.sparse_reduce_sum_sparse`: `reduction_axes` becomes `axis` *
`tf.sparse_split`: `split_dim` becomes `axis` * `tf.listdiff` has been renamed
to `tf.setdiff1d` to match NumPy naming. * `tf.inv` has been renamed to be
`tf.reciprocal` (component-wise reciprocal) to avoid confusion with `np.inv`
which is matrix inversion * tf.round now uses banker's rounding (round to even)
semantics to match NumPy. * `tf.split` now takes arguments in a reversed order
and with different keywords. In particular, we now match NumPy order as
`tf.split(value, num_or_size_splits, axis)`. * `tf.sparse_split` now takes
arguments in reversed order and with different keywords. In particular we now
match NumPy order as `tf.sparse_split(sp_input, num_split, axis)`. NOTE: we have
temporarily made `tf.sparse_split` require keyword arguments. * `tf.concat` now
takes arguments in reversed order and with different keywords. In particular we
now match NumPy order as `tf.concat(values, axis, name)`. *
`tf.image.decode_jpeg` by default uses the faster DCT method, sacrificing a
little fidelity for improved speed. One can revert to the old behavior by
specifying the attribute `dct_method='INTEGER_ACCURATE'`. * `tf.complex_abs` has
been removed from the Python interface. `tf.abs` supports complex tensors and
should be used instead. * In the C++ API (in tensorflow/cc), Input, Output, etc.
have moved from the tensorflow::ops namespace to tensorflow. *
Template.`var_scope` property renamed to `.variable_scope` *
SyncReplicasOptimizer is removed and SyncReplicasOptimizerV2 renamed to
SyncReplicasOptimizer. * `tf.zeros_initializer()` and `tf.ones_initializer()`
now return a callable that must be called with initializer arguments, in your
code replace `tf.zeros_initializer` with `tf.zeros_initializer()`. *
`SparseTensor.shape` has been renamed to `SparseTensor.dense_shape`. Same for
`SparseTensorValue.shape`. * Replace tf.scalar_summary, tf.histogram_summary,
tf.audio_summary, tf.image_summary with tf.summary.scalar, tf.summary.histogram,
tf.summary.audio, tf.summary.image, respectively. The new summary ops take name
rather than tag as their first argument, meaning summary ops now respect
TensorFlow name scopes. * Replace tf.train.SummaryWriter and
tf.train.SummaryWriterCache with tf.summary.FileWriter and
tf.summary.FileWriterCache. * Removes RegisterShape from public API. Use C++
shape function registration instead. * Deprecated `_ref` dtypes from the python
API. * In the C++ API (in tensorflow/cc), Input, Output, etc. have moved from
the tensorflow::ops namespace to tensorflow. * Change arg order for
`{softmax,sparse_softmax,sigmoid}_cross_entropy_with_logits` to be (labels,
predictions), and force use of named args. * tf.nn.rnn_cell.* and most functions
in tf.nn.rnn.* (with the exception of dynamic_rnn and raw_rnn) are temporarily
in tf.contrib.rnn. They will be moved back into core for TF 1.2. *
`tf.nn.sampled_softmax_loss` and `tf.nn.nce_loss` have both changed their API
such that you need to switch the `inputs, labels` to `labels, inputs`
parameters. * The shape keyword argument of the `SparseTensor` constructor
changes its name to `dense_shape` between Tensorflow 0.12 and Tensorflow 1.0.

## Bug Fixes and Other Changes

*   Numerous C++ API updates.
*   New op: `parallel_stack`.
*   Introducing common tf io compression options constants for
    RecordReader/RecordWriter.
*   Add `sparse_column_with_vocabulary_file`, to specify a feature column that
    transform string features to IDs, where the mapping is defined by a
    vocabulary file.
*   Added `index_to_string_table` which returns a lookup table that maps indices
    to strings.
*   Add `string_to_index_table`, which returns a lookup table that matches
    strings to indices.
*   Add a `ParallelForWithWorkerId` function.
*   Add `string_to_index_table`, which returns a lookup table that matches
    strings to indices.
*   Support restore session from checkpoint files in v2 in
    `contrib/session_bundle`.
*   Added a tf.contrib.image.rotate function for arbitrary angles.
*   Added `tf.contrib.framework.filter_variables` as a convenience function to
    filter lists of variables based on regular expressions.
*   `make_template()` takes an optional `custom_getter_ param`.
*   Added comment about how existing directories are handled by
    `recursive_create_dir`.
*   Added an op for QR factorizations.
*   Divides and mods in Python API now use flooring (Python) semantics.
*   Android: pre-built libs are now built nightly.
*   Android: cmake/gradle build for TensorFlow Inference library under
    `contrib/android/cmake`
*   Android: Much more robust Session initialization code.
*   Android: TF stats now exposed directly in demo and log when debug mode is
    active
*   Android: new/better README.md documentation
*   saved_model is available as `tf.saved_model`.
*   Empty op is now stateful.
*   Improve speed of scatter_update on the cpu for ASSIGN operations.
*   Change `reduce_join` to treat `reduction_indices` in the same way as other
    `reduce_` ops.
*   Move `TensorForestEstimator` to `contrib/tensor_forest`.
*   Enable compiler optimizations by default and allow configuration in
    configure.
*   `tf.divide` now honors the name field.
*   Make metrics weight broadcasting more strict.
*   Add new queue-like `StagingArea` and new ops: `stage` and `unstage`.
*   Enable inplace update ops for strings on CPU. Speed up string concat.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aaron Hu, Abhishek Aggarwal, Adam Michael, Adriano Carmezim, @AfirSraftGarrier,
Alexander Novikov, Alexander Rosenberg Johansen, Andrew Gibiansky, Andrew Hundt,
Anish Shah, Anton Loss, @b0noI, @BoyuanJiang, Carl Thomé, Chad Kennedy, Comic
Chang, Connor Braa, Daniel N. Lang, Daniel Trebbien, @danielgordon10, Darcy Liu,
Darren Garvey, Dmitri Lapin, Eron Wright, Evan Cofer, Fabrizio Milo, Finbarr
Timbers, Franck Dernoncourt, Garrett Smith, @guschmue, Hao Wei, Henrik Holst,
Huazuo Gao, @Ian, @Issac, Jacob Israel, Jangsoo Park, Jin Kim, Jingtian Peng,
John Pope, Kye Bostelmann, Liangliang He, Ling Zhang, Luheng He, Luke Iwanski,
@lvli, Michael Basilyan, Mihir Patel, Mikalai Drabovich, Morten Just, @newge,
Nick Butlin, Nishant Shukla, Pengfei Ni, Przemyslaw Tredak, @rasbt, @Ronny,
Rudolf Rosa, @RustingSword, Sam Abrahams, Sam Putnam, @SeongAhJo, Shi Jiaxin,
@skavulya, Steffen MüLler, @TheUSER123, @tiriplicamihai, @vhasanov, Victor
Costan, Vit Stepanovs, Wangda Tan, Wenjian Huang, Xingdong Zuo, Yaroslav
Bulatov, Yota Toyama, Yuan (Terry) Tang, Yuxin Wu

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.12.0

## Major Features and Improvements

*   TensorFlow now builds and runs on Microsoft Windows (tested on Windows 10,
    Windows 7, and Windows Server 2016). Supported languages include Python (via
    a pip package) and C++. CUDA 8.0 and cuDNN 5.1 are supported for GPU
    acceleration. Known limitations include: It is not currently possible to
    load a custom op library. The GCS and HDFS file systems are not currently
    supported. The following ops are not currently implemented: Dequantize,
    QuantizeAndDequantize, QuantizedAvgPool,
    QuantizedBatchNomWithGlobalNormalization, QuantizedBiasAdd, QuantizedConcat,
    QuantizedConv2D, QuantizedMatmul, QuantizedMaxPool,
    QuantizeDownAndShrinkRange, QuantizedRelu, QuantizedRelu6, QuantizedReshape,
    QuantizeV2, RequantizationRange, and Requantize.
*   Go: Experimental API in Go to create and execute graphs
    (https://godoc.org/github.com/tensorflow/tensorflow/tensorflow/go)
*   New checkpoint format becomes the default in `tf.train.Saver`. Old V1
    checkpoints continue to be readable; controlled by the `write_version`
    argument, `tf.train.Saver` now by default writes out in the new V2 format.
    It significantly reduces the peak memory required and latency incurred
    during restore.
*   Added a new library for library of matrix-free (iterative) solvers for
    linear equations, linear least-squares, eigenvalues and singular values in
    tensorflow/contrib/solvers. Initial version has lanczos bidiagonalization,
    conjugate gradients and CGLS.
*   Added gradients for `matrix_solve_ls` and `self_adjoint_eig`.
*   Large cleanup to add second order gradient for ops with C++ gradients and
    improve existing gradients such that most ops can now be differentiated
    multiple times.
*   Added a solver for ordinary differential equations,
    `tf.contrib.integrate.odeint`.
*   New contrib module for tensors with named axes, `tf.contrib.labeled_tensor`.
*   Visualization of embeddings in TensorBoard.

## Breaking Changes to the API

*   `BusAdjacency` enum replaced with a protocol buffer `DeviceLocality`. PCI
    bus indexing now starts from 1 instead of 0, and `bus_id==0` is used where
    previously `BUS_ANY` was used.
*   `Env::FileExists` and `FileSystem::FileExists` now return a
    tensorflow::Status instead of a bool. Any callers to this function can be
    converted to a bool by adding .ok() to the call.
*   The C API type `TF_SessionWithGraph` has been renamed to `TF_Session`,
    indicating its preferred use in language bindings for TensorFlow. What was
    previously `TF_Session` has been renamed to `TF_DeprecatedSession`.
*   Renamed `TF_Port` to `TF_Output` in the C API.
*   Removes RegisterShape from public API. Use C++ shape function registration
    instead. indexing now starts from 1 instead of 0, and `bus_id==0` is used
    where previously `BUS_ANY` was used.
*   Most RNN cells and RNN functions now use different variable scopes to be
    consistent with layers (`tf.contrib.layers`). This means old checkpoints
    written using this code will not load after this change without providing
    `Saver` a list of variable renames. Examples of variable scope changes
    include `RNN` -> `rnn` in `tf.nn.rnn`, `tf.nn.dynamic_rnn` and moving from
    `Linear/Matrix` -> `weights` and `Linear/Bias` -> `biases` in most RNN
    cells.
*   Deprecated tf.select op. tf.where should be used instead.
*   `SparseTensor.shape` has been renamed to `SparseTensor.dense_shape`. Same
    for `SparseTensorValue.shape`.
*   `Env::FileExists` and `FileSystem::FileExists` now return a
    `tensorflow::Status` instead of a bool. Any callers to this function can be
    converted to a bool by adding `.ok()` to the call.
*   C API: Type `TF_SessionWithGraph` has been renamed to `TF_Session`,
    indicating its preferred use in language bindings for TensorFlow. What was
    previously `TF_Session` has been renamed to `TF_DeprecatedSession`.
*   C API: Renamed `TF_Port` to `TF_Output`.
*   C API: The caller retains ownership of `TF_Tensor` objects provided to
    `TF_Run`, `TF_SessionRun`, `TF_SetAttrTensor` etc.
*   Renamed `tf.image.per_image_whitening()` to
    `tf.image.per_image_standardization()`
*   Move Summary protobuf constructors to `tf.summary` submodule.
*   Deprecate `histogram_summary`, `audio_summary`, `scalar_summary`,
    `image_summary`, `merge_summary`, and `merge_all_summaries`.
*   Combined `batch_*` and regular version of linear algebra and FFT ops. The
    regular op now handles batches as well. All `batch_*` Python interfaces were
    removed.
*   `tf.all_variables`, `tf.VARIABLES` and `tf.initialize_all_variables` renamed
    to `tf.global_variables`, `tf.GLOBAL_VARIABLES` and
    `tf.global_variables_initializer` respectively.
*   `tf.zeros_initializer()` and `tf.ones_initializer()` now return a callable
    that must be called with initializer arguments, in your code replace
    `tf.zeros_initializer` with `tf.zeros_initializer()`

## Bug Fixes and Other Changes

*   Use threadsafe version of `lgamma` function.
*   Fix `tf.sqrt` handling of negative arguments.
*   Fixed bug causing incorrect number of threads to be used for multi-threaded
    benchmarks.
*   Performance optimizations for `batch_matmul` on multi-core CPUs.
*   Improve trace, `matrix_set_diag`, `matrix_diag_part` and their gradients to
    work for rectangular matrices.
*   Support for SVD of complex valued matrices.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

@a7744hsc, Abhi Agg, @admcrae, Adriano Carmezim, Aki Sukegawa, Alex Kendall,
Alexander Rosenberg Johansen, @amcrae, Amlan Kar, Andre Simpelo, Andreas Eberle,
Andrew Hundt, Arnaud Lenglet, @b0noI, Balachander Ramachandran, Ben Barsdell,
Ben Guidarelli, Benjamin Mularczyk, Burness Duan, @c0g, Changming Sun, @chanis,
Corey Wharton, Dan J, Daniel Trebbien, Darren Garvey, David Brailovsky, David
Jones, Di Zeng, @DjangoPeng, Dr. Kashif Rasul, @drag0, Fabrizio (Misto) Milo,
FabríCio Ceschin, @fp, @Ghedeon, @guschmue, Gökçen Eraslan, Haosdent Huang,
Haroen Viaene, Harold Cooper, Henrik Holst, @hoangmit, Ivan Ukhov, Javier
Dehesa, Jingtian Peng, Jithin Odattu, Joan Pastor, Johan Mathe, Johannes Mayer,
Jongwook Choi, Justus Schwabedal, Kai Wolf, Kamil Hryniewicz, Kamran Amini,
Karen Brems, Karl Lattimer, @kborer, Ken Shirriff, Kevin Rose, Larissa Laich,
Laurent Mazare, Leonard Lee, Liang-Chi Hsieh, Liangliang He, Luke Iwanski, Marek
Kolodziej, Moustafa Alzantot, @MrQianjinsi, @nagachika, Neil Han, Nick Meehan,
Niels Ole Salscheider, Nikhil Mishra, @nschuc, Ondrej Skopek, OndřEj Filip,
@OscarDPan, Pablo Moyano, Przemyslaw Tredak, @qitaishui, @Quarazy, @raix852,
Philipp Helo, Sam Abrahams, @SriramRamesh, Till Hoffmann, Tushar Soni, @tvn,
@tyfkda, Uwe Schmidt, Victor Villas, Vit Stepanovs, Vladislav Gubarev,
@wujingyue, Xuesong Yang, Yi Liu, Yilei Yang, @youyou3, Yuan (Terry) Tang,
Yuming Wang, Zafar Takhirov, @zhongyuk, Ziming Dong, @guotong1988

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.11.0

## Major Features and Improvements

*   CUDA 8 support.
*   cuDNN 5 support.
*   HDFS Support.
*   Adds Fused LSTM support via cuDNN 5 in `tensorflow/contrib/cudnn_rnn`.
*   Improved support for NumPy style basic slicing including non-1 strides,
    ellipses, newaxis, and negative indices. For example complicated expressions
    like `foo[1, 2:4, tf.newaxis, ..., :-3:-1, :]` are now supported. In
    addition we have preliminary (non-broadcasting) support for sliced
    assignment to variables. In particular one can write
    `var[1:3].assign([1,11,111])`.
*   Deprecated `tf.op_scope` and `tf.variable_op_scope` in favor of a unified
    `tf.name_scope` and `tf.variable_scope`. The new argument order of
    `tf.variable_scope` is incompatible with previous versions.
*   Introducing `core/util/tensor_bundle` module: a module to efficiently
    serialize/deserialize tensors to disk. Will be used in TF's new checkpoint
    format.
*   Added tf.svd for computing the singular value decomposition (SVD) of dense
    matrices or batches of matrices (CPU only).
*   Added gradients for eigenvalues and eigenvectors computed using
    `self_adjoint_eig` or `self_adjoint_eigvals`.
*   Eliminated `batch_*` methods for most linear algebra and FFT ops and
    promoted the non-batch version of the ops to handle batches of matrices.
*   Tracing/timeline support for distributed runtime (no GPU profiler yet).
*   C API gives access to inferred shapes with `TF_GraphGetTensorNumDims` and
    `TF_GraphGetTensorShape`.
*   Shape functions for core ops have moved to C++ via
    `REGISTER_OP(...).SetShapeFn(...)`. Python shape inference RegisterShape
    calls use the C++ shape functions with `common_shapes.call_cpp_shape_fn`. A
    future release will remove `RegisterShape` from python.

## Bug Fixes and Other Changes

*   Documentation now includes operator overloads on Tensor and Variable.
*   `tensorflow.__git_version__` now allows users to identify the version of the
    code that TensorFlow was compiled with. We also have
    `tensorflow.__git_compiler__` which identifies the compiler used to compile
    TensorFlow's core.
*   Improved multi-threaded performance of `batch_matmul`.
*   LSTMCell, BasicLSTMCell, and MultiRNNCell constructors now default to
    `state_is_tuple=True`. For a quick fix while transitioning to the new
    default, simply pass the argument `state_is_tuple=False`.
*   DeviceFactory's AddDevices and CreateDevices functions now return a Status
    instead of void.
*   Int32 elements of list(type) arguments are no longer placed in host memory
    by default. If necessary, a list(type) argument to a kernel can be placed in
    host memory using a HostMemory annotation.
*   `uniform_unit_scaling_initializer()` no longer takes a `full_shape` arg,
    instead relying on the partition info passed to the initializer function
    when it's called.
*   The NodeDef protocol message is now defined in its own file `node_def.proto`
    `instead of graph.proto`.
*   `ops.NoGradient` was renamed `ops.NotDifferentiable`. `ops.NoGradient` will
    be removed soon.
*   `dot.h` / DotGraph was removed (it was an early analysis tool prior to
    TensorBoard, no longer that useful). It remains in history should someone
    find the code useful.
*   re2 / regexp.h was removed from being a public interface of TF. Should users
    need regular expressions, they should depend on the RE2 library directly
    rather than via TensorFlow.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abid K, @afshinrahimi, @AidanGG, Ajay Rao, Aki Sukegawa, Alex Rothberg,
Alexander Rosenberg Johansen, Andrew Gibiansky, Andrew Thomas, @Appleholic,
Bastiaan Quast, Ben Dilday, Bofu Chen, Brandon Amos, Bryon Gloden, Cissp®,
@chanis, Chenyang Liu, Corey Wharton, Daeyun Shin, Daniel Julius Lasiman, Daniel
Waterworth, Danijar Hafner, Darren Garvey, Denis Gorbachev, @DjangoPeng,
Egor-Krivov, Elia Palme, Eric Platon, Fabrizio Milo, Gaetan Semet, Georg
Nebehay, Gu Wang, Gustav Larsson, @haosdent, Harold Cooper, Hw-Zz, @ichuang,
Igor Babuschkin, Igor Macedo Quintanilha, Ilya Edrenkin, @ironhead, Jakub
Kolodziejczyk, Jennifer Guo, Jihun Choi, Jonas Rauber, Josh Bleecher Snyder,
@jpangburn, Jules Gagnon-Marchand, Karen Brems, @kborer, Kirill Bobyrev, Laurent
Mazare, Longqi Yang, Malith Yapa, Maniteja Nandana, Martin Englund, Matthias
Winkelmann, @mecab, Mu-Ik Jeon, Nand Dalal, Niels Ole Salscheider, Nikhil
Mishra, Park Jiin, Pieter De Rijk, @raix852, Ritwik Gupta, Sahil Sharma,
Sangheum Hwang, @SergejsRk, Shinichiro Hamaji, Simon Denel, @Steve,
@suiyuan2009, Tiago Jorge, Tijmen Tieleman, @tvn, @tyfkda, Wang Yang, Wei-Ting
Kuo, Wenjian Huang, Yan Chen, @YenChenLin, Yuan (Terry) Tang, Yuncheng Li,
Yunfeng Wang, Zack Polizzi, @zhongzyd, Ziming Dong, @perhapszzy

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.10.0

## Major Features and Improvements

*   Added support for C++ shape inference
*   Added graph-construction C API
*   Major revision to the graph-construction C++ API
*   Support makefile build for iOS
*   Added Mac GPU support
*   Full version of TF-Slim available as `tf.contrib.slim`
*   Added k-Means clustering and WALS matrix factorization

## Bug Fixes and Other Changes

*   Allow gradient computation for scalar values.
*   Performance improvements for gRPC
*   Improved support for fp16
*   New high-level ops in tf.contrib. {layers,metrics}
*   New features for TensorBoard, such as shape display, exponential smoothing
*   Faster and more stable Google Cloud Storage (GCS) filesystem support
*   Support for zlib compression and decompression for TFRecordReader and
    TFRecordWriter
*   Support for reading (animated) GIFs
*   Improved support for SparseTensor
*   Added support for more probability distributions (Dirichlet, Beta,
    Bernoulli, etc.)
*   Added Python interfaces to reset resource containers.
*   Many bugfixes and performance improvements
*   Many documentation fixes

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Alex Rothberg, Andrew Royer, Austin Marshall, @BlackCoal, Bob Adolf, Brian
Diesel, Charles-Emmanuel Dias, @chemelnucfin, Chris Lesniewski, Daeyun Shin,
Daniel Rodriguez, Danijar Hafner, Darcy Liu, Kristinn R. Thórisson, Daniel
Castro, Dmitry Savintsev, Kashif Rasul, Dylan Paiton, Emmanuel T. Odeke, Ernest
Grzybowski, Gavin Sherry, Gideon Dresdner, Gregory King, Harold Cooper,
@heinzbeinz, Henry Saputra, Huarong Huo, Huazuo Gao, Igor Babuschkin, Igor
Macedo Quintanilha, Ivan Ukhov, James Fysh, Jan Wilken Dörrie, Jihun Choi,
Johnny Lim, Jonathan Raiman, Justin Francis, @lilac, Li Yi, Marc Khoury, Marco
Marchesi, Max Melnick, Micael Carvalho, @mikowals, Mostafa Gazar, Nico Galoppo,
Nishant Agrawal, Petr Janda, Yuncheng Li, @raix852, Robert Rose,
@Robin-des-Bois, Rohit Girdhar, Sam Abrahams, satok16, Sergey Kishchenko, Sharkd
Tu, @shotat, Siddharth Agrawal, Simon Denel, @sono-bfio, SunYeop Lee, Thijs
Vogels, @tobegit3hub, @Undo1, Wang Yang, Wenjian Huang, Yaroslav Bulatov, Yuan
Tang, Yunfeng Wang, Ziming Dong

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.9.0

## Major Features and Improvements

*   Python 3.5 support and binaries
*   Added iOS support
*   Added support for processing on GPUs on MacOS
*   Added makefile for better cross-platform build support (C API only)
*   fp16 support and improved complex128 support for many ops
*   Higher level functionality in contrib. {layers,losses,metrics,learn}
*   More features to Tensorboard
*   Improved support for string embedding and sparse features
*   The RNN api is finally "official" (see, e.g., `tf.nn.dynamic_rnn`,
    `tf.nn.rnn`, and the classes in `tf.nn.rnn_cell`).
*   TensorBoard now has an Audio Dashboard, with associated audio summaries.

## Bug Fixes and Other Changes

*   Turned on CuDNN Autotune.
*   Added support for using third-party Python optimization algorithms
    (contrib.opt).
*   Google Cloud Storage filesystem support.
*   HDF5 support
*   Add support for 3d convolutions and pooling.
*   Update gRPC release to 0.14.
*   Eigen version upgrade.
*   Switch to eigen thread pool
*   `tf.nn.moments()` now accepts a `shift` argument. Shifting by a good
    estimate of the mean improves numerical stability. Also changes the behavior
    of the `shift` argument to `tf.nn.sufficient_statistics()`.
*   Performance improvements
*   Many bugfixes
*   Many documentation fixes
*   TensorBoard fixes: graphs with only one data point, Nan values, reload
    button and auto-reload, tooltips in scalar charts, run filtering, stable
    colors
*   Tensorboard graph visualizer now supports run metadata. Clicking on nodes
    while viewing a stats for a particular run will show runtime statistics,
    such as memory or compute usage. Unused nodes will be faded out.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Aaron Schumacher, Aidan Dang, Akihiko ITOH, Aki Sukegawa, Arbit Chen, Aziz Alto,
Danijar Hafner, Erik Erwitt, Fabrizio Milo, Felix Maximilian Möller, Henry
Saputra, Sung Kim, Igor Babuschkin, Jan Zikes, Jeremy Barnes, Jesper Steen
Møller, Johannes Mayer, Justin Harris, Kashif Rasul, Kevin Robinson, Loo Rong
Jie, Lucas Moura, Łukasz Bieniasz-Krzywiec, Mario Cho, Maxim Grechkin, Michael
Heilman, Mostafa Rahmani, Mourad Mourafiq, @ninotoshi, Orion Reblitz-Richardson,
Yuncheng Li, @raoqiyu, Robert DiPietro, Sam Abrahams, Sebastian Raschka,
Siddharth Agrawal, @snakecharmer1024, Stephen Roller, Sung Kim, SunYeop Lee,
Thijs Vogels, Till Hoffmann, Victor Melo, Ville Kallioniemi, Waleed Abdulla,
Wenjian Huang, Yaroslav Bulatov, Yeison Rodriguez, Yuan Tang, Yuxin Wu,
@zhongzyd, Ziming Dong, Zohar Jackson

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.8.0

## Major Features and Improvements

*   Added a distributed runtime using GRPC
*   Move skflow to `contrib/learn`
*   Better linear optimizer in `contrib/linear_optimizer`
*   Random forest implementation in `contrib/tensor_forest`
*   CTC loss and decoders in `contrib/ctc`
*   Basic support for `half` data type
*   Better support for loading user ops (see examples in `contrib/`)
*   Allow use of (non-blocking) Eigen threadpool with
    `TENSORFLOW_USE_EIGEN_THREADPOOL` define
*   Add an extension mechanism for adding network file system support
*   TensorBoard displays metadata stats (running time, memory usage and device
    used) and tensor shapes

## Bug Fixes and Other Changes

*   Utility for inspecting checkpoints
*   Basic tracing and timeline support
*   Allow building against cuDNN 5 (not incl. RNN/LSTM support)
*   Added instructions and binaries for ProtoBuf library with fast serialization
    and without 64MB limit
*   Added special functions
*   `bool`-strictness: Tensors have to be explicitly compared to `None`
*   Shape strictness: all fed values must have a shape that is compatible with
    the tensor they are replacing
*   Exposed `tf.while_loop` (deprecated `control_flow_ops.While`)
*   run() now takes RunOptions and RunMetadata, which enable timing stats
*   Fixed lots of potential overflow problems in op kernels
*   Various performance improvements, especially for RNNs and convolutions
*   Many bugfixes
*   Nightly builds, tutorial tests, many test improvements
*   New examples: transfer learning and deepdream ipython notebook
*   Added tutorials, many documentation fixes.

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Abhinav Upadhyay, Aggelos Avgerinos, Alan Wu, Alexander G. de G. Matthews,
Aleksandr Yahnev, @amchercashin, Andy Kitchen, Aurelien Geron, Awni Hannun,
@BanditCat, Bas Veeling, Cameron Chen, @cg31, Cheng-Lung Sung, Christopher
Bonnett, Dan Becker, Dan Van Boxel, Daniel Golden, Danijar Hafner, Danny
Goodman, Dave Decker, David Dao, David Kretch, Dongjoon Hyun, Dustin Dorroh,
@e-lin, Eurico Doirado, Erik Erwitt, Fabrizio Milo, @gaohuazuo, Iblis Lin, Igor
Babuschkin, Isaac Hodes, Isaac Turner, Iván Vallés, J Yegerlehner, Jack Zhang,
James Wexler, Jan Zikes, Jay Young, Jeff Hodges, @jmtatsch, Johnny Lim, Jonas
Meinertz Hansen, Kanit Wongsuphasawat, Kashif Rasul, Ken Shirriff, Kenneth
Mitchner, Kenta Yonekura, Konrad Magnusson, Konstantin Lopuhin, @lahwran,
@lekaha, @liyongsea, Lucas Adams, @makseq, Mandeep Singh, @manipopopo, Mark
Amery, Memo Akten, Michael Heilman, Michael Peteuil, Nathan Daly, Nicolas
Fauchereau, @ninotoshi, Olav Nymoen, @panmari, @papelita1234, Pedro Lopes,
Pranav Sailesh Mani, RJ Ryan, Rob Culliton, Robert DiPietro, @ronrest, Sam
Abrahams, Sarath Shekkizhar, Scott Graham, Sebastian Raschka, Sung Kim, Surya
Bhupatiraju, Syed Ahmed, Till Hoffmann, @timsl, @urimend, @vesnica, Vlad Frolov,
Vlad Zagorodniy, Wei-Ting Kuo, Wenjian Huang, William Dmitri Breaden Madden,
Wladimir Schmidt, Yuan Tang, Yuwen Yan, Yuxin Wu, Yuya Kusakabe, @zhongzyd,
@znah.

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.7.1

## Bug Fixes and Other Changes

*   Added gfile.Open and gfile.Copy, used by input_data.py.
*   Fixed Saver bug when MakeDirs tried to create empty directory.
*   GPU Pip wheels are built with cuda 7.5 and cudnn-v4, making them required
    for the binary releases. Lower versions of cuda/cudnn can be supported by
    installing from sources and setting the options during ./configure
*   Fix dataset encoding example for Python3 (@danijar)
*   Fix PIP installation by not packaging protobuf as part of wheel, require
    protobuf 3.0.0b2.
*   Fix Mac pip installation of numpy by requiring pip >= 1.10.1.
*   Improvements and fixes to Docker image.

# Release 0.7.0

## Major Features and Improvements

*   Allow using any installed Cuda >= 7.0 and cuDNN >= R2, and add support for
    cuDNN R4
*   Added a `contrib/` directory for unsupported or experimental features,
    including higher level `layers` module
*   Added an easy way to add and dynamically load user-defined ops
*   Built out a good suite of tests, things should break less!
*   Added `MetaGraphDef` which makes it easier to save graphs with metadata
*   Added assignments for "Deep Learning with TensorFlow" udacity course

## Bug Fixes and Other Changes

*   Added a versioning framework for `GraphDef`s to ensure compatibility
*   Enforced Python 3 compatibility
*   Internal changes now show up as sensibly separated commits
*   Open-sourced the doc generator
*   Un-fork Eigen
*   Simplified the `BUILD` files and cleaned up C++ headers
*   TensorFlow can now be used as a submodule in another bazel build
*   New ops (e.g., `*fft`, `*_matrix_solve`)
*   Support for more data types in many ops
*   Performance improvements
*   Various bugfixes
*   Documentation fixes and improvements

## Breaking Changes to the API

*   `AdjustContrast` kernel deprecated, new kernel `AdjustContrastv2` takes and
    outputs float only. `adjust_contrast` now takes all data types.
*   `adjust_brightness`'s `delta` argument is now always assumed to be in
    `[0,1]` (as is the norm for images in floating point formats), independent
    of the data type of the input image.
*   The image processing ops do not take `min` and `max` inputs any more,
    casting safety is handled by `saturate_cast`, which makes sure over- and
    underflows are handled before casting to data types with smaller ranges.
*   For C++ API users: `IsLegacyScalar` and `IsLegacyVector` are now gone from
    `TensorShapeUtils` since TensorFlow is scalar strict within Google (for
    example, the shape argument to `tf.reshape` can't be a scalar anymore). The
    open source release was already scalar strict, so outside Google `IsScalar`
    and `IsVector` are exact replacements.
*   The following files are being removed from `tensorflow/core/public/`:
    *   `env.h` -> `../platform/env.h`
    *   `status.h` -> `../lib/core/status.h`
    *   `tensor.h` -> `../framework/tensor.h`
    *   `tensor_shape.h` -> `../framework/tensor_shape.h`
    *   `partial_tensor_shape.h` -> `../framework/partial_tensor_shape.h`
    *   `tensorflow_server.h` deleted
*   For C++ API users: `TensorShape::ShortDebugString` has been renamed to
    `DebugString`, and the previous `DebugString` behavior is gone (it was
    needlessly verbose and produced a confusing empty string for scalars).
*   `GraphOptions.skip_common_subexpression_elimination` has been removed. All
    graph optimizer options are now specified via
    `GraphOptions.OptimizerOptions`.
*   `ASSERT_OK` / `EXPECT_OK` macros conflicted with external projects, so they
    were renamed `TF_ASSERT_OK`, `TF_EXPECT_OK`. The existing macros are
    currently maintained for short-term compatibility but will be removed.
*   The non-public `nn.rnn` and the various `nn.seq2seq` methods now return just
    the final state instead of the list of all states.
*   `tf.scatter_update` now no longer guarantees that lexicographically largest
    index be used for update when duplicate entries exist.
*   `tf.image.random_crop(image, [height, width])` is now `tf.random_crop(image,
    [height, width, depth])`, and `tf.random_crop` works for any rank (not just
    3-D images). The C++ `RandomCrop` op has been replaced with pure Python.
*   Renamed `tf.test.GetTempDir` and `tf.test.IsBuiltWithCuda` to
    `tf.test.get_temp_dir` and `tf.test.is_built_with_cuda` for PEP-8
    compatibility.
*   `parse_example`'s interface has changed, the old interface is accessible in
    `legacy_parse_example` (same for related functions).
*   New `Variable`s are not added to the same collection several times even if a
    list with duplicates is passed to the constructor.
*   The Python API will now properly set the `list` member of `AttrValue` in
    constructed `GraphDef` messages for empty lists. The serialization of some
    graphs will change, but the change is both forwards and backwards
    compatible. It will break tests that compare a generated `GraphDef` to a
    golden serialized `GraphDef` (which is discouraged).

## Thanks to our Contributors

This release contains contributions from many people at Google, as well as:

Akiomi Kamakura, Alex Vig, Alexander Rosenberg Johansen, Andre Cruz, Arun Ahuja,
Bart Coppens, Bernardo Pires, Carl Vondrick, Cesar Salgado, Chen Yu, Christian
Jauvin, Damien Aymeric, Dan Vanderkam, Denny Britz, Dongjoon Hyun, Eren Güven,
Erik Erwitt, Fabrizio Milo, G. Hussain Chinoy, Jim Fleming, Joao Felipe Santos,
Jonas Meinertz Hansen, Joshi Rekha, Julian Viereck, Keiji Ariyama, Kenton Lee,
Krishna Sankar, Kristina Chodorow, Linchao Zhu, Lukas Krecan, Mark Borgerding,
Mark Daoust, Moussa Taifi, Nathan Howell, Naveen Sundar Govindarajulu, Nick
Sweeting, Niklas Riekenbrauck, Olivier Grisel, Patrick Christ, Povilas
Liubauskas, Rainer Wasserfuhr, Romain Thouvenin, Sagan Bolliger, Sam Abrahams,
Taehoon Kim, Timothy J Laurent, Vlad Zavidovych, Yangqing Jia, Yi-Lin Juang,
Yuxin Wu, Zachary Lipton, Zero Chen, Alan Wu, @brchiu, @emmjaykay, @jalammar,
@Mandar-Shinde, @nsipplswezey, @ninotoshi, @panmari, @prolearner and
@rizzomichaelg.

We are also grateful to all who filed issues or helped resolve them, asked and
answered questions, and were part of inspiring discussions.

# Release 0.6.0

## Major Features and Improvements

*   Python 3.3+ support via changes to python codebase and ability to specify
    python version via ./configure.

*   Some improvements to GPU performance and memory usage:
    [convnet benchmarks](https://github.com/soumith/convnet-benchmarks/issues/66)
    roughly equivalent with native cudnn v2 performance. Improvements mostly due
    to moving to 32-bit indices, faster shuffling kernels. More improvements to
    come in later releases.

## Bug Fixes

*   Lots of fixes to documentation and tutorials, many contributed by the
    public.

*   271 closed issues on github issues.

## Backwards-Incompatible Changes

*   `tf.nn.fixed_unigram_candidate_sampler` changed its default 'distortion'
    attribute from 0.0 to 1.0. This was a bug in the original release that is
    now fixed.

*   added DeterministicRandomTestTool to migration_utils.py. This is useful when
    you are migrating from TF 1.x to TF2 and need to make sure your computation
    is still happening correctly along the way. See the
    [validating correctness migration guide](https://www.tensorflow.org/guide/migrate/validate_correctness)
    for more info.

# Release 0.5.0

Initial release of TensorFlow.

<!-- mdformat global-off(b/169948621#comment2) -->
