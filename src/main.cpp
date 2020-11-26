#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "example_1.h"

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

    m.def("modify", &modify, R"pbdoc(
        Multiply all entries of a list by 2.0
        
    )pbdoc");

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
