project(assert)

set(PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}/source)

add_executable(
	${PROJECT_NAME}.elf

	${PROJECT_SOURCE_DIR}/main.cpp
)

target_include_directories(
	${PROJECT_NAME}.elf PRIVATE

	${PROJECT_SOURCE_DIR}
)

find_package(FOSL
	COMPONENTS utility
	REQUIRED
)

target_link_libraries(
	${PROJECT_NAME}.elf

	FOSL::utility
)
