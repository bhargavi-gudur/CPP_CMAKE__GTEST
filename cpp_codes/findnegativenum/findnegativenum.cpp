/**
 * @file findnegativenum.cpp
 * @author gandlabhargavi
 * @brief This program finds negative numbers in an array.
 * @version 0.1
 * @date 2025-04-19
 *
 */
#include <iostream>
using namespace std;
class negativeNUMber
{
public:
    // METHOD TO FIND NEGATIVE NUMBERS IN AN ARRAY
    void findNegativeNumbers(int arr[], int &size)
    {
        cout << "Negative numbers in the array: ";
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    void findPostiveNumbers(int arr[], int &size)
    {
        cout << "postive numbers in the array: ";
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > 0)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    ~negativeNUMber()
    {
        cout << "Destructor called" << endl;
    }
};

/**
 * @brief  Main function to test the findNegativeNumbers function.
 *
 * @return int
 */
int main()
{
    int arr[] = {1, -2, 3, -4, 5, -6};
    int sizeofarray = sizeof(arr) / sizeof(arr[0]);
    negativeNUMber objnegativeNUMber;
    objnegativeNUMber.findNegativeNumbers(arr, sizeofarray);
    objnegativeNUMber.findPostiveNumbers(arr, sizeofarray);
    return 0;
}