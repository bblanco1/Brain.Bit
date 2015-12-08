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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1551;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1103;
// System.Byte[]
struct ByteU5BU5D_t808;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m9226 (MACAlgorithm_t1551 * __this, SymmetricAlgorithm_t1103 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m9227 (MACAlgorithm_t1551 * __this, ByteU5BU5D_t808* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m9228 (MACAlgorithm_t1551 * __this, ByteU5BU5D_t808* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t808* MACAlgorithm_Final_m9229 (MACAlgorithm_t1551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
