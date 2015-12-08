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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t304;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3173;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3174;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3175;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2339;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t446;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2343;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2346;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m14901_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1__ctor_m14901(__this, method) (( void (*) (List_1_t304 *, const MethodInfo*))List_1__ctor_m14901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14902_gshared (List_1_t304 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14902(__this, ___collection, method) (( void (*) (List_1_t304 *, Object_t*, const MethodInfo*))List_1__ctor_m14902_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2053_gshared (List_1_t304 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2053(__this, ___capacity, method) (( void (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1__ctor_m2053_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m14903_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14903(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14903_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14904_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14904(__this, method) (( Object_t* (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14904_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14905_gshared (List_1_t304 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14905(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t304 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14905_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14906_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14906(__this, method) (( Object_t * (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14907_gshared (List_1_t304 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14907(__this, ___item, method) (( int32_t (*) (List_1_t304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14907_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14908_gshared (List_1_t304 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14908(__this, ___item, method) (( bool (*) (List_1_t304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14908_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14909_gshared (List_1_t304 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14909(__this, ___item, method) (( int32_t (*) (List_1_t304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14909_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14910_gshared (List_1_t304 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14910(__this, ___index, ___item, method) (( void (*) (List_1_t304 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14910_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14911_gshared (List_1_t304 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14911(__this, ___item, method) (( void (*) (List_1_t304 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14911_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14912_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14912(__this, method) (( bool (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14913_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14913(__this, method) (( bool (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14913_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14914_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14914(__this, method) (( Object_t * (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14915_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14915(__this, method) (( bool (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14915_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14916_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14916(__this, method) (( bool (*) (List_1_t304 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14916_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14917_gshared (List_1_t304 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14917(__this, ___index, method) (( Object_t * (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14917_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14918_gshared (List_1_t304 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14918(__this, ___index, ___value, method) (( void (*) (List_1_t304 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14918_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m14919_gshared (List_1_t304 * __this, UICharInfo_t299  ___item, const MethodInfo* method);
#define List_1_Add_m14919(__this, ___item, method) (( void (*) (List_1_t304 *, UICharInfo_t299 , const MethodInfo*))List_1_Add_m14919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14920_gshared (List_1_t304 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14920(__this, ___newCount, method) (( void (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14920_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14921_gshared (List_1_t304 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14921(__this, ___collection, method) (( void (*) (List_1_t304 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14921_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14922_gshared (List_1_t304 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14922(__this, ___enumerable, method) (( void (*) (List_1_t304 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14922_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14923_gshared (List_1_t304 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14923(__this, ___collection, method) (( void (*) (List_1_t304 *, Object_t*, const MethodInfo*))List_1_AddRange_m14923_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2339 * List_1_AsReadOnly_m14924_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14924(__this, method) (( ReadOnlyCollection_1_t2339 * (*) (List_1_t304 *, const MethodInfo*))List_1_AsReadOnly_m14924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m14925_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_Clear_m14925(__this, method) (( void (*) (List_1_t304 *, const MethodInfo*))List_1_Clear_m14925_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m14926_gshared (List_1_t304 * __this, UICharInfo_t299  ___item, const MethodInfo* method);
#define List_1_Contains_m14926(__this, ___item, method) (( bool (*) (List_1_t304 *, UICharInfo_t299 , const MethodInfo*))List_1_Contains_m14926_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14927_gshared (List_1_t304 * __this, UICharInfoU5BU5D_t446* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14927(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t304 *, UICharInfoU5BU5D_t446*, int32_t, const MethodInfo*))List_1_CopyTo_m14927_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t299  List_1_Find_m14928_gshared (List_1_t304 * __this, Predicate_1_t2343 * ___match, const MethodInfo* method);
#define List_1_Find_m14928(__this, ___match, method) (( UICharInfo_t299  (*) (List_1_t304 *, Predicate_1_t2343 *, const MethodInfo*))List_1_Find_m14928_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14929_gshared (Object_t * __this /* static, unused */, Predicate_1_t2343 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14929(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2343 *, const MethodInfo*))List_1_CheckMatch_m14929_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14930_gshared (List_1_t304 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2343 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14930(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t304 *, int32_t, int32_t, Predicate_1_t2343 *, const MethodInfo*))List_1_GetIndex_m14930_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2338  List_1_GetEnumerator_m14931_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14931(__this, method) (( Enumerator_t2338  (*) (List_1_t304 *, const MethodInfo*))List_1_GetEnumerator_m14931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14932_gshared (List_1_t304 * __this, UICharInfo_t299  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14932(__this, ___item, method) (( int32_t (*) (List_1_t304 *, UICharInfo_t299 , const MethodInfo*))List_1_IndexOf_m14932_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14933_gshared (List_1_t304 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14933(__this, ___start, ___delta, method) (( void (*) (List_1_t304 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14933_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14934_gshared (List_1_t304 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14934(__this, ___index, method) (( void (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14934_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14935_gshared (List_1_t304 * __this, int32_t ___index, UICharInfo_t299  ___item, const MethodInfo* method);
#define List_1_Insert_m14935(__this, ___index, ___item, method) (( void (*) (List_1_t304 *, int32_t, UICharInfo_t299 , const MethodInfo*))List_1_Insert_m14935_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14936_gshared (List_1_t304 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14936(__this, ___collection, method) (( void (*) (List_1_t304 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14936_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m14937_gshared (List_1_t304 * __this, UICharInfo_t299  ___item, const MethodInfo* method);
#define List_1_Remove_m14937(__this, ___item, method) (( bool (*) (List_1_t304 *, UICharInfo_t299 , const MethodInfo*))List_1_Remove_m14937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14938_gshared (List_1_t304 * __this, Predicate_1_t2343 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14938(__this, ___match, method) (( int32_t (*) (List_1_t304 *, Predicate_1_t2343 *, const MethodInfo*))List_1_RemoveAll_m14938_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14939_gshared (List_1_t304 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14939(__this, ___index, method) (( void (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14939_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m14940_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_Reverse_m14940(__this, method) (( void (*) (List_1_t304 *, const MethodInfo*))List_1_Reverse_m14940_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m14941_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_Sort_m14941(__this, method) (( void (*) (List_1_t304 *, const MethodInfo*))List_1_Sort_m14941_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14942_gshared (List_1_t304 * __this, Comparison_1_t2346 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14942(__this, ___comparison, method) (( void (*) (List_1_t304 *, Comparison_1_t2346 *, const MethodInfo*))List_1_Sort_m14942_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t446* List_1_ToArray_m14943_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_ToArray_m14943(__this, method) (( UICharInfoU5BU5D_t446* (*) (List_1_t304 *, const MethodInfo*))List_1_ToArray_m14943_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14944_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14944(__this, method) (( void (*) (List_1_t304 *, const MethodInfo*))List_1_TrimExcess_m14944_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14945_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14945(__this, method) (( int32_t (*) (List_1_t304 *, const MethodInfo*))List_1_get_Capacity_m14945_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14946_gshared (List_1_t304 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14946(__this, ___value, method) (( void (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14946_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14947_gshared (List_1_t304 * __this, const MethodInfo* method);
#define List_1_get_Count_m14947(__this, method) (( int32_t (*) (List_1_t304 *, const MethodInfo*))List_1_get_Count_m14947_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t299  List_1_get_Item_m14948_gshared (List_1_t304 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14948(__this, ___index, method) (( UICharInfo_t299  (*) (List_1_t304 *, int32_t, const MethodInfo*))List_1_get_Item_m14948_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14949_gshared (List_1_t304 * __this, int32_t ___index, UICharInfo_t299  ___value, const MethodInfo* method);
#define List_1_set_Item_m14949(__this, ___index, ___value, method) (( void (*) (List_1_t304 *, int32_t, UICharInfo_t299 , const MethodInfo*))List_1_set_Item_m14949_gshared)(__this, ___index, ___value, method)
