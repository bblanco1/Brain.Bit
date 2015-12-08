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

// Vuforia.StereoCameraConfiguration
struct StereoCameraConfiguration_t749;
// UnityEngine.Camera
struct Camera_t114;
// System.Action
struct Action_t141;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t98;
// UnityEngine.Transform
struct Transform_t30;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void Vuforia.StereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Boolean,System.Single,Vuforia.CameraDevice/CameraDeviceMode,System.Action,System.Int32)
extern "C" void StereoCameraConfiguration__ctor_m3766 (StereoCameraConfiguration_t749 * __this, Camera_t114 * ___leftCamera, Camera_t114 * ___rightCamera, bool ___autoStereoSkewing, float ___cameraOffset, int32_t ___cameraDeviceMode, Action_t141 * ___onVideoBackgroundConfigChanged, int32_t ___eyewearUserCalibrationProfileId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::Init()
extern "C" void StereoCameraConfiguration_Init_m3767 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ConfigureVideoBackground()
extern "C" void StereoCameraConfiguration_ConfigureVideoBackground_m3768 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void StereoCameraConfiguration_UpdatePlayModeParameters_m3769 (StereoCameraConfiguration_t749 * __this, WebCamAbstractBehaviour_t98 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void StereoCameraConfiguration_UpdateProjection_m3770 (StereoCameraConfiguration_t749 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.StereoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t StereoCameraConfiguration_CheckForSurfaceChanges_m3771 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void StereoCameraConfiguration_UpdateStereoDepth_m3772 (StereoCameraConfiguration_t749 * __this, Transform_t30 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::IsStereo()
extern "C" bool StereoCameraConfiguration_IsStereo_m3773 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void StereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m3774 (StereoCameraConfiguration_t749 * __this, Matrix4x4_t25  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void StereoCameraConfiguration_ResolveVideoBackgroundBehaviours_m3775 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::CameraParameterChanged()
extern "C" bool StereoCameraConfiguration_CameraParameterChanged_m3776 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C" void StereoCameraConfiguration_ExtractCameraClippingPlanes_m3777 (Object_t * __this /* static, unused */, Matrix4x4_t25  ___inverseProjMatrix, float* ___near, float* ___far, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.StereoCameraConfiguration::ExtractCameraFoV(UnityEngine.Matrix4x4)
extern "C" float StereoCameraConfiguration_ExtractCameraFoV_m3778 (Object_t * __this /* static, unused */, Matrix4x4_t25  ___inverseProjMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StereoCameraConfiguration::HomogenizedVec3(UnityEngine.Vector4)
extern "C" Vector3_t12  StereoCameraConfiguration_HomogenizedVec3_m3779 (Object_t * __this /* static, unused */, Vector4_t219  ___vec4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void StereoCameraConfiguration_SetSkewFrustum_m3780 (StereoCameraConfiguration_t749 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.StereoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t StereoCameraConfiguration_get_EyewearUserCalibrationProfileId_m3781 (StereoCameraConfiguration_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void StereoCameraConfiguration_set_EyewearUserCalibrationProfileId_m3782 (StereoCameraConfiguration_t749 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::.cctor()
extern "C" void StereoCameraConfiguration__cctor_m3783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
