//The C typedef keyword is used to redefine the name of already existing data types
/*
typedef int integer;   //which means int can also be specified using integer

*/



#include<stdio.h>

typedef struct example
{
    int a;
    char b;
    float c;
}eg;                 // since typedef is used eg here is not a variable, its a another name of struct example

eg n1;

int main()
{
    n1.a=1;
    eg* ptr=&n1;
    ptr->b='V';
    (*ptr).c=2.3;
    printf("%d %c %f",n1.a,n1.b,ptr->c);
    
}