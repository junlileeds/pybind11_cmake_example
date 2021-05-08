#include <pybind11/pybind11.h>

#include "math.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pybind11_cmake_example, m) {
    m.doc() = R"pbdoc(
        Pybind11 CMake example plugin
        -----------------------------

        .. currentmodule:: pybind11_cmake_example

        .. autosummary::
            :toctree: _generate

            add
            subtract
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("subtract", &subtract, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");
}