project(types)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")

add_executable(
	${PROJECT_NAME}.elf

	${PROJECT_SOURCE_DIR}/main.cpp
)

target_link_libraries(
	${PROJECT_NAME}.elf PRIVATE

	FOSL-utility
)
