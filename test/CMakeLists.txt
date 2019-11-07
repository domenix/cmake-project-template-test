cmake_minimum_required(VERSION 3.2)
project(calculator_tests)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(lib/googletest)

include_directories(${DIVISION_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/calculator_tests.cpp)

add_executable(calculator_tests ${SOURCE_FILES})
target_link_libraries(calculator_tests division gtest)
install(TARGETS calculator_tests DESTINATION bin)

