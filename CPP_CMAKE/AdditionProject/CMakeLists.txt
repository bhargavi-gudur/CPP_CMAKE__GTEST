cmake_minimum_required(VERSION 3.14)
project(SampleProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ensure consistent runtime library
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")

# Enable testing
enable_testing()

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG main
)
FetchContent_MakeAvailable(googletest)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Create a static library for shared code
add_library(SampleLibrary STATIC src/sample.cpp)

# Create the main application executable
add_executable(SampleProject src/main.cpp)
target_link_libraries(SampleProject PRIVATE SampleLibrary)

# Create the test executable
add_executable(test_sample Gtest_sample/sampleGtest.cpp)
target_link_libraries(test_sample PRIVATE gtest_main SampleLibrary)

# Add test to CTest
add_test(NAME SampleTest COMMAND test_sample)
