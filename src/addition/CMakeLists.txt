cmake_minimum_required(VERSION 3.2)
project(addition C CXX)

set(SOURCE_FILES
        addition.h
        addition.cpp
        )

add_library(addition SHARED STATIC ${SOURCE_FILES})

install(TARGETS addition DESTINATION ${CALCULATOR_INSTALL_LIB_DIR})
install(FILES addition.h DESTINATION ${CALCULATOR_INSTALL_INCLUDE_DIR})
