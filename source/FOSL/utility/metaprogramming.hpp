#ifndef _FOSL_UTILITY_METAPROGRAMMING_HPP_
#define _FOSL_UTILITY_METAPROGRAMMING_HPP_

#define FOR_EACH_IN_PACK(operation) \
	using expand_variadic_pack = int[];                                        \
	(void)expand_variadic_pack{ 0, ((operation), void(), 0)... };

#define ACCUMULATE_ALL_IN_PACK(operation, accumulator_operator)            \
	template <typename ...value_ts>                                            \
	constexpr auto operation##_all(value_ts... value)                          \
	{                                                                          \
		auto result = 0;                                                       \
                                                                               \
		FOR_EACH_IN_PACK(result |= value)                                      \
                                                                               \
		return result;                                                         \
	}

namespace FOSL
{
	namespace utility
	{
		ACCUMULATE_ALL_IN_PACK(bitor,  |=)
		ACCUMULATE_ALL_IN_PACK(bitand, &=)
		ACCUMULATE_ALL_IN_PACK(bitxor, ^=)
	}
}

#endif
