cmake_minimum_required(VERSION 3.4...3.18)

project(pybind11_cmake_example)

add_subdirectory(pybind11)

pybind11_add_module(pybind11_cmake_example
    src/math.cpp
    bindings/math_py.cpp
)
target_include_directories(pybind11_cmake_example
  PRIVATE
    include
)