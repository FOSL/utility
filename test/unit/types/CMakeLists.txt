include(SimpleFOSLProjectTest)

find_package(FOSL
	COMPONENTS utility
	REQUIRED
)

project(types)

add_executable(types)
target_sources(types
	PRIVATE
		${PROJECT_SOURCE_DIR}/main.cpp
)
target_link_libraries(types
	PRIVATE
		FOSL::utility
)
