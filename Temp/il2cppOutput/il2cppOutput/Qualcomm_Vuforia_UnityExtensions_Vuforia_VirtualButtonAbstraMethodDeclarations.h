﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t94;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t921;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t981;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t60;
// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.Renderer
struct Renderer_t109;
// UnityEngine.Transform
struct Transform_t30;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C" String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m5629 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C" bool VirtualButtonAbstractBehaviour_get_Pressed_m5630 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C" bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m5631 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C" bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m5632 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m5633 (VirtualButtonAbstractBehaviour_t94 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C" VirtualButton_t921 * VirtualButtonAbstractBehaviour_get_VirtualButton_m5634 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C" void VirtualButtonAbstractBehaviour__ctor_m410 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" void VirtualButtonAbstractBehaviour_RegisterEventHandler_m5635 (VirtualButtonAbstractBehaviour_t94 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m5636 (VirtualButtonAbstractBehaviour_t94 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m5637 (VirtualButtonAbstractBehaviour_t94 * __this, Vector2_t11 * ___topLeft, Vector2_t11 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m5638 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m5639 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateEnabled_m5640 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C" bool VirtualButtonAbstractBehaviour_UpdatePose_m5641 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m5642 (VirtualButtonAbstractBehaviour_t94 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C" ImageTargetAbstractBehaviour_t60 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m5643 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m5644 (VirtualButtonAbstractBehaviour_t94 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C" int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m5645 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m5646 (VirtualButtonAbstractBehaviour_t94 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C" Matrix4x4_t25  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m5647 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m5648 (VirtualButtonAbstractBehaviour_t94 * __this, Matrix4x4_t25  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C" GameObject_t6 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m5649 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m5650 (VirtualButtonAbstractBehaviour_t94 * __this, GameObject_t6 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m5651 (VirtualButtonAbstractBehaviour_t94 * __this, VirtualButton_t921 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m5652 (VirtualButtonAbstractBehaviour_t94 * __this, Vector2_t11  ___topLeft, Vector2_t11  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C" Renderer_t109 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m5653 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C" void VirtualButtonAbstractBehaviour_LateUpdate_m5654 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C" void VirtualButtonAbstractBehaviour_OnDisable_m5655 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C" void VirtualButtonAbstractBehaviour_OnDestroy_m5656 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool VirtualButtonAbstractBehaviour_Equals_m5657 (Object_t * __this /* static, unused */, Vector2_t11  ___vec1, Vector2_t11  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m5658 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m5659 (VirtualButtonAbstractBehaviour_t94 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C" Transform_t30 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m5660 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C" GameObject_t6 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m5661 (VirtualButtonAbstractBehaviour_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;