cmake_minimum_required(VERSION 3.4...3.19)
project(cppmodules)

include_directories(includes)
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")

# generate python module
add_subdirectory(pybind11)
pybind11_add_module(cpp_examples ${SOURCES})

# TODO: this is only required for soem examples, not for all!
find_package( PkgConfig )
pkg_check_modules( EIGEN3 REQUIRED eigen3 )
include_directories( ${EIGEN3_INCLUDE_DIRS} )

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(cpp_examples PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
