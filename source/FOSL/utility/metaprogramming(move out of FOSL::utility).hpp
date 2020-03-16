#ifndef _FOSL_UTILITY_METAPROGRAMMING_HPP_
#define _FOSL_UTILITY_METAPROGRAMMING_HPP_

#define LOOP for (;;)

#define for_each_in_pack(operation)                                            \
{                                                                              \
	using expand_variadic_pack = int[];                                        \
	(void)expand_variadic_pack{ 0, ((operation), void(), 0)... };              \
}

#define generate_operation_accumulate_all(operation, accumulator_operator)     \
template <typename ...value_ts>                                                \
constexpr auto operation##_accumulate_all(value_ts... value)                   \
{                                                                              \
	auto result = 0;                                                           \
												                    		   \
	for_each_in_pack(result accumulator_operator value)                        \
							                                                   \
	return result;                                                             \
}

namespace FOSL
{
	namespace utility
	{
		generate_operation_accumulate_all(bitor,  |=)
		generate_operation_accumulate_all(bitand, &=)
		generate_operation_accumulate_all(bitxor, ^=)
	}
}

#endif
