project(FOSL-utility)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")
set(PROJECT_BINARY_DIR "${PROJECT_BINARY_DIR}/source")

add_library(
	${PROJECT_NAME}

	${PROJECT_SOURCE_DIR}/FOSL/utility.cpp
	${PROJECT_SOURCE_DIR}/FOSL/utility.hpp

	${PROJECT_SOURCE_DIR}/FOSL/utility/assert.h
	${PROJECT_SOURCE_DIR}/FOSL/utility/bits.hpp
	${PROJECT_SOURCE_DIR}/FOSL/utility/math.hpp
	${PROJECT_SOURCE_DIR}/FOSL/utility/types.h
	${PROJECT_SOURCE_DIR}/FOSL/utility/metaprogramming.hpp
	${PROJECT_SOURCE_DIR}/FOSL/utility/optional.hpp
)

target_include_directories(
	${PROJECT_NAME} PUBLIC

	${PROJECT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
)

add_subdirectory(test)
add_test(NAME types COMMAND types.elf)
