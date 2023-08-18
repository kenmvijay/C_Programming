#include<stdio.h>
#include<stdlib.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int mult=fact(n);
    printf("Factorial is %d",mult);
}

int fact(int n)
{
    int mult;
    if(n==1)
    {
    return(n);
    }
    else
    {
        mult=n*fact(n-1);
        return(mult);
    }
}
