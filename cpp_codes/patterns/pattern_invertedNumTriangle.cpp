/**
 * @file pattern_invertedNumTriangle.cpp
 * @author gandla bhargavi
 * @brief  this is pratice pattern inverted  to print nymbers in
 * inverted triangle form . from user  taken number of rows
 * to  diplay the inverted triangle format.
 * @version 0.1
 * @date 2025-08-31
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief
 *
 */
void pattern_invertedNumTriangle()
{
    int i, j;
    int row;
    cout << " enter number of rows: " << endl;
    cin >> row;
    for (i = 0; i <= row; i++)
    {
        for (j = row; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/**
 * @brief
 *
 * @return int
 */
int main()
{
    pattern_invertedNumTriangle();
    return 0;
}
