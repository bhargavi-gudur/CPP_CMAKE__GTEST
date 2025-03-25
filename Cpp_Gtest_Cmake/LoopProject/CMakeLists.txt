cmake_minimum_required(VERSION 3.10)
project(LoopProject)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Main program (with main())
add_executable(LoopProgram src/Loop.cpp)
target_include_directories(LoopProgram PRIVATE src)

# Create a library for Loop.cpp (NO main())
add_library(LoopLib src/Loop.cpp)

# Test program (without Loop.cpp's main)
add_executable(LoopTest test/LoopTest.cpp)
target_include_directories(LoopTest PRIVATE src)
target_link_libraries(LoopTest PRIVATE LoopLib GTest::GTest GTest::Main)

enable_testing()
add_test(NAME LoopTest COMMAND LoopTest)
