//a pointer that is not initialized till its first use in the program
//Any uninitialized pointer is known as a wild pointer in C because it points to some arbitrary memory location 
//and can cause a program to crash or behave unexpectedly. A wild pointer in C is declared but not initialized.
// That is why, it points to any random memory location
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int* ptr;
    printf("%d",*ptr);
}