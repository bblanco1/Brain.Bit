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

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t1693;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1691;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilderTokenGenerator__ctor_m10509 (ModuleBuilderTokenGenerator_t1693 * __this, ModuleBuilder_t1691 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m10510 (ModuleBuilderTokenGenerator_t1693 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
