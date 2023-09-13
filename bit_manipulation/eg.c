#include <stdio.h>
#include <stdlib.h>

void main()
{
    unsigned short int a=0b111;
    unsigned short int b=0b101;
    unsigned short int c=a&b;
    
    printf("%d",c);
}