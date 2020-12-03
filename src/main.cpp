#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "example_1.h"
#include "example_2.h"
#include "example_3.h"
#include "example_4.h"
#include "example_5.h"
#include "example_6.h"
#include "example_7.h"
#include "example_8.h"

//example 9
#include "example_9_matrix.h"
#include "pybind_matrix.h"

//#include "example_10.h"
//#include "example_11.h"

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

    //example 1
    m.def("multiplyByTwo", &multiplyByTwo, R"pbdoc(
        
        Multiply all entries of a list by 2.0
        
    )pbdoc");

     m.def("multiplyByFactor", &multiplyByFactor, R"pbdoc(
        
        Multiply all entries of a list by a factor
        
    )pbdoc");

    //example 2
    m.def("multiplyNestedVectorByTwo", &multiplyNestedVectorByTwo, R"pbdoc(
        
        Multiply all entries of a nested list by 2.0
        
    )pbdoc");

    //example 3
    m.def("multiplyArrayByTen", &py_multiply, R"pbdoc(
        
        "Convert all entries of an 1-D NumPy-array to int and multiply by 10"
        
    )pbdoc");

    //example 4
    //TODO: it does not return the length!
    m.def("length", &py_length, "Calculate the length of an array of vectors");

    //example 5
    m.def("inv", &inv);
    m.def("det", &det);

    //example 6
    m.def("trans", &trans);

    py::class_<CustomVectorXd>(m, "CustomVectorXd")
    .def(py::init<Eigen::VectorXd>())
    .def("mul", &CustomVectorXd::mul, pybind11::arg("factor")=1.0)
    .def("__repr__",
        [] (const CustomVectorXd& a) {
            return "<example_6.CustomVectorXd>";
        }
    );

    //example 7: overloaded functions 
    m.def("mul", py::overload_cast<int   , int   >(&mul));
    m.def("mul", py::overload_cast<double, double>(&mul));

    //example 8
    //TODO: check this !
    // N.B. the order here is crucial, in the reversed order every "int" is converted to a "double"
    m.def("mul", py::overload_cast<const Eigen::MatrixXi &,int   >(&mul) );
    m.def("mul", py::overload_cast<const Eigen::MatrixXd &,double>(&mul) );

    //example 9
    m.def("matrixMul", &matrixMul);

    //example 10
    // py::module sm = m.def_submodule("Type", "Type enumerator");

    // py::enum_<Type::Value>(sm, "Type")
    //     .value("Cat", Type::Cat)
    //     .value("Dog", Type::Dog)
    //     .export_values();
    
    // m.def("whichAnimal", &whichAnimal, py::arg("animal"));

    //example 11
    // py::class_<Animal, PyAnimal>(m, "Animal")
    //     .def(py::init<>())
    //     .def("talk", &Animal::talk);

    // py::class_<Dog, Animal>(m, "Dog")
    //     .def(py::init<>());

    // py::class_<Cat, Animal>(m, "Cat")
    //     .def(py::init<>());

    // m.def("talk", &talk, py::arg("animal") ,py::arg("n_times")=1);

#ifdef VERSION_INFO
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
#else
    m.attr("__version__") = "dev";
#endif
}
