# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(calculator)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the header directory
include_directories(include)
# Add the library directory
link_directories(lib)

# Add executable with both source files
add_executable(calculator calculator.cpp )

