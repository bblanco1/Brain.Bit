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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2561;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2662;
// System.Object[]
struct ObjectU5BU5D_t140;
// System.Comparison`1<System.Object>
struct Comparison_1_t2225;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m17711_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m17711(__this, method) (( void (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1__ctor_m17711_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17713_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17713(__this, method) (( Object_t * (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17713_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m17715_gshared (IndexedSet_1_t2561 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m17715(__this, ___item, method) (( void (*) (IndexedSet_1_t2561 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m17715_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m17717_gshared (IndexedSet_1_t2561 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m17717(__this, ___item, method) (( bool (*) (IndexedSet_1_t2561 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m17717_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m17719_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m17719(__this, method) (( Object_t* (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m17719_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m17721_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m17721(__this, method) (( void (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1_Clear_m17721_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m17723_gshared (IndexedSet_1_t2561 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m17723(__this, ___item, method) (( bool (*) (IndexedSet_1_t2561 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m17723_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m17725_gshared (IndexedSet_1_t2561 * __this, ObjectU5BU5D_t140* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m17725(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2561 *, ObjectU5BU5D_t140*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m17725_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m17727_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m17727(__this, method) (( int32_t (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1_get_Count_m17727_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m17729_gshared (IndexedSet_1_t2561 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m17729(__this, method) (( bool (*) (IndexedSet_1_t2561 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m17729_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m17731_gshared (IndexedSet_1_t2561 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m17731(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2561 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m17731_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m17733_gshared (IndexedSet_1_t2561 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m17733(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2561 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m17733_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m17735_gshared (IndexedSet_1_t2561 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m17735(__this, ___index, method) (( void (*) (IndexedSet_1_t2561 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m17735_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m17737_gshared (IndexedSet_1_t2561 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m17737(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2561 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m17737_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m17739_gshared (IndexedSet_1_t2561 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m17739(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2561 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m17739_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m17740_gshared (IndexedSet_1_t2561 * __this, Comparison_1_t2225 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m17740(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2561 *, Comparison_1_t2225 *, const MethodInfo*))IndexedSet_1_Sort_m17740_gshared)(__this, ___sortLayoutFunction, method)
