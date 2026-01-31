/**
 * @file StudentDetails.c
 * @author Gandla Bhargavi
 * @brief Program to store and display student details using dynamic memory allocation.
 *
 * Description:
 *  - This program dynamically allocates memory for multiple students.
 *  - It stores roll number, name, and age for each student.
 *  - The details are displayed using a separate function.
 *  - Memory is properly freed after use.
 *
 * Input :
 *  - Number of students
 *  - Roll number, name, and age for each student
 *
 * Output :
 *  - Displays all student details
 *
 * @date 2025-12-10
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Structure to store student details.
 */
struct student
{
    int rollno;
    char student_name[30];  // buffer size for safety
    int age;
};

/**
 * @brief Prints details of all students.
 *
 * @param students Pointer to student structure array
 * @param n Number of students
 */
void printDetails(struct student *students, int n)
{
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No : %d, Name : %s, Age : %d\n",
               students[i].rollno,
               students[i].student_name,
               students[i].age);
    }
}

/**
 * @brief Main function
 *
 * Steps:
 *  1. Read number of students.
 *  2. Allocate memory dynamically using malloc.
 *  3. Read student details.
 *  4. Display student details.
 *  5. Free allocated memory.
 *
 * @return int Program execution status
 */
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    struct student *students = (struct student *)malloc(n * sizeof(struct student));

    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read student details
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d (rollno name age): ", i + 1);
        scanf("%d %29s %d",
              &students[i].rollno,
              students[i].student_name,
              &students[i].age);
    }

    // Print student details
    printDetails(students, n);

    // Free allocated memory
    free(students);

    return 0;
}