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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1352;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1161;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1353;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1253;
// System.Security.Cryptography.Oid
struct Oid_t1354;
// System.Byte[]
struct ByteU5BU5D_t808;
// System.Security.Cryptography.DSA
struct DSA_t1162;
// System.Security.Cryptography.RSA
struct RSA_t1155;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m7331 (PublicKey_t1352 * __this, X509Certificate_t1161 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1353 * PublicKey_get_EncodedKeyValue_m7332 (PublicKey_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1353 * PublicKey_get_EncodedParameters_m7333 (PublicKey_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1253 * PublicKey_get_Key_m7334 (PublicKey_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1354 * PublicKey_get_Oid_m7335 (PublicKey_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t808* PublicKey_GetUnsignedBigInteger_m7336 (Object_t * __this /* static, unused */, ByteU5BU5D_t808* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1162 * PublicKey_DecodeDSA_m7337 (Object_t * __this /* static, unused */, ByteU5BU5D_t808* ___rawPublicKey, ByteU5BU5D_t808* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1155 * PublicKey_DecodeRSA_m7338 (Object_t * __this /* static, unused */, ByteU5BU5D_t808* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
