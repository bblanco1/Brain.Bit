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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t846;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t851;
// UnityEngine.Transform
struct Transform_t30;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t904;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__11.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaManagerImpl_set_WorldCenterMode_m4252 (VuforiaManagerImpl_t846 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C" int32_t VuforiaManagerImpl_get_WorldCenterMode_m4253 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void VuforiaManagerImpl_set_WorldCenter_m4254 (VuforiaManagerImpl_t846 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C" Object_t * VuforiaManagerImpl_get_WorldCenter_m4255 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ARCameraTransform_m4256 (VuforiaManagerImpl_t846 * __this, Transform_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C" Transform_t30 * VuforiaManagerImpl_get_ARCameraTransform_m4257 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_CentralAnchorPoint_m4258 (VuforiaManagerImpl_t846 * __this, Transform_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C" Transform_t30 * VuforiaManagerImpl_get_CentralAnchorPoint_m4259 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ParentAnchorPoint_m4260 (VuforiaManagerImpl_t846 * __this, Transform_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C" Transform_t30 * VuforiaManagerImpl_get_ParentAnchorPoint_m4261 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C" bool VuforiaManagerImpl_get_Initialized_m4262 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C" int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m4263 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m4264 (VuforiaManagerImpl_t846 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m4265 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C" bool VuforiaManagerImpl_Init_m4266 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C" void VuforiaManagerImpl_Deinit_m4267 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C" bool VuforiaManagerImpl_Update_m4268 (VuforiaManagerImpl_t846 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C" void VuforiaManagerImpl_StartRendering_m4269 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C" void VuforiaManagerImpl_FinishRendering_m4270 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C" void VuforiaManagerImpl_Pause_m4271 (VuforiaManagerImpl_t846 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C" void VuforiaManagerImpl_SetStatesToDiscard_m4272 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void VuforiaManagerImpl_InitializeTrackableContainer_m4273 (VuforiaManagerImpl_t846 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateTrackers_m4274 (VuforiaManagerImpl_t846 * __this, FrameState_t843  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void VuforiaManagerImpl_UpdateSmartTerrain_m4275 (VuforiaManagerImpl_t846 * __this, FrameState_t843  ___frameState, StateManagerImpl_t904 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C" void VuforiaManagerImpl_UpdateTrackablesEditor_m4276 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateWordTrackables_m4277 (VuforiaManagerImpl_t846 * __this, FrameState_t843  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C" void VuforiaManagerImpl_UpdateImageContainer_m4278 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C" void VuforiaManagerImpl_UpdateCameraFrame_m4279 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C" void VuforiaManagerImpl_InjectCameraFrame_m4280 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C" void VuforiaManagerImpl__ctor_m4281 (VuforiaManagerImpl_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
