#ifndef _FOSL_UTILITY_ASSERT_H_
#define _FOSL_UTILITY_ASSERT_H_

#include <stdio.h>

#undef assert
#define assert(expression) if (!(expression)) assert_failed(#expression, __FILE__, __LINE__);

extern void assert_failed(char const*expression, char const*file, int line);
#ifndef CUSTOM_ASSERT_FAILED
inline void assert_failed(char const*expression, char const*file, int line)
{
	fprintf(stderr, "\033[0;91;1m"); // RESET;FG_BRIGHT_RED;BOLD
	fprintf(stderr, "%s:%d: ASSERTION `%s' FAILED! ☠ \n", file, line, expression);

	#ifdef HALT_ON_ASSERT_FAILED
		while (true) {}
	#endif
}
#endif

#endif
