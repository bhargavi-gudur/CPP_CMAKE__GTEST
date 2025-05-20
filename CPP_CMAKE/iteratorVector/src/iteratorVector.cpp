/**
 * @file iteratorVector.cpp
 * @author gandlaBhargavi
 * @brief  This file implements the iterator for a vector class.
 * @version 0.1
 * @date 2025-04-18
 * 
 */
#include <iostream>
#include "iteratorVector.hpp"
#include <vector>

using namespace std;
/**
 * @brief This function demonstrates the use of iterators with a vector.
 * It performs various operations such as inserting elements, accessing values,
 * and printing the contents of the vector using iterators.
 * 
 */
void iteratorInvadilation()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    auto it = v.begin();
    cout << "1-> the value at begin iterator : " << *it << endl;
    it = v.begin() + 4;
    cout << "  v[4]" << v[4] << endl;
    cout << " 2-> the value at begin iterator : " << *it << endl;
    cout << (it - v.begin()) << endl;
    v.insert(it, 100);
    cout << " after v[4]" << v[4] << endl;
    cout << " 3-> the value at begin iterator : " << *it << endl;
    for (auto loop : v)
    {
        cout << loop << " ";
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " "; // Access the value pointed by the iterator
    }
    cout << endl;
}
