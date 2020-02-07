#ifndef _FOSL_UTILITY_BITS_HPP_
#define _FOSL_UTILITY_BITS_HPP_

#define BIT(index) (1 << index)

#define SET(   value, index) (value |=  BIT(index))
#define CLEAR( value, index) (value &= ~BIT(index))
#define TOOGLE(value, index) (value ^=  BIT(index))

#define IS_SET(  value, index) (  value & BIT(index) )
#define IS_CLEAR(value, index) (!(value & BIT(index)))

#define BIN =  2,
#define OCT =  8,
#define DEC = 10,
#define HEX = 16,

namespace FOSL
{
	namespace utility
	{
		namespace bits
		{
			inline bool const ON  = true;
			inline bool const OFF = false;

			inline bool const ENABLE  = true;
			inline bool const DISABLE = false;

			inline bool const OK     = true;
			inline bool const FAILED = false;

			inline bool const HIGH = true;
			inline bool const LOW  = false;

			inline bool const ACK  = true;
			inline bool const NACK = false;
		}
	}
}

#endif
