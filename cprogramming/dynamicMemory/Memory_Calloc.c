/**
 * @file Memory_Calloc.c
 * @author  gandlabhargavi
 * @brief  This file contains the implementation of dynamic memory allocation using calloc in C.
 * @version 0.1
 * @date 2025-05-05
 *
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief  This function demonstrates dynamic memory allocation using calloc.
 *
 */
void dynamic_memory_calloc()
{
    int *ptr;
    ptr = calloc(5, sizeof(int));
    printf("size of the integer : %d\n", 5 * sizeof(int));

    int i = 0;
    printf("the calloc  enter the value :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("display the  calloc ptr : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d |", ptr[i]);
    }

    printf("\n");
    free(ptr);
    ptr = NULL; // Set pointer to NULL after freeing memory

    printf("Memory has been freed and pointer set to NULL.\n");
}
/**
 * @brief  This is the main function that calls the dynamic_memory function.
 *
 * @return int
 */
int main()
{
    dynamic_memory_calloc();
    return 0;
}