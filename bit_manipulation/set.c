#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=10;
    int b=1;
    //to set the ith bit
    //i=3
    int i=2;
    b=b<<i;
    int result=a|b;
    
    printf("%d",result);
    

}