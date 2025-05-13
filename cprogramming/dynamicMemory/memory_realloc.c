/**
 * @file memory_realloc.c
 * @author gandlabhargavi
 * @brief  This file contains the implementation of dynamic memory reallocation using realloc in C.
 * @version 0.1
 * @date 2025-05-05
 */
#include <stdio.h>
#include <stdlib.h>

void dynamic_memory_realloc();
void dynamic_memory_malloc();
int i = 0;
void dynamic_memory_malloc()
{
    int *ptr;
    ptr = malloc(5 * sizeof(int));
    printf("size of the ptr : %d\n", sizeof(ptr));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("the MALLOC  enter the value :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("display the  Malloc ptr : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d |", ptr[i]);
    }
    printf("\n");
    dynamic_memory_realloc();
    free(ptr);
    ptr = NULL;
}
void dynamic_memory_realloc()
{
    int *ptr;
    ptr = malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory reallocation failed\n");
        return;
    }

    // Fill the new memory with values
    for (i = 5; i < 10; i++)
    {
        printf("Enter value for new element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Display all values
    printf("display the reallocated ptr : ");
    for (i = 0; i < 10; i++)
    {
        printf(" %d |", ptr[i]);
    }
    printf("\n");

    free(ptr);
}
int main()
{

    dynamic_memory_malloc();
    return 0;
}