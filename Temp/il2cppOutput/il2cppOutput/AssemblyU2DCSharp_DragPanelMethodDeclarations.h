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

// DragPanel
struct DragPanel_t10;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t103;

#include "codegen/il2cpp-codegen.h"

// System.Void DragPanel::.ctor()
extern "C" void DragPanel__ctor_m19 (DragPanel_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::Awake()
extern "C" void DragPanel_Awake_m20 (DragPanel_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnPointerDown_m21 (DragPanel_t10 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnDrag_m22 (DragPanel_t10 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::ClampToWindow()
extern "C" void DragPanel_ClampToWindow_m23 (DragPanel_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
