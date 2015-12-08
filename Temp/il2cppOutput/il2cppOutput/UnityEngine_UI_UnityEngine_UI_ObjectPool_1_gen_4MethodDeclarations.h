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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m18137(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2584 *, UnityAction_1_t2585 *, UnityAction_1_t2585 *, const MethodInfo*))ObjectPool_1__ctor_m16871_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m18138(__this, method) (( int32_t (*) (ObjectPool_1_t2584 *, const MethodInfo*))ObjectPool_1_get_countAll_m16873_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m18139(__this, ___value, method) (( void (*) (ObjectPool_1_t2584 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16875_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m18140(__this, method) (( List_1_t711 * (*) (ObjectPool_1_t2584 *, const MethodInfo*))ObjectPool_1_Get_m16877_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m18141(__this, ___element, method) (( void (*) (ObjectPool_1_t2584 *, List_1_t711 *, const MethodInfo*))ObjectPool_1_Release_m16879_gshared)(__this, ___element, method)
