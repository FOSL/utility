cmake_minimum_required(VERSION 3.16)

project(example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-non-template-friend")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Ofast")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ggdb3")

add_subdirectory(library)
add_subdirectory(project)
