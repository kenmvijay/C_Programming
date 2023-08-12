// using function pointer as switch statement


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sumf(int,int);
void subf(int,int);


void main()
{                       
    int a,b,sum,n;
    void (*ptr_f_sumf_or_subf[2])(int,int);
    ptr_f_sumf_or_subf[0]=&sumf;
    ptr_f_sumf_or_subf[1]=&subf;                   // or void (*ptr_f_sumf_or_subf[2])(int,int)={sumf,subf};

    printf("Enter 0 for sum and 1 for sub: ");
    scanf("%d",&n);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    (*ptr_f_sumf_or_subf[n])(a,b);
}

void sumf(int a,int b)
{
    printf("sum= %d\n",a+b);
}

void subf(int a,int b)
{
    printf("sub= %d\n",a-b);
}

