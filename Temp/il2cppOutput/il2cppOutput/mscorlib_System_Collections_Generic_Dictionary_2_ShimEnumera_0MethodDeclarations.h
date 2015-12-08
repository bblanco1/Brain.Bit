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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2396;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2384;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15618_gshared (ShimEnumerator_t2396 * __this, Dictionary_2_t2384 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15618(__this, ___host, method) (( void (*) (ShimEnumerator_t2396 *, Dictionary_2_t2384 *, const MethodInfo*))ShimEnumerator__ctor_m15618_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15619_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15619(__this, method) (( bool (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_MoveNext_m15619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1459  ShimEnumerator_get_Entry_m15620_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15620(__this, method) (( DictionaryEntry_t1459  (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_get_Entry_m15620_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15621_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15621(__this, method) (( Object_t * (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_get_Key_m15621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15622_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15622(__this, method) (( Object_t * (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_get_Value_m15622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15623_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15623(__this, method) (( Object_t * (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_get_Current_m15623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m15624_gshared (ShimEnumerator_t2396 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m15624(__this, method) (( void (*) (ShimEnumerator_t2396 *, const MethodInfo*))ShimEnumerator_Reset_m15624_gshared)(__this, method)
