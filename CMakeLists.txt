# Simplification {{{
	set(CMAKE_MODULE_PATH
		"${CMAKE_MODULE_PATH}"
		"${CMAKE_CURRENT_SOURCE_DIR}/cmake/module/CMake_deployment/source")
	include(SimpleFOSLProject)
# }}}

project(utility # {{{
	VERSION 0.1.0.0
	LANGUAGES C CXX
) # }}}
add_library(utility)
target_sources(utility # {{{
	PUBLIC
		${PROJECT_SOURCE_DIR}/FOSL/utility.cpp
		${PROJECT_SOURCE_DIR}/FOSL/utility.hpp
		${PROJECT_SOURCE_DIR}/FOSL/utility/assert.h
		${PROJECT_SOURCE_DIR}/FOSL/utility/math.hpp
		${PROJECT_SOURCE_DIR}/FOSL/utility/types.h
) # }}}
target_include_directories(${PROJECT_NAME} # {{{
) # }}}
target_link_libraries(utility # {{{
) # }}}

# Installation {{{
if(FOSL_UTILITY_INSTALL)
	install_project()
endif() # }}}
# Testing {{{
if(${UPPERCASE_PROJECT_NAMESPACE}_${UPPERCASE_PROJECT_COMPONENT}_BUILD_TESTS)
	include("./tests.cmake")
	add_subdirectory(test)
endif() # }}}
