//direct recursion - function calling itself within itself
//indirect recursion - Indirect recursion in C occurs when a function calls another function and if this function calls the first function again
//In tail recursion, there is no other operation to perform after executing the recursive function itself; the function can directly return the result of the recursive call.
// In non-tail recursion, some operations need to be performed using the returned value of the recursive call



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
