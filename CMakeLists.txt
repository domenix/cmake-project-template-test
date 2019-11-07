cmake_minimum_required(VERSION 3.2)
project(example_software)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(CALCULATOR_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(CALCULATOR_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(CALCULATOR_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

#set(DIVISION_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/division)
#set(ADDITION_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/addition)

include_directories(${CALCULATOR_INSTALL_INCLUDE_DIR})
#include_directories(${DIVISION_HEADERS_DIR})
#include_directories(${ADDITION_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(test)


