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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t305;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3176;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3177;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t724;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2349;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t447;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2353;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2356;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15051_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1__ctor_m15051(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1__ctor_m15051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15052_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15052(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1__ctor_m15052_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2054_gshared (List_1_t305 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2054(__this, ___capacity, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1__ctor_m2054_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15053_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15053(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15053_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15054_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15054(__this, method) (( Object_t* (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15055_gshared (List_1_t305 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t305 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15056_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15056(__this, method) (( Object_t * (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15057_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15057(__this, ___item, method) (( int32_t (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15057_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15058_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15058(__this, ___item, method) (( bool (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15058_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15059_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15059(__this, ___item, method) (( int32_t (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15059_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15060_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15060(__this, ___index, ___item, method) (( void (*) (List_1_t305 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15060_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15061_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15061(__this, ___item, method) (( void (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15061_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15062_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15062(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15063_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15063(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15063_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15064_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15064(__this, method) (( Object_t * (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15065_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15065(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15066_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15066(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15066_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15067_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15067(__this, ___index, method) (( Object_t * (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15067_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15068_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15068(__this, ___index, ___value, method) (( void (*) (List_1_t305 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15068_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15069_gshared (List_1_t305 * __this, UILineInfo_t300  ___item, const MethodInfo* method);
#define List_1_Add_m15069(__this, ___item, method) (( void (*) (List_1_t305 *, UILineInfo_t300 , const MethodInfo*))List_1_Add_m15069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15070_gshared (List_1_t305 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15070(__this, ___newCount, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15070_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15071_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15071(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15071_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15072_gshared (List_1_t305 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15072(__this, ___enumerable, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15072_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15073_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15073(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddRange_m15073_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2349 * List_1_AsReadOnly_m15074_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15074(__this, method) (( ReadOnlyCollection_1_t2349 * (*) (List_1_t305 *, const MethodInfo*))List_1_AsReadOnly_m15074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15075_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Clear_m15075(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Clear_m15075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15076_gshared (List_1_t305 * __this, UILineInfo_t300  ___item, const MethodInfo* method);
#define List_1_Contains_m15076(__this, ___item, method) (( bool (*) (List_1_t305 *, UILineInfo_t300 , const MethodInfo*))List_1_Contains_m15076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15077_gshared (List_1_t305 * __this, UILineInfoU5BU5D_t447* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15077(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t305 *, UILineInfoU5BU5D_t447*, int32_t, const MethodInfo*))List_1_CopyTo_m15077_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t300  List_1_Find_m15078_gshared (List_1_t305 * __this, Predicate_1_t2353 * ___match, const MethodInfo* method);
#define List_1_Find_m15078(__this, ___match, method) (( UILineInfo_t300  (*) (List_1_t305 *, Predicate_1_t2353 *, const MethodInfo*))List_1_Find_m15078_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15079_gshared (Object_t * __this /* static, unused */, Predicate_1_t2353 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15079(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2353 *, const MethodInfo*))List_1_CheckMatch_m15079_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15080_gshared (List_1_t305 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2353 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15080(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t305 *, int32_t, int32_t, Predicate_1_t2353 *, const MethodInfo*))List_1_GetIndex_m15080_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2348  List_1_GetEnumerator_m15081_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15081(__this, method) (( Enumerator_t2348  (*) (List_1_t305 *, const MethodInfo*))List_1_GetEnumerator_m15081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15082_gshared (List_1_t305 * __this, UILineInfo_t300  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15082(__this, ___item, method) (( int32_t (*) (List_1_t305 *, UILineInfo_t300 , const MethodInfo*))List_1_IndexOf_m15082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15083_gshared (List_1_t305 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15083(__this, ___start, ___delta, method) (( void (*) (List_1_t305 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15083_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15084_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15084(__this, ___index, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15084_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15085_gshared (List_1_t305 * __this, int32_t ___index, UILineInfo_t300  ___item, const MethodInfo* method);
#define List_1_Insert_m15085(__this, ___index, ___item, method) (( void (*) (List_1_t305 *, int32_t, UILineInfo_t300 , const MethodInfo*))List_1_Insert_m15085_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15086_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15086(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15086_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15087_gshared (List_1_t305 * __this, UILineInfo_t300  ___item, const MethodInfo* method);
#define List_1_Remove_m15087(__this, ___item, method) (( bool (*) (List_1_t305 *, UILineInfo_t300 , const MethodInfo*))List_1_Remove_m15087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15088_gshared (List_1_t305 * __this, Predicate_1_t2353 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15088(__this, ___match, method) (( int32_t (*) (List_1_t305 *, Predicate_1_t2353 *, const MethodInfo*))List_1_RemoveAll_m15088_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15089_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15089(__this, ___index, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15090_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Reverse_m15090(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Reverse_m15090_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15091_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Sort_m15091(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Sort_m15091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15092_gshared (List_1_t305 * __this, Comparison_1_t2356 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15092(__this, ___comparison, method) (( void (*) (List_1_t305 *, Comparison_1_t2356 *, const MethodInfo*))List_1_Sort_m15092_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t447* List_1_ToArray_m15093_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_ToArray_m15093(__this, method) (( UILineInfoU5BU5D_t447* (*) (List_1_t305 *, const MethodInfo*))List_1_ToArray_m15093_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15094_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15094(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_TrimExcess_m15094_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15095_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15095(__this, method) (( int32_t (*) (List_1_t305 *, const MethodInfo*))List_1_get_Capacity_m15095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15096_gshared (List_1_t305 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15096(__this, ___value, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15096_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15097_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_get_Count_m15097(__this, method) (( int32_t (*) (List_1_t305 *, const MethodInfo*))List_1_get_Count_m15097_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t300  List_1_get_Item_m15098_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15098(__this, ___index, method) (( UILineInfo_t300  (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_get_Item_m15098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15099_gshared (List_1_t305 * __this, int32_t ___index, UILineInfo_t300  ___value, const MethodInfo* method);
#define List_1_set_Item_m15099(__this, ___index, ___value, method) (( void (*) (List_1_t305 *, int32_t, UILineInfo_t300 , const MethodInfo*))List_1_set_Item_m15099_gshared)(__this, ___index, ___value, method)
