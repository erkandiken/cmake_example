#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <Eigen/LU>


Eigen::MatrixXd mul(const Eigen::MatrixXd& xs, double fac){
    return fac * xs;
}

Eigen::MatrixXi mul(const Eigen::MatrixXi& xs, int fac){
    return fac * xs;
}