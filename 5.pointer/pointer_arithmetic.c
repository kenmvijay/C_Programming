#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,3,3,4,5};
    int* ptr;
    int* ptr1;
    int d;
    ptr=a;
    ptr1=&a[2];

    printf("%d",ptr);
    printf("\n%d",*ptr);

    ptr=ptr+1;

    printf("\n\n%d",ptr);
    printf("\n%d",*ptr);

    ptr=ptr-1;

    printf("\n\n%d",ptr);
    printf("\n%d",*ptr);

    d=ptr-ptr1;
    

    printf("\n\n%d",d);
    printf("\n%d %d",*ptr,(*ptr)++);    // printf statements executes from right to left
    


}