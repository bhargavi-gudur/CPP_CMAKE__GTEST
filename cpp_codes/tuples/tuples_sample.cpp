/**
 * @file tuples_sample.cpp
 * @author GandlaBhargavi
 * @brief This program demonstrates the use of tuples in C++.
 * It initializes a tuple with different data types and
 *  accesses its elements using std::get.
 * @version 0.1
 * @date 2025-04-03
 *
 */
#include <iostream>
#include <tuple>

using namespace std;
/**
 * @brief  This function demonstrates the use of tuples in C++.
 *  It initializes a tuple with different data types and
 *  accesses its elements using std::get.
 *
 */
void tuple_DataType()
{
    typedef tuple<int, char, float> tp;
    tp t1(1, 'c', 6.78);
    // Access elements using std::get
    cout << "Integer: " << get<0>(t1) << endl;
    cout << "Character: " << get<1>(t1) << endl;
    cout << "Float: " << get<2>(t1) << endl;
}
/**
 * @brief The main function that calls the tuple_DataType function.
 *
 * @return int
 */
int main()
{
    tuple_DataType();
    return 0;
}