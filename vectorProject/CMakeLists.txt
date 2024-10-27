# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(vectorProject)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the header directory
include_directories(include)

# Add executable with both source files
add_executable(vectorProject src/main.cpp src/vectorSTL.cpp)

