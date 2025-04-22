/**
 * @file stringType.cpp
 * @author GandlaBhargavi
 * @brief This file contains functions to manipulate strings, including calculating length, toggling case, and counting vowels.
 * @version 0.1
 * @date 2025-04-19
 *
 */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/**
 * @brief This function calculates the length of a string without using inbuilt functions.
 *
 * @param str
 */
void withoutInbuiltstring(string &str)
{
    int length = 0;

    for (auto i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "The length of the string is: " << length
         << endl;
}
/**
 * @brief This function toggles the case of each character in the string.
 *
 * @param str
 */
void togglecharacter(string &str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Toggled string: " << str << endl;
}
/**
 * @brief this function checks if the character is a vowel.                   
 * @param str
 */
void vowel_fun(string &str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
        }
    }
}
/**
 * @brief Counts the number of vowels in the string.
 *
 * @param str
 */
void countNumVowels(string &str)
{
    int vowels_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        vowel_fun(str);
        vowels_count++;
    }
    cout << "Number of vowels in the string: " << vowels_count << endl;
}
/**
 * @brief Main function to demonstrate string manipulation functions.
 *
 * @return int
 */
int main()
{
    string stringchars = "GeeksforGeeks";
    withoutInbuiltstring(stringchars);
    togglecharacter(stringchars);
    countNumVowels(stringchars);
    return 0;
}
