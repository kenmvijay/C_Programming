#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumf(int,int);

int main()
{
    int (*ptr_f_sumf)(int,int);                     
    //int (*ptr_f_sumf)(int,int)=&sumf;     
    //int (*ptr_f_sumf)(int,int)=sumf;  
    ptr_f_sumf=&sumf;  
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=(*ptr_f_sumf)(a,b);                 
    //sum=ptr_f_sumf(a,b);
    printf("%d",sum);
}

int sumf(int a,int b)
{
    return(a+b);
}