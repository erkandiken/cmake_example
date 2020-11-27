#pragma once

#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <Eigen/LU>

Eigen::MatrixXd inv(const Eigen::MatrixXd&);
double det(const Eigen::MatrixXd&);