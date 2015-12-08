#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.WeakReference
struct WeakReference_t1870;

#include "mscorlib_System_Runtime_Remoting_Identity.h"

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t1869  : public Identity_t1861
{
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t1870 * ____proxyReference_7;
};
