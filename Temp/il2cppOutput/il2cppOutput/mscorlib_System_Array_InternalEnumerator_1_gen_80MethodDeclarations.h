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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m24091_gshared (InternalEnumerator_1_t2969 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m24091(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2969 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m24091_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m24092_gshared (InternalEnumerator_1_t2969 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m24092(__this, method) (( void (*) (InternalEnumerator_1_t2969 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m24092_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24093_gshared (InternalEnumerator_1_t2969 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24093(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2969 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m24093_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m24094_gshared (InternalEnumerator_1_t2969 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m24094(__this, method) (( void (*) (InternalEnumerator_1_t2969 *, const MethodInfo*))InternalEnumerator_1_Dispose_m24094_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m24095_gshared (InternalEnumerator_1_t2969 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m24095(__this, method) (( bool (*) (InternalEnumerator_1_t2969 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m24095_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::get_Current()
extern "C" KeyValuePair_2_t2968  InternalEnumerator_1_get_Current_m24096_gshared (InternalEnumerator_1_t2969 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m24096(__this, method) (( KeyValuePair_2_t2968  (*) (InternalEnumerator_1_t2969 *, const MethodInfo*))InternalEnumerator_1_get_Current_m24096_gshared)(__this, method)
