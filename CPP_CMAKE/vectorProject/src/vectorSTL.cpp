/**
 * @file vectorSTL.cpp
 * @author Gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "vectorSTL.hpp"
#include <iostream>
using namespace std;
/**
 * @brief
 *
 * @param vec
 */
void printvector(const vector<int> &vec)
{
    for (int i : vec)
    {
        cout << "i : " << i << endl;
    }
}