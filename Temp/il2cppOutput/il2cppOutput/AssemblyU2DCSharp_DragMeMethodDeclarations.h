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

// DragMe
struct DragMe_t8;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t103;

#include "codegen/il2cpp-codegen.h"

// System.Void DragMe::.ctor()
extern "C" void DragMe__ctor_m14 (DragMe_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragMe::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_OnBeginDrag_m15 (DragMe_t8 * __this, PointerEventData_t103 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragMe::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_OnDrag_m16 (DragMe_t8 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragMe::SetDraggedPosition(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_SetDraggedPosition_m17 (DragMe_t8 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragMe::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_OnEndDrag_m18 (DragMe_t8 * __this, PointerEventData_t103 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
