#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char student_name[30]; // Increased size for safety
    int age;
};

void printDetails(struct student *students, int n)
{
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d, Name: %s, Age: %d\n", students[i].rollno, students[i].student_name, students[i].age);
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student *students = malloc(n * sizeof(struct student));

    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d (rollno name age): ", i + 1);
        scanf("%d %29s %d", &students[i].rollno, students[i].student_name, &students[i].age);
    }

    printDetails(students, n);

    free(students);
    return 0;
}
