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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t2047;
// System.Reflection.Module
struct Module_t1687;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m13151 (UnitySerializationHolder_t2107 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m13152 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t453 * ___info, StreamingContext_t454  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m13153 (Object_t * __this /* static, unused */, DBNull_t2047 * ___instance, SerializationInfo_t453 * ___info, StreamingContext_t454  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m13154 (Object_t * __this /* static, unused */, Module_t1687 * ___instance, SerializationInfo_t453 * ___info, StreamingContext_t454  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m13155 (UnitySerializationHolder_t2107 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m13156 (UnitySerializationHolder_t2107 * __this, StreamingContext_t454  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
