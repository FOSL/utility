cmake_minimum_required(VERSION 3.13)

project(example)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(CMAKE_CXX_STANDARD 17)

if(CMAKE_COMPILER_IS_GNUCC)
	option(ENABLE_COVERAGE "Enable coverage reporting for gcc/clang" FALSE)
endif()

if(CMAKE_COMPILER_IS_GNUCC)
	add_compile_options(-O3 -Ofast)
	add_compile_options(-Wall -Wextra -Wpedantic)
	if(CMAKE_COMPILER_IS_GNUCXX)
		add_compile_options(-Wno-non-template-friend)
	endif()
	if(CMAKE_BUILD_TYPE EQUAL "Debug")
		add_compile_options(-ggdb3)
	endif()
	if(ENABLE_COVERAGE)
		add_compile_options(--coverage -O0)
		add_link_options(--coverage)
	endif()
elseif(MSVC)
	add_compile_options(/W4)
endif()

add_subdirectory(library)
add_subdirectory(project)
