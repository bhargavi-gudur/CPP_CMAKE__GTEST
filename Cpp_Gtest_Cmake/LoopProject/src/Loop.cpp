/**
 * @file Loop.cpp
 * @author GandlaBhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-23
 *
 */
#include <iostream>
#include "../src/Loop.h" // Ensure the correct path

#include <sstream>

using namespace std;

string nestedloop(int rows);

/**
 * @brief
 *
 * @return * int
 */
int main()
{
    int rows;
    std::cout << "Number of rows: ";
    std::cin >> rows;

    std::cout << nestedloop(rows);
    return 0;
}
/**
 * @brief
 *
 */
string nestedloop(int rows)
{
    ostringstream output;
    int i = 0;
    int j = 0;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            output << "*" << i << j << " ";
        }
        output << endl;
    }
    return output.str();
}