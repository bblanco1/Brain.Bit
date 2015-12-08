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

// PanelManager
struct PanelManager_t20;
// UnityEngine.Animator
struct Animator_t19;
// UnityEngine.GameObject
struct GameObject_t6;
// System.Collections.IEnumerator
struct IEnumerator_t105;

#include "codegen/il2cpp-codegen.h"

// System.Void PanelManager::.ctor()
extern "C" void PanelManager__ctor_m40 (PanelManager_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnEnable()
extern "C" void PanelManager_OnEnable_m41 (PanelManager_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C" void PanelManager_OpenPanel_m42 (PanelManager_t20 * __this, Animator_t19 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C" GameObject_t6 * PanelManager_FindFirstEnabledSelectable_m43 (Object_t * __this /* static, unused */, GameObject_t6 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C" void PanelManager_CloseCurrent_m44 (PanelManager_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C" Object_t * PanelManager_DisablePanelDeleyed_m45 (PanelManager_t20 * __this, Animator_t19 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C" void PanelManager_SetSelected_m46 (PanelManager_t20 * __this, GameObject_t6 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
