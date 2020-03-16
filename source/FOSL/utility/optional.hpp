#ifndef _FOSL_UTILITY_OPTIONAL_HPP_
#define _FOSL_UTILITY_OPTIONAL_HPP_

namespace FOSL::utility
{
	template <typename T>
	class optional
	{
	public:
		optional(void) = default;
		optional(T value) : value(value), has_value(true) {}

	public:
		bool has_value = false;
		T value;

	public:
		T& operator *(void) { return value;     }
		operator bool(void) { return has_value; }
	};
}

#endif
