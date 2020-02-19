#ifndef _FOSL_UTILITY_HPP_
#define _FOSL_UTILITY_HPP_

#ifdef _WIN32
#	include <windows.h>
#elif defined __unix__
#	include <unistd.h>
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>
#include <string.h>
#include <inttypes.h>

#include "FOSL/utility/types.h"
#include "FOSL/utility/assert.h"
#include "FOSL/utility/metaprogramming.hpp"
#include "FOSL/utility/bits.hpp"
#include "FOSL/utility/math.hpp"

namespace FOSL
{
	namespace utility
	{
		constexpr u8 BIN =  2;
		constexpr u8 OCT =  8;
		constexpr u8 DEC = 10;
		constexpr u8 HEX = 16;
	}
}

#endif
