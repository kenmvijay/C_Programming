#include<stdio.h>
#include<stdlib.h>

void fact(int n,int mult);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact(n,1);
}

void fact(int n,int mult)
{
    
    if(n==1)
    {
    printf("Factorial is %d",mult);
    return;
    }
    else
    {
        mult=mult*n;
        n=n-1;
        fact(n,mult);
    }
}