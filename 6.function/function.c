#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumf(int,int);

int main()
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=sumf(a,b);
    printf("%d",sum);
}

int sumf(int a,int b)
{
    return(a+b);
}