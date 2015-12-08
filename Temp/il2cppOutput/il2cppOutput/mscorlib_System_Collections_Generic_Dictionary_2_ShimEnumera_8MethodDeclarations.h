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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t3049;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3036;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25110_gshared (ShimEnumerator_t3049 * __this, Dictionary_2_t3036 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25110(__this, ___host, method) (( void (*) (ShimEnumerator_t3049 *, Dictionary_2_t3036 *, const MethodInfo*))ShimEnumerator__ctor_m25110_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25111_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25111(__this, method) (( bool (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_MoveNext_m25111_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1459  ShimEnumerator_get_Entry_m25112_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25112(__this, method) (( DictionaryEntry_t1459  (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_get_Entry_m25112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25113_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25113(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_get_Key_m25113_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25114_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25114(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_get_Value_m25114_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25115_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25115(__this, method) (( Object_t * (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_get_Current_m25115_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m25116_gshared (ShimEnumerator_t3049 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m25116(__this, method) (( void (*) (ShimEnumerator_t3049 *, const MethodInfo*))ShimEnumerator_Reset_m25116_gshared)(__this, method)
