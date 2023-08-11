//a pointer that does not point to any memory location and hence does not hold the address of any variables
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