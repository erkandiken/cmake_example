#pragma once
#include <pybind11/eigen.h>
#include<Eigen/LU>

class CustomVectorXd{
    private:
        Eigen::VectorXd m_data;

    public:
        CustomVectorXd(const Eigen::VectorXd& data);
        Eigen::VectorXd mul(double factor=1.0);    
};

Eigen::VectorXi trans(const Eigen::VectorXi&);
