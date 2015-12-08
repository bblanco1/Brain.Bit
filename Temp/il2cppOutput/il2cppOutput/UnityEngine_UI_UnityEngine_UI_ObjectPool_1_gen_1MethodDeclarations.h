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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2504;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2461;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m16871_gshared (ObjectPool_1_t2504 * __this, UnityAction_1_t2461 * ___actionOnGet, UnityAction_1_t2461 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m16871(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2504 *, UnityAction_1_t2461 *, UnityAction_1_t2461 *, const MethodInfo*))ObjectPool_1__ctor_m16871_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m16873_gshared (ObjectPool_1_t2504 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m16873(__this, method) (( int32_t (*) (ObjectPool_1_t2504 *, const MethodInfo*))ObjectPool_1_get_countAll_m16873_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m16875_gshared (ObjectPool_1_t2504 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m16875(__this, ___value, method) (( void (*) (ObjectPool_1_t2504 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16875_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m16877_gshared (ObjectPool_1_t2504 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m16877(__this, method) (( Object_t * (*) (ObjectPool_1_t2504 *, const MethodInfo*))ObjectPool_1_Get_m16877_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m16879_gshared (ObjectPool_1_t2504 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m16879(__this, ___element, method) (( void (*) (ObjectPool_1_t2504 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m16879_gshared)(__this, ___element, method)
