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

// System.ResolveEventHandler
struct ResolveEventHandler_t2038;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1468;
// System.ResolveEventArgs
struct ResolveEventArgs_t2094;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m13229 (ResolveEventHandler_t2038 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1468 * ResolveEventHandler_Invoke_m13230 (ResolveEventHandler_t2038 * __this, Object_t * ___sender, ResolveEventArgs_t2094 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1468 * pinvoke_delegate_wrapper_ResolveEventHandler_t2038(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2094 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m13231 (ResolveEventHandler_t2038 * __this, Object_t * ___sender, ResolveEventArgs_t2094 * ___args, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1468 * ResolveEventHandler_EndInvoke_m13232 (ResolveEventHandler_t2038 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
