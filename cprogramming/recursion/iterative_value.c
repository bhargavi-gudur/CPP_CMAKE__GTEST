/**
 * @file iterative_value.c
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of an iterative function to calculate the value of a given number.
 * @version 0.1
 * @date 2025-05-09
 */

#include <stdio.h>
/**
 * @brief  This function calculates the value of a given number iteratively.
 *
 * @param n The number to be processed.
 * @return int The final calculated value.
 */
int iterative_value(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return iterative_value(n);
}
/**
 * @brief  This function calculates the value of a given number iteratively.
 *
 * @return int  The final calculated value.
 */
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Check if the input number is negative
    if (n < 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }
    // Check if the input number is zero
    else if (n == 0)
    {
        printf("The result is: 0\n");
        return 0;
    }
    else
    {
        int result = iterative_value(n);
        printf("The result is: %d\n", result);
    }
    return 0;
}