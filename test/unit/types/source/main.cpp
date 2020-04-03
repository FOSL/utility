#include <FOSL/utility.hpp>

int main(void)
{
	static_assert(sizeof( s8) ==  8 / 8, "ERROR: typo in library");
	static_assert(sizeof(s16) == 16 / 8, "ERROR: typo in library");
	static_assert(sizeof(s32) == 32 / 8, "ERROR: typo in library");
	static_assert(sizeof(s64) == 64 / 8, "ERROR: typo in library");

	static_assert(sizeof( u8) ==  8 / 8, "ERROR: typo in library");
	static_assert(sizeof(u16) == 16 / 8, "ERROR: typo in library");
	static_assert(sizeof(u32) == 32 / 8, "ERROR: typo in library");
	static_assert(sizeof(u64) == 64 / 8, "ERROR: typo in library");

	static_assert(sizeof(f32) == 32 / 8, "ERROR: typo in library");
	static_assert(sizeof(r32) == 32 / 8, "ERROR: typo in library");
	static_assert(sizeof(f64) == 64 / 8, "ERROR: typo in library");
	static_assert(sizeof(r64) == 64 / 8, "ERROR: typo in library");

	static_assert(sizeof(owner<int*>) == sizeof(int*), "ERROR: owner<T> adds overhead");

	return 0;
}
