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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1911;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1909;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1903;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m11511 (ArrayFixupRecord_t1911 * __this, ObjectRecord_t1909 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1909 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m11512 (ArrayFixupRecord_t1911 * __this, ObjectManager_t1903 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
