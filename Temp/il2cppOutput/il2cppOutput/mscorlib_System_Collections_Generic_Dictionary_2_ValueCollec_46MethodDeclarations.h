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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2834;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2825;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t3252;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Object
struct Object_t;
// System.UInt16[]
struct UInt16U5BU5D_t1342;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m21754_gshared (ValueCollection_t2834 * __this, Dictionary_2_t2825 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m21754(__this, ___dictionary, method) (( void (*) (ValueCollection_t2834 *, Dictionary_2_t2825 *, const MethodInfo*))ValueCollection__ctor_m21754_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21755_gshared (ValueCollection_t2834 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21755(__this, ___item, method) (( void (*) (ValueCollection_t2834 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21755_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21756_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21756(__this, method) (( void (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21756_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21757_gshared (ValueCollection_t2834 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21757(__this, ___item, method) (( bool (*) (ValueCollection_t2834 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21757_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21758_gshared (ValueCollection_t2834 * __this, uint16_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21758(__this, ___item, method) (( bool (*) (ValueCollection_t2834 *, uint16_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21758_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21759_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21759(__this, method) (( Object_t* (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21759_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m21760_gshared (ValueCollection_t2834 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m21760(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2834 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21760_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21761_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21761(__this, method) (( Object_t * (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21761_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21762_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21762(__this, method) (( bool (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21763_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21763(__this, method) (( bool (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21763_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m21764_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m21764(__this, method) (( Object_t * (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21764_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m21765_gshared (ValueCollection_t2834 * __this, UInt16U5BU5D_t1342* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m21765(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2834 *, UInt16U5BU5D_t1342*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21765_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2835  ValueCollection_GetEnumerator_m21766_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m21766(__this, method) (( Enumerator_t2835  (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_GetEnumerator_m21766_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m21767_gshared (ValueCollection_t2834 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m21767(__this, method) (( int32_t (*) (ValueCollection_t2834 *, const MethodInfo*))ValueCollection_get_Count_m21767_gshared)(__this, method)
