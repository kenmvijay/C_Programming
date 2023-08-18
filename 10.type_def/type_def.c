#include<stdio.h>

typedef struct example
{
    int a;
    char b;
    float c;
}eg;

eg n1;

int main()
{
    n1.a=1;
    eg* ptr=&n1;
    ptr->b='V';
    (*ptr).c=2.3;
    printf("%d %c %f",n1.a,n1.b,ptr->c);
}