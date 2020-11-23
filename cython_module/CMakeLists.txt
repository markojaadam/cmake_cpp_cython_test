cmake_minimum_required(VERSION 3.15)
project(wrapper)

set(CMAKE_CXX_STANDARD 17)
find_package(PythonExtensions REQUIRED)
find_package(Cython REQUIRED)


add_cython_target(wrapper CXX PY3)
add_library(wrapper MODULE ${wrapper})
target_link_libraries(wrapper cpp-module-static)
python_extension_module(wrapper)

install(TARGETS wrapper LIBRARY DESTINATION wrapper)