#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include<Eigen/LU>
#include "example_6.h"


CustomVectorXd::CustomVectorXd(const Eigen::VectorXd& data): m_data(data) {}

Eigen::VectorXd CustomVectorXd::mul(double factor){
    return m_data * factor;
}

// a function that has nothing to do with the class
// the point is to show how one can return a copy "Eigen::VectorXd"
Eigen::VectorXi trans(const Eigen::VectorXi& array){
    auto N = array.size();
    Eigen::VectorXi out(N);
    for(auto i=0; i<N; i++)
        out[array.size() - i - 1] = array[i];
    return out;
}