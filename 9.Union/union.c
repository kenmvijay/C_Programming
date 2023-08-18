#include<stdio.h>

union name
{
    int a;
    char b;
    float c;
};
union name n1;

int main()
{
    n1.a=1;
    union name* ptr=&n1;
    ptr->b='V';
    (*ptr).c=2.3;
    printf("%d %c %f",n1.a,n1.b,ptr->c);
}