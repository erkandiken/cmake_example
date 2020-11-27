#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "example_1.h"
#include "example_2.h"
#include "example_3.h"
#include "example_4.h"
#include "example_5.h"
#include "example_6.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(cpp_examples, m) {
    m.doc() = R"pbdoc(
        Examples using pybind11 and cmake
        -----------------------

        .. currentmodule:: cpp_examples

        .. autosummary::
           :toctree: _generate

        modify
    )pbdoc";

    m.def("modify_list", &modify_list, R"pbdoc(
        
        Multiply all entries of a list by 2.0
        
    )pbdoc");

    m.def("modify_nested_list", &modify_nested_list, R"pbdoc(
        
        Multiply all entries of a nested list by 2.0
        
    )pbdoc");

    m.def("multiply", &py_multiply, R"pbdoc(
        
        "Convert all entries of an 1-D NumPy-array to int and multiply by 10"
        
    )pbdoc");

    //TODO: it does not retunr the length!
    m.def("length", &py_length, "Calculate the length of an array of vectors");

    m.def("inv", &inv);

    m.def("det", &det);

    m.def("trans", &trans);

    py::class_<CustomVectorXd>(m, "CustomVectorXd")
    .def(py::init<Eigen::VectorXd>())
    .def("mul", &CustomVectorXd::mul, pybind11::arg("factor")=1.0)
    .def("__repr__",
        [] (const CustomVectorXd& a) {
            return "<example_6.CustomVectorXd>";
        }
    );


#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
