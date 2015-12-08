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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2215;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t140;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2662;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2214;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m13428_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1__ctor_m13428(__this, method) (( void (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1__ctor_m13428_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13429_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13429(__this, method) (( bool (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13429_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m13430_gshared (Collection_1_t2215 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m13430(__this, ___array, ___index, method) (( void (*) (Collection_1_t2215 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m13430_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m13431_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13431(__this, method) (( Object_t * (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m13431_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m13432_gshared (Collection_1_t2215 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m13432(__this, ___value, method) (( int32_t (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m13432_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m13433_gshared (Collection_1_t2215 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m13433(__this, ___value, method) (( bool (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m13433_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m13434_gshared (Collection_1_t2215 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m13434(__this, ___value, method) (( int32_t (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m13434_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m13435_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m13435(__this, ___index, ___value, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m13435_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m13436_gshared (Collection_1_t2215 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m13436(__this, ___value, method) (( void (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m13436_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m13437_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13437(__this, method) (( bool (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m13437_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m13438_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13438(__this, method) (( Object_t * (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m13438_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m13439_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13439(__this, method) (( bool (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m13439_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m13440_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13440(__this, method) (( bool (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m13440_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m13441_gshared (Collection_1_t2215 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m13441(__this, ___index, method) (( Object_t * (*) (Collection_1_t2215 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m13441_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m13442_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m13442(__this, ___index, ___value, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m13442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m13443_gshared (Collection_1_t2215 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m13443(__this, ___item, method) (( void (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_Add_m13443_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m13444_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_Clear_m13444(__this, method) (( void (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_Clear_m13444_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m13445_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m13445(__this, method) (( void (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_ClearItems_m13445_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m13446_gshared (Collection_1_t2215 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m13446(__this, ___item, method) (( bool (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_Contains_m13446_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m13447_gshared (Collection_1_t2215 * __this, ObjectU5BU5D_t140* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m13447(__this, ___array, ___index, method) (( void (*) (Collection_1_t2215 *, ObjectU5BU5D_t140*, int32_t, const MethodInfo*))Collection_1_CopyTo_m13447_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m13448_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m13448(__this, method) (( Object_t* (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_GetEnumerator_m13448_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m13449_gshared (Collection_1_t2215 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m13449(__this, ___item, method) (( int32_t (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m13449_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m13450_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m13450(__this, ___index, ___item, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m13450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m13451_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m13451(__this, ___index, ___item, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m13451_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m13452_gshared (Collection_1_t2215 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m13452(__this, ___item, method) (( bool (*) (Collection_1_t2215 *, Object_t *, const MethodInfo*))Collection_1_Remove_m13452_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m13453_gshared (Collection_1_t2215 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m13453(__this, ___index, method) (( void (*) (Collection_1_t2215 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m13453_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m13454_gshared (Collection_1_t2215 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m13454(__this, ___index, method) (( void (*) (Collection_1_t2215 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m13454_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m13455_gshared (Collection_1_t2215 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m13455(__this, method) (( int32_t (*) (Collection_1_t2215 *, const MethodInfo*))Collection_1_get_Count_m13455_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m13456_gshared (Collection_1_t2215 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m13456(__this, ___index, method) (( Object_t * (*) (Collection_1_t2215 *, int32_t, const MethodInfo*))Collection_1_get_Item_m13456_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m13457_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m13457(__this, ___index, ___value, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m13457_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m13458_gshared (Collection_1_t2215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m13458(__this, ___index, ___item, method) (( void (*) (Collection_1_t2215 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m13458_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m13459_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m13459(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m13459_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m13460_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m13460(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m13460_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m13461_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m13461(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m13461_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m13462_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m13462(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m13462_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m13463_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m13463(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m13463_gshared)(__this /* static, unused */, ___list, method)
