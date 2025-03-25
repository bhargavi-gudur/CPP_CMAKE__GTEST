cmake_minimum_required(VERSION 3.10)
project(sample_google_test)

set(CMAKE_CXX_STANDARD 17)

# Set GoogleTest path (if needed)
set(GTEST_ROOT "C:/Users/gandl/gtest_install")
set(GTEST_INCLUDE_DIR "${GTEST_ROOT}/include")
set(GTEST_LIB_DIR "${GTEST_ROOT}/lib")

# Find Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(sample_google_test sample_google.cpp)

# Link Google Test
target_link_libraries(sample_google_test PRIVATE GTest::gtest GTest::gtest_main)
# Link GoogleTest manually
target_link_libraries(sample_google_test PRIVATE 
    ${GTEST_LIB_DIR}/libgtest.a
    ${GTEST_LIB_DIR}/libgtest_main.a
    pthread
)
# Enable testing
enable_testing()
add_test(NAME SampleTest COMMAND sample_google_test)
