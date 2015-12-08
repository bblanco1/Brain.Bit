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

// DropMe
struct DropMe_t13;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t103;
// UnityEngine.Sprite
struct Sprite_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void DropMe::.ctor()
extern "C" void DropMe__ctor_m24 (DropMe_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DropMe::OnEnable()
extern "C" void DropMe_OnEnable_m25 (DropMe_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DropMe::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnDrop_m26 (DropMe_t13 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DropMe::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnPointerEnter_m27 (DropMe_t13 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DropMe::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnPointerExit_m28 (DropMe_t13 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite DropMe::GetDropSprite(UnityEngine.EventSystems.PointerEventData)
extern "C" Sprite_t104 * DropMe_GetDropSprite_m29 (DropMe_t13 * __this, PointerEventData_t103 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
