# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(iteratorVector)
# Set the project name and version
set(VERSION 1.0)  # Specify the version of the project

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the header directory
include_directories(include)

# Add executable with both source files
add_executable(iteratorVector src/main.cpp src/iteratorVector.cpp)
 

