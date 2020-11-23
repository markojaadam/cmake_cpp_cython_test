cmake_minimum_required(VERSION 3.15)
project(cmake_cython_test)

set(CMAKE_CXX_STANDARD 17)
find_package(PythonExtensions REQUIRED)
find_package(Cython REQUIRED)

set(CPP_MODULE_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/cpp_module")
set(CYTHON_MODULE_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/cython_module")
set(CPP_WRAPPER_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/cpp_wrapper/include")
include_directories(BEFORE
        "${CPP_MODULE_INCLUDE_DIR}"
        "${CYTHON_MODULE_INCLUDE_DIR}"
        )
add_subdirectory("${CPP_MODULE_INCLUDE_DIR}")
add_subdirectory("${CYTHON_MODULE_INCLUDE_DIR}")

target_link_libraries(wrapper cpp-module-static)
# install(TARGETS cpp-module-static LIBRARY DESTINATION cpp-module-static)
# install(TARGETS wrapper LIBRARY DESTINATION wrapper)
