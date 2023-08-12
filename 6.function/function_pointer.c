#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumf(int,int);

int main()
{
    int (*ptr_f_sumf)(int,int);
    ptr_f_sumf=&sumf;                        // or int (*ptr_f_sumf)(int,int)=&sum;     or  int (*ptr_f_sumf)(int,int)=sum;  
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=(*ptr_f_sumf)(a,b);                 // or sum=ptr_f_sumf(a,b);
    printf("%d",sum);
}

int sumf(int a,int b)
{
    return(a+b);
}