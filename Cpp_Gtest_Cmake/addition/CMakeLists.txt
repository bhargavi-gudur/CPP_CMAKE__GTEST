cmake_minimum_required(VERSION 3.10)
project(addition)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add source files
add_executable(test_addition addition.cpp test_addition.cpp)

# Link libraries
target_link_libraries(test_addition GTest::GTest GTest::Main)
