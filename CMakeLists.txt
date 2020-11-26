cmake_minimum_required(VERSION 3.4...3.19)
project(cppmodules)

include_directories(includes)

# generate python module
add_subdirectory(pybind11)
pybind11_add_module(cpp_examples src/main.cpp src/example_1.cpp src/example_2.cpp)

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(cpp_examples PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
