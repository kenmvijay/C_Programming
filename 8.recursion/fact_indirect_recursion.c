////indirect recursion - Indirect recursion in C occurs when a function calls another function and if this function calls the first function again

#include<stdio.h>
#include<stdlib.h>

int fact(int n);
int fact2(int n);
 
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
        mult=n*fact2(n-1);
        return(mult);
    }
}

int fact2(int n)
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

