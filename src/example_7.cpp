#include <pybind11/pybind11.h>

double mul(double a, double b){
    return a * b;  
}

int mul(int a, int b){
    return a * b;  
}