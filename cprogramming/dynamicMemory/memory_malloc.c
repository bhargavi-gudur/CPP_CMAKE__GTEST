/**
 * @file memory_malloc.c
 * @author gandlabhargavi
 * @brief  This file contains the implementation of dynamic memory
 *  allocation using malloc in C.
 * @version 0.1
 * @date 2025-05-05
 * 
 */

#include <stdio.h>
#include <stdlib.h>
void dynamic_memory_malloc()
{
    int *ptr;
    ptr = malloc(5 * sizeof(int));
    printf("size of the ptr : %d\n", sizeof(ptr));

    int i = 0;
    if(ptr == NULL)
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
    free(ptr);
    ptr = NULL;
    printf("ptr : %d\n", ptr);
    printf("Memory has been freed and pointer set to NULL.\n");
}
int main()
{

    dynamic_memory_malloc();
    return 0;
}