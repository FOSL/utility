#ifndef _FOSL_UTILITY_MATH_HPP_
#define _FOSL_UTILITY_MATH_HPP_

#include <inttypes.h>
#include <math.h>

#ifdef MIN
	#warning redefinition of macro: MIN
	#undef MIN
#endif
#define MIN(a, b) (((a) <= (b)) ? (a) : (b))

#ifdef MAX
	#warning redefinition of macro: MAX
	#undef MAX
#endif
#define MAX(a, b) (((a) >= (b)) ? (a) : (b))

#ifdef BETWEEN
	#warning redefinition of macro: BETWEEN
	#undef BETWEEN
#endif
#define BETWEEN(value, lower, upper) ((lower) <= (value) && (value) <= (upper))

namespace FOSL::utility::math
{
	inline int16_t safe_add(int16_t lhs, int16_t rhs)
	{
		if (lhs > 0 && rhs > INT16_MAX - lhs) return INT16_MAX;
		if (lhs < 0 && rhs < INT16_MIN - lhs) return INT16_MIN;
		else                                  return lhs + rhs;
	}

	template <typename output_t, typename input_t>
	output_t safe_cast(input_t value)
	{
		(void) value;
		static_assert(false && sizeof(output_t), "THOSE TYPES ARE NOT SUPPORTED");
		return 0;
	}
	template <>
	inline uint8_t safe_cast<uint8_t>(int16_t value)
	{
		if (value > UINT8_MAX) return UINT8_MAX;
		if (value <         0) return         0;
		else                   return value;
	}
	template <>
	inline uint8_t safe_cast<uint8_t>(int32_t value)
	{
		if (value > UINT8_MAX) return UINT8_MAX;
		if (value <         0) return         0;
		else                   return value;
	}

	inline auto
	map_to(
		float value,
		float input_min,
		float input_max,
		float output_min,
		float output_max
	)-> float
	{
		return (value - input_min) *
		       (output_max - output_min) / (input_max - input_min) +
			   (output_min);
	}

	template <typename output_t, typename input_t>
	output_t map_to_type_limits(input_t value)
	{
		(void) value;
		static_assert(!sizeof(output_t), "THOSE TYPES ARE NOT SUPPORTED");
	}
	template <>
	inline uint8_t map_to_type_limits<uint8_t>(int16_t value)
	{
		return map_to(value, INT16_MIN, INT16_MAX, 0, UINT8_MAX);
	}

	template <typename T, T low, T high>
	T clamp(T value)
	{
		static_assert(high > low, "HIGH VALUE HAS TO BE HIGHER THAN LOW VALUE");
		return (value < low) ? low : (value > high) ? high : value;
	}

	inline float clamp(float low, float high, float value)
	{
		return (value < low) ? low : (value > high) ? high : value;
	}
}

#endif
