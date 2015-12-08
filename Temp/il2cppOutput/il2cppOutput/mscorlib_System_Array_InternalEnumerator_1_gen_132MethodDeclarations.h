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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25799_gshared (InternalEnumerator_1_t3129 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m25799(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3129 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m25799_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25800_gshared (InternalEnumerator_1_t3129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25800(__this, method) (( void (*) (InternalEnumerator_1_t3129 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25800_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25801_gshared (InternalEnumerator_1_t3129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25801(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3129 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25801_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25802_gshared (InternalEnumerator_1_t3129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m25802(__this, method) (( void (*) (InternalEnumerator_1_t3129 *, const MethodInfo*))InternalEnumerator_1_Dispose_m25802_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25803_gshared (InternalEnumerator_1_t3129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m25803(__this, method) (( bool (*) (InternalEnumerator_1_t3129 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m25803_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t318  InternalEnumerator_1_get_Current_m25804_gshared (InternalEnumerator_1_t3129 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m25804(__this, method) (( DateTime_t318  (*) (InternalEnumerator_1_t3129 *, const MethodInfo*))InternalEnumerator_1_get_Current_m25804_gshared)(__this, method)
