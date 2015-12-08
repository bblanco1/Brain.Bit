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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t2838;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2825;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21786_gshared (ShimEnumerator_t2838 * __this, Dictionary_2_t2825 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21786(__this, ___host, method) (( void (*) (ShimEnumerator_t2838 *, Dictionary_2_t2825 *, const MethodInfo*))ShimEnumerator__ctor_m21786_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21787_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21787(__this, method) (( bool (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_MoveNext_m21787_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1459  ShimEnumerator_get_Entry_m21788_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21788(__this, method) (( DictionaryEntry_t1459  (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_get_Entry_m21788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21789_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21789(__this, method) (( Object_t * (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_get_Key_m21789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21790_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21790(__this, method) (( Object_t * (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_get_Value_m21790_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21791_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21791(__this, method) (( Object_t * (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_get_Current_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::Reset()
extern "C" void ShimEnumerator_Reset_m21792_gshared (ShimEnumerator_t2838 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21792(__this, method) (( void (*) (ShimEnumerator_t2838 *, const MethodInfo*))ShimEnumerator_Reset_m21792_gshared)(__this, method)
