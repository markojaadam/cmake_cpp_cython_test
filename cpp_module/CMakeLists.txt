cmake_minimum_required(VERSION 3.15)
project(cpp-module-static)

set(CMAKE_CXX_STANDARD 17)

set (SRC cpp_module.cpp cpp_module.hpp)
add_library(cpp-module-static STATIC ${SRC})
add_executable(test test.cpp)