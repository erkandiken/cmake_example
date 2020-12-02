#pragma once
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

std::vector<int> multiplyArrayByTen(const std::vector<double>&);
py::array_t<int> py_multiply(py::array_t<double, py::array::c_style | py::array::forcecast>);