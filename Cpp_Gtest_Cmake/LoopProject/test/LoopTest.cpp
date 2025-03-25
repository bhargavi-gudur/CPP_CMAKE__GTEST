/**
 * @file LoopTest.cpp
 * @author GandlaBhargavi
 * @brief Test file for nested loop function using Google Test
 * @version 0.2
 * @date 2025-03-23
 *
 */

#include <gtest/gtest.h>
#include "../src/Loop.h" // Ensure the correct path

/**
 * @brief Test case for a small valid input (rows = 3)
 */
TEST(NestedLoopTest, SmallInput)
{
    std::string expected =
        "*11 *12 *13 \n"
        "*21 *22 *23 \n"
        "*31 *32 *33 \n";

    EXPECT_EQ(nestedloop(3), expected);
}

/**
 * @brief Test case for a larger valid input (rows = 5)
 */
TEST(NestedLoopTest, LargeInput)
{
    std::string expected =
        "*11 *12 *13 *14 *15 \n"
        "*21 *22 *23 *24 *25 \n"
        "*31 *32 *33 *34 *35 \n"
        "*41 *42 *43 *44 *45 \n"
        "*51 *52 *53 *54 *55 \n";

    EXPECT_EQ(nestedloop(5), expected);
}

/**
 * @brief Test case for minimum valid input (rows = 1)
 */
TEST(NestedLoopTest, SingleRow)
{
    std::string expected = "*11 \n";
    EXPECT_EQ(nestedloop(1), expected);
}

/**
 * @brief Test case for zero rows (edge case)
 */
TEST(NestedLoopTest, ZeroRows)
{
    std::string expected = ""; // No pattern should be generated
    EXPECT_EQ(nestedloop(0), expected);
}

/**
 * @brief Test case for negative rows (invalid input case)
 */
TEST(NestedLoopTest, NegativeRows)
{
    std::string expected = ""; // No pattern should be generated
    EXPECT_EQ(nestedloop(-3), expected);
}

/**
 * @brief Test case for large input (rows = 10)
 */
TEST(NestedLoopTest, VeryLargeInput)
{
    std::string expected =
        "*11 *12 *13 *14 *15 *16 *17 *18 *19 *110 \n"
        "*21 *22 *23 *24 *25 *26 *27 *28 *29 *210 \n"
        "*31 *32 *33 *34 *35 *36 *37 *38 *39 *310 \n"
        "*41 *42 *43 *44 *45 *46 *47 *48 *49 *410 \n"
        "*51 *52 *53 *54 *55 *56 *57 *58 *59 *510 \n"
        "*61 *62 *63 *64 *65 *66 *67 *68 *69 *610 \n"
        "*71 *72 *73 *74 *75 *76 *77 *78 *79 *710 \n"
        "*81 *82 *83 *84 *85 *86 *87 *88 *89 *810 \n"
        "*91 *92 *93 *94 *95 *96 *97 *98 *99 *910 \n"
        "*101 *102 *103 *104 *105 *106 *107 *108 *109 *1010 \n";

    EXPECT_EQ(nestedloop(10), expected);
}
