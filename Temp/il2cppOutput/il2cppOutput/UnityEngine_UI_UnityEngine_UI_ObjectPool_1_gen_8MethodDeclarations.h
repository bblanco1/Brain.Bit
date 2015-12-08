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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m19660(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2693 *, UnityAction_1_t2694 *, UnityAction_1_t2694 *, const MethodInfo*))ObjectPool_1__ctor_m16871_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>::get_countAll()
#define ObjectPool_1_get_countAll_m19661(__this, method) (( int32_t (*) (ObjectPool_1_t2693 *, const MethodInfo*))ObjectPool_1_get_countAll_m16873_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m19662(__this, ___value, method) (( void (*) (ObjectPool_1_t2693 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16875_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>::Get()
#define ObjectPool_1_Get_m19663(__this, method) (( List_1_t430 * (*) (ObjectPool_1_t2693 *, const MethodInfo*))ObjectPool_1_Get_m16877_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>::Release(T)
#define ObjectPool_1_Release_m19664(__this, ___element, method) (( void (*) (ObjectPool_1_t2693 *, List_1_t430 *, const MethodInfo*))ObjectPool_1_Release_m16879_gshared)(__this, ___element, method)
