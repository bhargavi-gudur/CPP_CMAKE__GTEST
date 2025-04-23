/**
 * @file evenodd.cpp
 * @author gandlaBhargavi
 * @brief 
 * @version 0.1
 * @date 2025-04-17
 */
#include "evenodd.hpp"
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

/**
 * @brief Function to print even and odd numbers from an array
 * 
 * @param number Pointer to the array of integers
 * @param size Size of the array
 */
void printEvenOdd(int *number ,int size)
{
    cout<<" even numbers are : "<<endl;
    for(int i=0;i<size;i++)
    {
        if(number[i]%2==0)
        {
            cout<<number[i]<<" ";
        }
    }
    cout<<endl;
    cout << " odd numbers are : " << endl;
    for (int i = 0; i < size; i++)
    {
        if (number[i] % 2 != 0)
        {
            cout << number[i] << " ";
        }
    }
    cout << endl;
}