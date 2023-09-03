//the pointers that point to some freed/deleted location from the program's memory
//Dangling Pointer occurs when a pointer pointing to a variable goes out of scope or when an object/variables memory gets deallocated

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    int a=10;
    ptr=&a;
    printf("%d %d",*ptr,ptr);
    free(ptr);                           //to free allocated memory to ptr
}