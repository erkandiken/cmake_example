#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <Eigen/LU>

// N.B. this would equally work with Eigen-types that are not predefined. For example replacing
// all occurrences of "Eigen::MatrixXd" with "MatD", with the following definition:
//
//  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatD;

Eigen::MatrixXd inv(const Eigen::MatrixXd& xs){
    return xs.inverse();
}

double det(const Eigen::MatrixXd& xs){
    return xs.determinant();
}