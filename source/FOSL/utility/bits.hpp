#ifndef _FOSL_UTILITY_BITS_HPP_
#define _FOSL_UTILITY_BITS_HPP_

#define BIT(index) (1 << index)

#define SET(   value, index) (value |=  BIT(index))
#define CLEAR( value, index) (value &= ~BIT(index))
#define TOOGLE(value, index) (value ^=  BIT(index))

#define IS_SET(  value, index) (  value & BIT(index) )
#define IS_CLEAR(value, index) (!(value & BIT(index)))

namespace FOSL
{
	namespace utility
	{
		// template <typename index_t>
		// constexpr auto BIT(index_t index) { return 1 << index; }

		template <typename ...index_ts>
		constexpr auto BITS(index_ts... index) { return bitor_all(BIT(index)...); }

		constexpr bool ON  = true;
		constexpr bool OFF = false;

		constexpr bool ENABLE  = true;
		constexpr bool DISABLE = false;

		constexpr bool OK     = true;
		constexpr bool FAILED = false;

		constexpr bool HIGH = true;
		constexpr bool LOW  = false;

		constexpr bool ACK  = true;
		constexpr bool NACK = false;
	}
}

#endif
