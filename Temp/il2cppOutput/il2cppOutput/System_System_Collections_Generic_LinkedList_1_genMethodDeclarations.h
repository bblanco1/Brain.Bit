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

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3169;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t1011;
// System.Int32[]
struct Int32U5BU5D_t158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
extern "C" void LinkedList_1__ctor_m5796_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m5796(__this, method) (( void (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1__ctor_m5796_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m21359_gshared (LinkedList_1_t850 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m21359(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t850 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))LinkedList_1__ctor_m21359_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21360_gshared (LinkedList_1_t850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21360(__this, ___value, method) (( void (*) (LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21360_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m21361_gshared (LinkedList_1_t850 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m21361(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t850 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m21361_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21362_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21362(__this, method) (( Object_t* (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21362_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21363_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21363(__this, method) (( Object_t * (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m21363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21364_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21364(__this, method) (( bool (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21364_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21365_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21365(__this, method) (( bool (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m21365_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21366_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21366(__this, method) (( Object_t * (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m21366_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m21367_gshared (LinkedList_1_t850 * __this, LinkedListNode_1_t1011 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m21367(__this, ___node, method) (( void (*) (LinkedList_1_t850 *, LinkedListNode_1_t1011 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m21367_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(T)
extern "C" LinkedListNode_1_t1011 * LinkedList_1_AddLast_m5797_gshared (LinkedList_1_t850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m5797(__this, ___value, method) (( LinkedListNode_1_t1011 * (*) (LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedList_1_AddLast_m5797_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Clear()
extern "C" void LinkedList_1_Clear_m21368_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m21368(__this, method) (( void (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_Clear_m21368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Contains(T)
extern "C" bool LinkedList_1_Contains_m21369_gshared (LinkedList_1_t850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m21369(__this, ___value, method) (( bool (*) (LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedList_1_Contains_m21369_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m21370_gshared (LinkedList_1_t850 * __this, Int32U5BU5D_t158* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m21370(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t850 *, Int32U5BU5D_t158*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m21370_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::Find(T)
extern "C" LinkedListNode_1_t1011 * LinkedList_1_Find_m21371_gshared (LinkedList_1_t850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Find_m21371(__this, ___value, method) (( LinkedListNode_1_t1011 * (*) (LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedList_1_Find_m21371_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2807  LinkedList_1_GetEnumerator_m21372_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m21372(__this, method) (( Enumerator_t2807  (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_GetEnumerator_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m21373_gshared (LinkedList_1_t850 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m21373(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t850 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))LinkedList_1_GetObjectData_m21373_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m21374_gshared (LinkedList_1_t850 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m21374(__this, ___sender, method) (( void (*) (LinkedList_1_t850 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m21374_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Remove(T)
extern "C" bool LinkedList_1_Remove_m21375_gshared (LinkedList_1_t850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m21375(__this, ___value, method) (( bool (*) (LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedList_1_Remove_m21375_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m5950_gshared (LinkedList_1_t850 * __this, LinkedListNode_1_t1011 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m5950(__this, ___node, method) (( void (*) (LinkedList_1_t850 *, LinkedListNode_1_t1011 *, const MethodInfo*))LinkedList_1_Remove_m5950_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m21376_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m21376(__this, method) (( void (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_RemoveLast_m21376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m21377_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m21377(__this, method) (( int32_t (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_get_Count_m21377_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
extern "C" LinkedListNode_1_t1011 * LinkedList_1_get_First_m5805_gshared (LinkedList_1_t850 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m5805(__this, method) (( LinkedListNode_1_t1011 * (*) (LinkedList_1_t850 *, const MethodInfo*))LinkedList_1_get_First_m5805_gshared)(__this, method)
