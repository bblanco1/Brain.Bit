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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1668;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1670;
// System.Type[]
struct TypeU5BU5D_t439;
// System.Exception
struct Exception_t142;
// System.Reflection.AssemblyName
struct AssemblyName_t1715;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m10334 (AssemblyBuilder_t1668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1670* AssemblyBuilder_GetModulesInternal_m10335 (AssemblyBuilder_t1668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t439* AssemblyBuilder_GetTypes_m10336 (AssemblyBuilder_t1668 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m10337 (AssemblyBuilder_t1668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t142 * AssemblyBuilder_not_supported_m10338 (AssemblyBuilder_t1668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1715 * AssemblyBuilder_UnprotectedGetName_m10339 (AssemblyBuilder_t1668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
