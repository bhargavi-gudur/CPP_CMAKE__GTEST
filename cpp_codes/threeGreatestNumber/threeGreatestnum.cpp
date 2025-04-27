/**
 * @file threeGreatestnum.cpp
 * @author GandlaBhargavi
 * @brief   This program finds the greatest
 * of three numbers using a class and a member function.
 * @version 0.1
 * @date 2025-04-19
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief  This class contains a member function to
 * find the greatest of three numbers.
 *
 */
class FindPositiveNumbers
{
public:
    int findGreatThreeNum(int a, int b, int c); // Declare inside the class
};

/**
 * @brief  This function takes three integers as input
 * and returns the greatest of them.
 *
 * @param a
 * @param b
 * @param c
 * @return int
 */
int FindPositiveNumbers::findGreatThreeNum(int a, int b, int c)
{
    return max(max(a, b), c);
}

/**
 * @brief  The main function creates an object of the class
 * and calls the member function to find the greatest number.
 *
 * @return int
 */
int main()
{
    FindPositiveNumbers objFindPositiveNumbers;

    int greatest = objFindPositiveNumbers.findGreatThreeNum(10, 20, 15);
    cout << "Greatest Number: " << greatest << endl;

    return 0;
}
