#include "example_9_matrix.h"
#include "pybind_matrix.h"

Matrix<double> matrixMul(const Matrix<double>& A, const Matrix<double>& B){
    if (A.shape() != B.shape())
        throw std::length_error("Matrix 'A' and 'B' are inconsistent");

    Matrix<double> ret(A.shape());

    for (int i=0; i < A.size(); i++)
        ret[i] = A[i] * B[i];

    return ret;
}

