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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t435;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1094;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3169;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3170;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2293;
// System.Int32[]
struct Int32U5BU5D_t158;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2299;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m5853_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1__ctor_m5853(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1__ctor_m5853_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m5798_gshared (List_1_t435 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m5798(__this, ___collection, method) (( void (*) (List_1_t435 *, Object_t*, const MethodInfo*))List_1__ctor_m5798_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14342_gshared (List_1_t435 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14342(__this, ___capacity, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1__ctor_m14342_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14343_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14343(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14343_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14344_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14344(__this, method) (( Object_t* (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14344_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14345_gshared (List_1_t435 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14345(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t435 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14346_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14346(__this, method) (( Object_t * (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14347_gshared (List_1_t435 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14347(__this, ___item, method) (( int32_t (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14347_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14348_gshared (List_1_t435 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14348(__this, ___item, method) (( bool (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14348_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14349_gshared (List_1_t435 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14349(__this, ___item, method) (( int32_t (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14350_gshared (List_1_t435 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14350(__this, ___index, ___item, method) (( void (*) (List_1_t435 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14350_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14351_gshared (List_1_t435 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14351(__this, ___item, method) (( void (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14351_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14352_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14352(__this, method) (( bool (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14353_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14353(__this, method) (( bool (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14353_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14354_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14354(__this, method) (( Object_t * (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14355_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14355(__this, method) (( bool (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14356_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14356(__this, method) (( bool (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14356_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14357_gshared (List_1_t435 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14357(__this, ___index, method) (( Object_t * (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14358_gshared (List_1_t435 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14358(__this, ___index, ___value, method) (( void (*) (List_1_t435 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14359_gshared (List_1_t435 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14359(__this, ___item, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_Add_m14359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14360_gshared (List_1_t435 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14360(__this, ___newCount, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14360_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14361_gshared (List_1_t435 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14361(__this, ___collection, method) (( void (*) (List_1_t435 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14361_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14362_gshared (List_1_t435 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14362(__this, ___enumerable, method) (( void (*) (List_1_t435 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14362_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3698_gshared (List_1_t435 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3698(__this, ___collection, method) (( void (*) (List_1_t435 *, Object_t*, const MethodInfo*))List_1_AddRange_m3698_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2293 * List_1_AsReadOnly_m14363_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14363(__this, method) (( ReadOnlyCollection_1_t2293 * (*) (List_1_t435 *, const MethodInfo*))List_1_AsReadOnly_m14363_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14364_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_Clear_m14364(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1_Clear_m14364_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14365_gshared (List_1_t435 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14365(__this, ___item, method) (( bool (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_Contains_m14365_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14366_gshared (List_1_t435 * __this, Int32U5BU5D_t158* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14366(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t435 *, Int32U5BU5D_t158*, int32_t, const MethodInfo*))List_1_CopyTo_m14366_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14367_gshared (List_1_t435 * __this, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_Find_m14367(__this, ___match, method) (( int32_t (*) (List_1_t435 *, Predicate_1_t2299 *, const MethodInfo*))List_1_Find_m14367_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14368_gshared (Object_t * __this /* static, unused */, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14368(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2299 *, const MethodInfo*))List_1_CheckMatch_m14368_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14369_gshared (List_1_t435 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14369(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t435 *, int32_t, int32_t, Predicate_1_t2299 *, const MethodInfo*))List_1_GetIndex_m14369_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1010  List_1_GetEnumerator_m5799_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m5799(__this, method) (( Enumerator_t1010  (*) (List_1_t435 *, const MethodInfo*))List_1_GetEnumerator_m5799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14370_gshared (List_1_t435 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14370(__this, ___item, method) (( int32_t (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_IndexOf_m14370_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14371_gshared (List_1_t435 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14371(__this, ___start, ___delta, method) (( void (*) (List_1_t435 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14371_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14372_gshared (List_1_t435 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14372(__this, ___index, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14372_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14373_gshared (List_1_t435 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14373(__this, ___index, ___item, method) (( void (*) (List_1_t435 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14373_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14374_gshared (List_1_t435 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14374(__this, ___collection, method) (( void (*) (List_1_t435 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14374_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14375_gshared (List_1_t435 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14375(__this, ___item, method) (( bool (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_Remove_m14375_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14376_gshared (List_1_t435 * __this, Predicate_1_t2299 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14376(__this, ___match, method) (( int32_t (*) (List_1_t435 *, Predicate_1_t2299 *, const MethodInfo*))List_1_RemoveAll_m14376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14377_gshared (List_1_t435 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14377(__this, ___index, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14377_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14378_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_Reverse_m14378(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1_Reverse_m14378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14379_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_Sort_m14379(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1_Sort_m14379_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14380_gshared (List_1_t435 * __this, Comparison_1_t2303 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14380(__this, ___comparison, method) (( void (*) (List_1_t435 *, Comparison_1_t2303 *, const MethodInfo*))List_1_Sort_m14380_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t158* List_1_ToArray_m14381_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_ToArray_m14381(__this, method) (( Int32U5BU5D_t158* (*) (List_1_t435 *, const MethodInfo*))List_1_ToArray_m14381_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14382_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14382(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1_TrimExcess_m14382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14383_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14383(__this, method) (( int32_t (*) (List_1_t435 *, const MethodInfo*))List_1_get_Capacity_m14383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14384_gshared (List_1_t435 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14384(__this, ___value, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14384_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14385_gshared (List_1_t435 * __this, const MethodInfo* method);
#define List_1_get_Count_m14385(__this, method) (( int32_t (*) (List_1_t435 *, const MethodInfo*))List_1_get_Count_m14385_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14386_gshared (List_1_t435 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14386(__this, ___index, method) (( int32_t (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_get_Item_m14386_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14387_gshared (List_1_t435 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14387(__this, ___index, ___value, method) (( void (*) (List_1_t435 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14387_gshared)(__this, ___index, ___value, method)
