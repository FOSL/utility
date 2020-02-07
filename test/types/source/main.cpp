#include <FOSL/utility.hpp>

int main(void)
{
	assert(sizeof( s8) ==  8 / 8);
	assert(sizeof(s16) == 16 / 8);
	assert(sizeof(s32) == 32 / 8);
	assert(sizeof(s64) == 64 / 8);

	assert(sizeof( u8) ==  8 / 8);
	assert(sizeof(u16) == 16 / 8);
	assert(sizeof(u32) == 32 / 8);
	assert(sizeof(u64) == 64 / 8);

	assert(sizeof(f32) == 32 / 8);
	assert(sizeof(r32) == 32 / 8);
	assert(sizeof(f64) == 64 / 8);
	assert(sizeof(r64) == 64 / 8);

	return 0;
}
