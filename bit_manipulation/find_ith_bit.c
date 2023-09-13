#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=10;
    int b=1;
    //to find the ith bit
    //i=3
    int i=3;
    b=b<<i;
    int result=a&b;
    int out;
    if(result==0)
    {
        out=0;
    }
    else
    out=1;
    printf("%d",out);

}