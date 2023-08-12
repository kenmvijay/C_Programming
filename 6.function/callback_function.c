// passing a function as an argument to another function


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumf(int,int);
int subf(int,int);
void display(int (*)(int,int),int,int);

void main()
{                       
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    display(sumf,a,b);
    display(subf,a,b);
}

int sumf(int a,int b)
{
    return(a+b);
}

int subf(int a,int b)
{
    return(a-b);
}

void display(int (*ptrf_sub_or_sum)(int,int),int a,int b)
{
    int result=(*ptrf_sub_or_sum)(a,b);
    printf("%d\n",result);
}