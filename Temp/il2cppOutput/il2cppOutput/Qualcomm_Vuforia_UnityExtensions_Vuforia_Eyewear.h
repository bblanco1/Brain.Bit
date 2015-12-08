#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Eyewear
struct Eyewear_t777;
// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t741;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t744;

#include "mscorlib_System_Object.h"

// Vuforia.Eyewear
struct  Eyewear_t777  : public Object_t
{
	// Vuforia.EyewearCalibrationProfileManager Vuforia.Eyewear::mProfileManager
	EyewearCalibrationProfileManager_t741 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.Eyewear::mCalibrator
	EyewearUserCalibrator_t744 * ___mCalibrator_2;
};
struct Eyewear_t777_StaticFields{
	// Vuforia.Eyewear Vuforia.Eyewear::mInstance
	Eyewear_t777 * ___mInstance_0;
};
