cmake_minimum_required(VERSION 3.2)
project(calculator)

add_subdirectory(division)
add_subdirectory(addition)
set(SOURCE_FILES main.cpp)

add_executable(calculator ${SOURCE_FILES})
target_link_libraries(calculator division)
target_link_libraries(calculator addition)
install(TARGETS calculator DESTINATION ${CALCULATOR_INSTALL_BIN_DIR})
