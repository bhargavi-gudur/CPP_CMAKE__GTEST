/**
 * @file vector_pairs.cpp
 * @author  GandlaBhargavi
 * @brief   This program demonstrates the use of vectors of pairs in C++.
 * @version 0.1
 * @date 2025-04-03
 *
 */

#include <iostream>
#include <vector>
#include <utility>

using namespace std;
/**
 * @brief This function demonstrates the use of vectors of pairs in C++.
 * It initializes a vector of pairs, iterates through it, and calculates the sum of the second elements of each pair.
 *
 * @return void
 */
void pair_vector_sum()
{
    vector<pair<int, int>> v = {{1, 2}, {5, 10}, {5, -4}};
    int sum = 0;
    // for (int i =0;i<v.size();i++)
    for (auto value : v)
    {
        sum += value.second;
        cout << "sum [ " << sum << " ]" << endl;
    }
}
/**
 * @brief The main function that calls the pair_vector_sum function.
 *
 * @return int
 */
int main()
{
    pair_vector_sum();
    return 0;
}