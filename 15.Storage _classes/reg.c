#include<stdio.h>

int main()
{
    register int b=10;
    int* a=&b;
    printf("%d",a);
    printf("\n%d",*a);
}