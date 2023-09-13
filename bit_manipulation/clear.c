#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=10;
    int b=1;
    //to clear the ith bit
    //i=3
    int i=3;
    b=b<<i;
    b=~b;
    int result=a&b;
    
    printf("%d",result);
    

}