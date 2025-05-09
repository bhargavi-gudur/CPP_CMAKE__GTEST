#include "../include/sample.h"
#include <gtest/gtest.h>

// Test cases for add function
TEST(SampleTest1, AddTest)
{
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(2, -3), -1);
}

// Test cases for subtract function
TEST(SampleTest2, SubtractTest)
{
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(3, 5), -2);
    EXPECT_EQ(subtract(-5, -3), -2);
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}