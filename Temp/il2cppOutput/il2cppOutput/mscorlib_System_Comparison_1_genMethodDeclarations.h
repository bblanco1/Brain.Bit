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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t501;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3461_gshared (Comparison_1_t501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3461(__this, ___object, ___method, method) (( void (*) (Comparison_1_t501 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3461_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16766_gshared (Comparison_1_t501 * __this, RaycastResult_t532  ___x, RaycastResult_t532  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16766(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t501 *, RaycastResult_t532 , RaycastResult_t532 , const MethodInfo*))Comparison_1_Invoke_m16766_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16767_gshared (Comparison_1_t501 * __this, RaycastResult_t532  ___x, RaycastResult_t532  ___y, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16767(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t501 *, RaycastResult_t532 , RaycastResult_t532 , AsyncCallback_t207 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16767_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16768_gshared (Comparison_1_t501 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16768(__this, ___result, method) (( int32_t (*) (Comparison_1_t501 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16768_gshared)(__this, ___result, method)
