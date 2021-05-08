# pybind11_cmake_example for learning pybind11

An example [pybind11](https://github.com/pybind/pybind11.git) module built with a CMake-based build system. This is useful for C++ codebases that have an existing CMake project structure.

## Prerequisites

**On Linux**

* A compiler with C++11 support
* CMake >=3.4

## Installation
```bash
git clone --recursive https://github.com/junlileeds/pybind11_cmake_example.git
pip3 install ./pybind11_cmake_example
```

## Test call
```bash
python3
import pybind11_cmake_example
pybind11_cmake_example.add(1,2)
pybind11_cmake_example.subtract(2,1)
```
