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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2292;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14338_gshared (Comparison_1_t2292 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14338(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2292 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14338_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14339_gshared (Comparison_1_t2292 * __this, Color32_t217  ___x, Color32_t217  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14339(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2292 *, Color32_t217 , Color32_t217 , const MethodInfo*))Comparison_1_Invoke_m14339_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14340_gshared (Comparison_1_t2292 * __this, Color32_t217  ___x, Color32_t217  ___y, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14340(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2292 *, Color32_t217 , Color32_t217 , AsyncCallback_t207 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14340_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14341_gshared (Comparison_1_t2292 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14341(__this, ___result, method) (( int32_t (*) (Comparison_1_t2292 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14341_gshared)(__this, ___result, method)
