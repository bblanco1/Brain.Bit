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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t3014;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2662;
// System.Object[]
struct ObjectU5BU5D_t140;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2362;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m24702_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m24702(__this, method) (( void (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1__ctor_m24702_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m24704_gshared (HashSet_1_t3014 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m24704(__this, ___info, ___context, method) (( void (*) (HashSet_1_t3014 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))HashSet_1__ctor_m24704_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24706_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24706(__this, method) (( Object_t* (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24706_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24708_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24708(__this, method) (( bool (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24708_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24710_gshared (HashSet_1_t3014 * __this, ObjectU5BU5D_t140* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24710(__this, ___array, ___index, method) (( void (*) (HashSet_1_t3014 *, ObjectU5BU5D_t140*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24710_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24712_gshared (HashSet_1_t3014 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24712(__this, ___item, method) (( void (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24712_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24714_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24714(__this, method) (( Object_t * (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m24714_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m24716_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m24716(__this, method) (( int32_t (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_get_Count_m24716_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m24718_gshared (HashSet_1_t3014 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m24718(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t3014 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m24718_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m24720_gshared (HashSet_1_t3014 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m24720(__this, ___size, method) (( void (*) (HashSet_1_t3014 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m24720_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m24722_gshared (HashSet_1_t3014 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m24722(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t3014 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m24722_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m24724_gshared (HashSet_1_t3014 * __this, ObjectU5BU5D_t140* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m24724(__this, ___array, ___index, method) (( void (*) (HashSet_1_t3014 *, ObjectU5BU5D_t140*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m24724_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m24726_gshared (HashSet_1_t3014 * __this, ObjectU5BU5D_t140* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m24726(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t3014 *, ObjectU5BU5D_t140*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m24726_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m24728_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m24728(__this, method) (( void (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_Resize_m24728_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m24730_gshared (HashSet_1_t3014 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m24730(__this, ___index, method) (( int32_t (*) (HashSet_1_t3014 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m24730_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m24732_gshared (HashSet_1_t3014 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m24732(__this, ___item, method) (( int32_t (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m24732_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m24733_gshared (HashSet_1_t3014 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m24733(__this, ___item, method) (( bool (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_Add_m24733_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m24735_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m24735(__this, method) (( void (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_Clear_m24735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m24737_gshared (HashSet_1_t3014 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m24737(__this, ___item, method) (( bool (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m24737_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m24739_gshared (HashSet_1_t3014 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m24739(__this, ___item, method) (( bool (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m24739_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m24741_gshared (HashSet_1_t3014 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m24741(__this, ___info, ___context, method) (( void (*) (HashSet_1_t3014 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))HashSet_1_GetObjectData_m24741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m24743_gshared (HashSet_1_t3014 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m24743(__this, ___sender, method) (( void (*) (HashSet_1_t3014 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m24743_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3018  HashSet_1_GetEnumerator_m24744_gshared (HashSet_1_t3014 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m24744(__this, method) (( Enumerator_t3018  (*) (HashSet_1_t3014 *, const MethodInfo*))HashSet_1_GetEnumerator_m24744_gshared)(__this, method)
