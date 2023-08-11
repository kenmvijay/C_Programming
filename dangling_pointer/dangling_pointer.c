//the pointers that point to some freed/deleted location from the program's memory
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