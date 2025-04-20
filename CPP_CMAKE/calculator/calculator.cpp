/**
 * @file calculator.cpp
 * @author Gandlabhargavi
 * @brief
 * @version 0.1
 * @date 2025-04-17
 *
 */
#include "calculator.hpp"
#include <iostream>

using namespace std;

// function prototypes and definitions for basic arithmetic operations

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: Division by zero." << endl;
        return 0; // or handle error as needed
    }
}
int modulus_cal(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        cout << "Error: Division by zero." << endl;
        return 0; // or handle error as needed
    }
}
/**
 * @brief  Main function to perform basic arithmetic operations
 *
 * @return int
 */
int main()
{
    int first, second, result;
    int choice;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Choose operation: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        result = add(first, second);
        cout << "Addition: " << result << endl;
        break;
    case 2:
        result = subtract(first, second);
        cout << "Subtraction: " << result << endl;
        break;
    case 3:
        result = multiply(first, second);
        cout << "Multiplication: " << result << endl;
        break;
    case 4:
        result = divide(first, second);
        cout << "Division: " << result << endl;
        break;
    case 5:
        result = modulus_cal(first, second);
        cout << "Modulus: " << result << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    cout << "Thank you for using the calculator!" << endl;
    cout << "Exiting..." << endl;

    return 0;
}
