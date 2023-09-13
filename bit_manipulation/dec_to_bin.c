#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int rem=0;
    int bin=0;
    int i=1;
    while(n!=0)
    {
        rem=n%2;
        bin=bin+(rem*i);
        i=i*10;
        n=n/2;
    }

    printf("%d",bin);

}