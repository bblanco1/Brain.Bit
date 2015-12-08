#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// LoadLevel
struct LoadLevel_t166;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_LoadLevel.h"
#include "AssemblyU2DUnityScript_LoadLevelMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "mscorlib_System_String.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadLevel::.ctor()
extern "C" void LoadLevel__ctor_m457 (LoadLevel_t166 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m197(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadLevel::LoadScene()
extern "C" void LoadLevel_LoadScene_m458 (LoadLevel_t166 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___Destination_2);
		Application_LoadLevel_m460(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadLevel::Main()
extern "C" void LoadLevel_Main_m459 (LoadLevel_t166 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
