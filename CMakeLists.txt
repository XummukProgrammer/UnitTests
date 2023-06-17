cmake_minimum_required(VERSION 3.7)

project(UnitTests)

set(CMAKE_CXX_STANDARD 17)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT UnitTestsRun)

include(cmake/src.cmake)

# UnitTests
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/src" FILES ${FILES_HEADERS} ${FILES_SOURCES})
add_library(UnitTests ${FILES_HEADERS} ${FILES_SOURCES})
target_include_directories(UnitTests PUBLIC src)

# Test run
add_executable(UnitTestsRun ${FILES_EXECUTABLE})
target_link_libraries(UnitTestsRun PRIVATE UnitTests)

set(BIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/bin/$<$<BOOL:FALSE>:>")

set_target_properties(UnitTestsRun PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
	DEBUG_POSTFIX "_d"
	CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON
)
