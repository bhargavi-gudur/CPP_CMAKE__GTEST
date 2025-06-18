/**
 * @file array_bitwise.cpp
 * @author GandlaBhargavi
 * @brief  This program demonstrates how to extract each byte 
 * from an integer using bitwise operations.
 * @version 0.1
 * @date 2025-04-26
 * 
 */
#include <iostream>

int main()
{
    int value = 0x1234;
    int arr[4]; // Array to store each byte

    // Extract each byte using bitwise AND and shift operations
    arr[0] = (value >> 8) & 0xFF; // Most significant byte (12 in hex)
    std::cout << std::hex << arr[0] << " ";
    arr[1] = (value >> 16) & 0xFF; // Second byte (34 in hex)
    arr[2] = (value >> 8) & 0xFF;  // Third byte (56 in hex)
    arr[3] = value & 0xFF;         // Least significant byte (78 in hex)

    // Print the array
    std::cout << "The bytes are: ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << std::hex << arr[i] << " ";
    }
    std::cout << std::endl;
}