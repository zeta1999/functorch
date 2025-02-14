#pragma once
#include <c10/core/DispatchKey.h>

namespace at {
namespace functorch {

#define FT_BATCHED_KEY FuncTorchBatched
#define FT_VMAP_MODE_KEY FuncTorchVmapMode
#define FT_GRAD_WRAPPER_KEY FuncTorchGradWrapper
#define FT_DYNAMIC_LAYER_FRONT_MODE_KEY FuncTorchDynamicLayerFrontMode
#define FT_DYNAMIC_LAYER_BACK_MODE_KEY FuncTorchDynamicLayerBackMode
#define FT_PYTHON_KEY FuncTorchPython

constexpr auto kBatchedKey = c10::DispatchKey::FT_BATCHED_KEY;
constexpr auto kVmapModeKey = c10::DispatchKey::FT_VMAP_MODE_KEY;
constexpr auto kGradWrapperKey = c10::DispatchKey::FT_GRAD_WRAPPER_KEY;
constexpr auto kDynamicLayerFrontModeKey = c10::DispatchKey::FT_DYNAMIC_LAYER_FRONT_MODE_KEY;
constexpr auto kDynamicLayerBackModeKey = c10::DispatchKey::FT_DYNAMIC_LAYER_BACK_MODE_KEY;
constexpr auto kPythonKey = c10::DispatchKey::FT_PYTHON_KEY;

}} // namespace at::functorch
