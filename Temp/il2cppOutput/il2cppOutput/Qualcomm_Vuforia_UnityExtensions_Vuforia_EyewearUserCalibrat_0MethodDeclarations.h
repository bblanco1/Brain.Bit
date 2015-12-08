#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.EyewearUserCalibratorImpl
struct EyewearUserCalibratorImpl_t745;
// Vuforia.Eyewear/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t949;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Boolean Vuforia.EyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool EyewearUserCalibratorImpl_init_m3737 (EyewearUserCalibratorImpl_t745 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMinScaleHint()
extern "C" float EyewearUserCalibratorImpl_getMinScaleHint_m3738 (EyewearUserCalibratorImpl_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMaxScaleHint()
extern "C" float EyewearUserCalibratorImpl_getMaxScaleHint_m3739 (EyewearUserCalibratorImpl_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::isStereoStretched()
extern "C" bool EyewearUserCalibratorImpl_isStereoStretched_m3740 (EyewearUserCalibratorImpl_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.Eyewear/EyewearCalibrationReading[],UnityEngine.Matrix4x4)
extern "C" bool EyewearUserCalibratorImpl_getProjectionMatrix_m3741 (EyewearUserCalibratorImpl_t745 * __this, EyewearCalibrationReadingU5BU5D_t949* ___readings, Matrix4x4_t25  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearUserCalibratorImpl::.ctor()
extern "C" void EyewearUserCalibratorImpl__ctor_m3742 (EyewearUserCalibratorImpl_t745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
