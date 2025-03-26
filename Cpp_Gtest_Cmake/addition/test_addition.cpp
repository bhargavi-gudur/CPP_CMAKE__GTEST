/**
 * @file test_addition.cpp
 * @author Gandla Bhargavi
 * @brief  This file contains the test cases for the add function.
 * @version 0.1
 * @date 2025-03-26
 *
 */
#include "addition.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(AdditionTest, PositiveNumbers)
{
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AdditionTest, NegativeNumbers)
{
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(AdditionTest, MixedNumbers)
{
    EXPECT_EQ(add(-2, 3), 1);
}

TEST(AdditionTest, Zero)
{
    EXPECT_EQ(add(0, 0), 0);
}
TEST(AdditionTest, MixedNumbers1)
{
    EXPECT_EQ(add(-2, -3), -5);
}