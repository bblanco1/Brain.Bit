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

// System.IFormatProvider
struct IFormatProvider_t2136;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.SByte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool SByte_System_IConvertible_ToBoolean_m8266 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.SByte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t SByte_System_IConvertible_ToByte_m8267 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.SByte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToChar_m8268 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.SByte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t318  SByte_System_IConvertible_ToDateTime_m8269 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.SByte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1481  SByte_System_IConvertible_ToDecimal_m8270 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.SByte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double SByte_System_IConvertible_ToDouble_m8271 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.SByte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t SByte_System_IConvertible_ToInt16_m8272 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t SByte_System_IConvertible_ToInt32_m8273 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.SByte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t SByte_System_IConvertible_ToInt64_m8274 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t SByte_System_IConvertible_ToSByte_m8275 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.SByte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float SByte_System_IConvertible_ToSingle_m8276 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.SByte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * SByte_System_IConvertible_ToType_m8277 (int8_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.SByte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t SByte_System_IConvertible_ToUInt16_m8278 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.SByte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t SByte_System_IConvertible_ToUInt32_m8279 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.SByte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t SByte_System_IConvertible_ToUInt64_m8280 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.Object)
extern "C" int32_t SByte_CompareTo_m8281 (int8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.Object)
extern "C" bool SByte_Equals_m8282 (int8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::GetHashCode()
extern "C" int32_t SByte_GetHashCode_m8283 (int8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.SByte)
extern "C" int32_t SByte_CompareTo_m8284 (int8_t* __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.SByte)
extern "C" bool SByte_Equals_m8285 (int8_t* __this, int8_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Parse(System.String,System.Boolean,System.SByte&,System.Exception&)
extern "C" bool SByte_Parse_m8286 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int8_t* ___result, Exception_t142 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m8287 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int8_t SByte_Parse_m8288 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
extern "C" bool SByte_TryParse_m8289 (Object_t * __this /* static, unused */, String_t* ___s, int8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString()
extern "C" String_t* SByte_ToString_m8290 (int8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.IFormatProvider)
extern "C" String_t* SByte_ToString_m8291 (int8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String)
extern "C" String_t* SByte_ToString_m8292 (int8_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* SByte_ToString_m8293 (int8_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
