/**
 * @file main.cpp
 * @author  gandlaBhargavi
 * @brief Main file for the EvenOdd program
 * @version 0.1
 * @date 2025-04-17
 *
 */
#include <iostream>
#include <vector>
#include "evenodd.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::vector;
/**
 * @brief Main function to execute the EvenOdd program
 * 
 * @return int Exit status
 */
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;
    if(size > 0)
    {
        std::vector<int> number(size, 0);
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> number[i];
        }
        printEvenOdd(number.data(), size); 
    }
    else
    {
        cout << "Invalid size" << endl;
        return 1;
    }
  
}