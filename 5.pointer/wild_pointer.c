//a pointer that is not initialized till its first use in the program
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int* ptr;
    printf("%d",*ptr);
}