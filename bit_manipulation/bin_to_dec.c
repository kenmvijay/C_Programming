#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int bin=1010;
    int rem=0;
    int dec=0;
    int i=0;
    while(bin!=0)
    {
        rem=bin%10;
        dec=dec+(rem*pow(2,i));
        bin=bin/10;
        i=i+1;
    }
    printf("%d",dec);
}