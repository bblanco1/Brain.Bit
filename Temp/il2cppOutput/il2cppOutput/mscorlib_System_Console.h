#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1471;
// System.IO.TextReader
struct TextReader_t1579;
// System.Text.Encoding
struct Encoding_t1271;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t1470  : public Object_t
{
};
struct Console_t1470_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1471 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1471 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1579 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1271 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1271 * ___outputEncoding_4;
};
