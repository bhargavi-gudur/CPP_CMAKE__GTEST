/**
 * @file main.cpp
 * @author Gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include "vectorSTL.hpp"
using namespace std;
/**
 * @brief main function calling printvector to iterate the vector values.
 *
 * @return int
 */
int main()
{
    vector<int> vec = {1, 3, 4, 4, 67};
    printvector(vec);
    return 0;
}
