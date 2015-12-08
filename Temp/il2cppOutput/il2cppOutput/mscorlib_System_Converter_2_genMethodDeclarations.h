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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t3067;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m25240_gshared (Converter_2_t3067 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m25240(__this, ___object, ___method, method) (( void (*) (Converter_2_t3067 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m25240_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m25241_gshared (Converter_2_t3067 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m25241(__this, ___input, method) (( Object_t * (*) (Converter_2_t3067 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m25241_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m25242_gshared (Converter_2_t3067 * __this, Object_t * ___input, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m25242(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t3067 *, Object_t *, AsyncCallback_t207 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m25242_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m25243_gshared (Converter_2_t3067 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m25243(__this, ___result, method) (( Object_t * (*) (Converter_2_t3067 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m25243_gshared)(__this, ___result, method)
