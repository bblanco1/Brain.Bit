﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t914;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t974;
// System.Collections.Generic.IEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerator_1_t990;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ICollection_1_t3278;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>
struct ReadOnlyCollection_1_t2951;
// Vuforia.TargetFinder/TargetSearchResult[]
struct TargetSearchResultU5BU5D_t2949;
// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t2956;
// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t2959;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void List_1__ctor_m5965_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1__ctor_m5965(__this, method) (( void (*) (List_1_t914 *, const MethodInfo*))List_1__ctor_m5965_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23757_gshared (List_1_t914 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23757(__this, ___collection, method) (( void (*) (List_1_t914 *, Object_t*, const MethodInfo*))List_1__ctor_m23757_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m23758_gshared (List_1_t914 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m23758(__this, ___capacity, method) (( void (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1__ctor_m23758_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern "C" void List_1__cctor_m23759_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23759(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23759_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23760_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23760(__this, method) (( Object_t* (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23760_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23761_gshared (List_1_t914 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23761(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t914 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23761_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23762_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23762(__this, method) (( Object_t * (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23763_gshared (List_1_t914 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23763(__this, ___item, method) (( int32_t (*) (List_1_t914 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23763_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23764_gshared (List_1_t914 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23764(__this, ___item, method) (( bool (*) (List_1_t914 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23764_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23765_gshared (List_1_t914 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23765(__this, ___item, method) (( int32_t (*) (List_1_t914 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23765_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23766_gshared (List_1_t914 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23766(__this, ___index, ___item, method) (( void (*) (List_1_t914 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23766_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23767_gshared (List_1_t914 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23767(__this, ___item, method) (( void (*) (List_1_t914 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23767_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23768_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23768(__this, method) (( bool (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23769_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23769(__this, method) (( bool (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23769_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23770_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23770(__this, method) (( Object_t * (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23771_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23771(__this, method) (( bool (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23772_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23772(__this, method) (( bool (*) (List_1_t914 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23772_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23773_gshared (List_1_t914 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23773(__this, ___index, method) (( Object_t * (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23773_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23774_gshared (List_1_t914 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23774(__this, ___index, ___value, method) (( void (*) (List_1_t914 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23774_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
extern "C" void List_1_Add_m23775_gshared (List_1_t914 * __this, TargetSearchResult_t910  ___item, const MethodInfo* method);
#define List_1_Add_m23775(__this, ___item, method) (( void (*) (List_1_t914 *, TargetSearchResult_t910 , const MethodInfo*))List_1_Add_m23775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23776_gshared (List_1_t914 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23776(__this, ___newCount, method) (( void (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23776_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23777_gshared (List_1_t914 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23777(__this, ___collection, method) (( void (*) (List_1_t914 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23777_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23778_gshared (List_1_t914 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23778(__this, ___enumerable, method) (( void (*) (List_1_t914 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23778_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23779_gshared (List_1_t914 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23779(__this, ___collection, method) (( void (*) (List_1_t914 *, Object_t*, const MethodInfo*))List_1_AddRange_m23779_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2951 * List_1_AsReadOnly_m23780_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23780(__this, method) (( ReadOnlyCollection_1_t2951 * (*) (List_1_t914 *, const MethodInfo*))List_1_AsReadOnly_m23780_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
extern "C" void List_1_Clear_m23781_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_Clear_m23781(__this, method) (( void (*) (List_1_t914 *, const MethodInfo*))List_1_Clear_m23781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern "C" bool List_1_Contains_m23782_gshared (List_1_t914 * __this, TargetSearchResult_t910  ___item, const MethodInfo* method);
#define List_1_Contains_m23782(__this, ___item, method) (( bool (*) (List_1_t914 *, TargetSearchResult_t910 , const MethodInfo*))List_1_Contains_m23782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23783_gshared (List_1_t914 * __this, TargetSearchResultU5BU5D_t2949* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t914 *, TargetSearchResultU5BU5D_t2949*, int32_t, const MethodInfo*))List_1_CopyTo_m23783_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Find(System.Predicate`1<T>)
extern "C" TargetSearchResult_t910  List_1_Find_m23784_gshared (List_1_t914 * __this, Predicate_1_t2956 * ___match, const MethodInfo* method);
#define List_1_Find_m23784(__this, ___match, method) (( TargetSearchResult_t910  (*) (List_1_t914 *, Predicate_1_t2956 *, const MethodInfo*))List_1_Find_m23784_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23785_gshared (Object_t * __this /* static, unused */, Predicate_1_t2956 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23785(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2956 *, const MethodInfo*))List_1_CheckMatch_m23785_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23786_gshared (List_1_t914 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2956 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23786(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t914 *, int32_t, int32_t, Predicate_1_t2956 *, const MethodInfo*))List_1_GetIndex_m23786_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern "C" Enumerator_t2950  List_1_GetEnumerator_m23787_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23787(__this, method) (( Enumerator_t2950  (*) (List_1_t914 *, const MethodInfo*))List_1_GetEnumerator_m23787_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23788_gshared (List_1_t914 * __this, TargetSearchResult_t910  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23788(__this, ___item, method) (( int32_t (*) (List_1_t914 *, TargetSearchResult_t910 , const MethodInfo*))List_1_IndexOf_m23788_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23789_gshared (List_1_t914 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23789(__this, ___start, ___delta, method) (( void (*) (List_1_t914 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23789_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23790_gshared (List_1_t914 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23790(__this, ___index, method) (( void (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23790_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23791_gshared (List_1_t914 * __this, int32_t ___index, TargetSearchResult_t910  ___item, const MethodInfo* method);
#define List_1_Insert_m23791(__this, ___index, ___item, method) (( void (*) (List_1_t914 *, int32_t, TargetSearchResult_t910 , const MethodInfo*))List_1_Insert_m23791_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23792_gshared (List_1_t914 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23792(__this, ___collection, method) (( void (*) (List_1_t914 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23792_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
extern "C" bool List_1_Remove_m23793_gshared (List_1_t914 * __this, TargetSearchResult_t910  ___item, const MethodInfo* method);
#define List_1_Remove_m23793(__this, ___item, method) (( bool (*) (List_1_t914 *, TargetSearchResult_t910 , const MethodInfo*))List_1_Remove_m23793_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23794_gshared (List_1_t914 * __this, Predicate_1_t2956 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23794(__this, ___match, method) (( int32_t (*) (List_1_t914 *, Predicate_1_t2956 *, const MethodInfo*))List_1_RemoveAll_m23794_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23795_gshared (List_1_t914 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23795(__this, ___index, method) (( void (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23795_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Reverse()
extern "C" void List_1_Reverse_m23796_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_Reverse_m23796(__this, method) (( void (*) (List_1_t914 *, const MethodInfo*))List_1_Reverse_m23796_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort()
extern "C" void List_1_Sort_m23797_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_Sort_m23797(__this, method) (( void (*) (List_1_t914 *, const MethodInfo*))List_1_Sort_m23797_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23798_gshared (List_1_t914 * __this, Comparison_1_t2959 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23798(__this, ___comparison, method) (( void (*) (List_1_t914 *, Comparison_1_t2959 *, const MethodInfo*))List_1_Sort_m23798_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::ToArray()
extern "C" TargetSearchResultU5BU5D_t2949* List_1_ToArray_m23799_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_ToArray_m23799(__this, method) (( TargetSearchResultU5BU5D_t2949* (*) (List_1_t914 *, const MethodInfo*))List_1_ToArray_m23799_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m23800_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23800(__this, method) (( void (*) (List_1_t914 *, const MethodInfo*))List_1_TrimExcess_m23800_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23801_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23801(__this, method) (( int32_t (*) (List_1_t914 *, const MethodInfo*))List_1_get_Capacity_m23801_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23802_gshared (List_1_t914 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23802(__this, ___value, method) (( void (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23802_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern "C" int32_t List_1_get_Count_m23803_gshared (List_1_t914 * __this, const MethodInfo* method);
#define List_1_get_Count_m23803(__this, method) (( int32_t (*) (List_1_t914 *, const MethodInfo*))List_1_get_Count_m23803_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern "C" TargetSearchResult_t910  List_1_get_Item_m23804_gshared (List_1_t914 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23804(__this, ___index, method) (( TargetSearchResult_t910  (*) (List_1_t914 *, int32_t, const MethodInfo*))List_1_get_Item_m23804_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23805_gshared (List_1_t914 * __this, int32_t ___index, TargetSearchResult_t910  ___value, const MethodInfo* method);
#define List_1_set_Item_m23805(__this, ___index, ___value, method) (( void (*) (List_1_t914 *, int32_t, TargetSearchResult_t910 , const MethodInfo*))List_1_set_Item_m23805_gshared)(__this, ___index, ___value, method)
