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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t162;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t163;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2662;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3156;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2206;
// System.Object[]
struct ObjectU5BU5D_t140;
// System.Predicate`1<System.Object>
struct Predicate_1_t2219;
// System.Comparison`1<System.Object>
struct Comparison_1_t2225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m13294_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1__ctor_m13294(__this, method) (( void (*) (List_1_t162 *, const MethodInfo*))List_1__ctor_m13294_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13296_gshared (List_1_t162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13296(__this, ___collection, method) (( void (*) (List_1_t162 *, Object_t*, const MethodInfo*))List_1__ctor_m13296_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13298_gshared (List_1_t162 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13298(__this, ___capacity, method) (( void (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1__ctor_m13298_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m13300_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13300(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13300_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13302_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13302(__this, method) (( Object_t* (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13304_gshared (List_1_t162 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13304(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t162 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13304_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13306_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13306(__this, method) (( Object_t * (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13306_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13308_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13308(__this, ___item, method) (( int32_t (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13308_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13310_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13310(__this, ___item, method) (( bool (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13310_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13312_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13312(__this, ___item, method) (( int32_t (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13312_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13314_gshared (List_1_t162 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13314(__this, ___index, ___item, method) (( void (*) (List_1_t162 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13314_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13316_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13316(__this, ___item, method) (( void (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13316_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13318_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13318(__this, method) (( bool (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13318_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13320_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13320(__this, method) (( bool (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13320_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13322_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13322(__this, method) (( Object_t * (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13322_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13324_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13324(__this, method) (( bool (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13326_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13326(__this, method) (( bool (*) (List_1_t162 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13326_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13328_gshared (List_1_t162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13328(__this, ___index, method) (( Object_t * (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13330_gshared (List_1_t162 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13330(__this, ___index, ___value, method) (( void (*) (List_1_t162 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13330_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m13332_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m13332(__this, ___item, method) (( void (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_Add_m13332_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13334_gshared (List_1_t162 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13334(__this, ___newCount, method) (( void (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13334_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13336_gshared (List_1_t162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13336(__this, ___collection, method) (( void (*) (List_1_t162 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13336_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13338_gshared (List_1_t162 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13338(__this, ___enumerable, method) (( void (*) (List_1_t162 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13338_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13339_gshared (List_1_t162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13339(__this, ___collection, method) (( void (*) (List_1_t162 *, Object_t*, const MethodInfo*))List_1_AddRange_m13339_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2206 * List_1_AsReadOnly_m13341_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13341(__this, method) (( ReadOnlyCollection_1_t2206 * (*) (List_1_t162 *, const MethodInfo*))List_1_AsReadOnly_m13341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m13343_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_Clear_m13343(__this, method) (( void (*) (List_1_t162 *, const MethodInfo*))List_1_Clear_m13343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m13345_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m13345(__this, ___item, method) (( bool (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_Contains_m13345_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13347_gshared (List_1_t162 * __this, ObjectU5BU5D_t140* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t162 *, ObjectU5BU5D_t140*, int32_t, const MethodInfo*))List_1_CopyTo_m13347_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m13349_gshared (List_1_t162 * __this, Predicate_1_t2219 * ___match, const MethodInfo* method);
#define List_1_Find_m13349(__this, ___match, method) (( Object_t * (*) (List_1_t162 *, Predicate_1_t2219 *, const MethodInfo*))List_1_Find_m13349_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13351_gshared (Object_t * __this /* static, unused */, Predicate_1_t2219 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13351(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2219 *, const MethodInfo*))List_1_CheckMatch_m13351_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13353_gshared (List_1_t162 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2219 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13353(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t162 *, int32_t, int32_t, Predicate_1_t2219 *, const MethodInfo*))List_1_GetIndex_m13353_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2213  List_1_GetEnumerator_m13354_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13354(__this, method) (( Enumerator_t2213  (*) (List_1_t162 *, const MethodInfo*))List_1_GetEnumerator_m13354_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13356_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m13356(__this, ___item, method) (( int32_t (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_IndexOf_m13356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13358_gshared (List_1_t162 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13358(__this, ___start, ___delta, method) (( void (*) (List_1_t162 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13358_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13360_gshared (List_1_t162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13360(__this, ___index, method) (( void (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13360_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13362_gshared (List_1_t162 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m13362(__this, ___index, ___item, method) (( void (*) (List_1_t162 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m13362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13364_gshared (List_1_t162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13364(__this, ___collection, method) (( void (*) (List_1_t162 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13364_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m13366_gshared (List_1_t162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m13366(__this, ___item, method) (( bool (*) (List_1_t162 *, Object_t *, const MethodInfo*))List_1_Remove_m13366_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13368_gshared (List_1_t162 * __this, Predicate_1_t2219 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13368(__this, ___match, method) (( int32_t (*) (List_1_t162 *, Predicate_1_t2219 *, const MethodInfo*))List_1_RemoveAll_m13368_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13370_gshared (List_1_t162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13370(__this, ___index, method) (( void (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m13372_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_Reverse_m13372(__this, method) (( void (*) (List_1_t162 *, const MethodInfo*))List_1_Reverse_m13372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m13374_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_Sort_m13374(__this, method) (( void (*) (List_1_t162 *, const MethodInfo*))List_1_Sort_m13374_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13376_gshared (List_1_t162 * __this, Comparison_1_t2225 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13376(__this, ___comparison, method) (( void (*) (List_1_t162 *, Comparison_1_t2225 *, const MethodInfo*))List_1_Sort_m13376_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t140* List_1_ToArray_m13378_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_ToArray_m13378(__this, method) (( ObjectU5BU5D_t140* (*) (List_1_t162 *, const MethodInfo*))List_1_ToArray_m13378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m13380_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13380(__this, method) (( void (*) (List_1_t162 *, const MethodInfo*))List_1_TrimExcess_m13380_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13382_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13382(__this, method) (( int32_t (*) (List_1_t162 *, const MethodInfo*))List_1_get_Capacity_m13382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13384_gshared (List_1_t162 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13384(__this, ___value, method) (( void (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13384_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m13386_gshared (List_1_t162 * __this, const MethodInfo* method);
#define List_1_get_Count_m13386(__this, method) (( int32_t (*) (List_1_t162 *, const MethodInfo*))List_1_get_Count_m13386_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m13388_gshared (List_1_t162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13388(__this, ___index, method) (( Object_t * (*) (List_1_t162 *, int32_t, const MethodInfo*))List_1_get_Item_m13388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13390_gshared (List_1_t162 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m13390(__this, ___index, ___value, method) (( void (*) (List_1_t162 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m13390_gshared)(__this, ___index, ___value, method)
