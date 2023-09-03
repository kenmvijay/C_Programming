//a pointer that does not point to any memory location and hence does not hold the address of any variables
//In C, a null pointer is a variable that has no valid address and is allocated to zero or NUL
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr=NULL;
    if(ptr!=NULL)                              //to avoid dereferencing ptr which would crash the code
    {                                     
    printf("%d",*ptr);
    }
    int a=10;
    ptr=&a;
    if(ptr!=NULL)
    {
    printf("%d",*ptr);
    }
}