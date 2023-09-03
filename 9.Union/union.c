//The most significant difference between a structure and a union is the way they store their data. 
//A structure stores each member in separate memory locations, whereas a union stores all its members in the same memory location
// if int char and float are members, structure allocates memory of 4+1+4 but union allocates mem of max(4,1,4)

//memory utilization is done in union. but cant read all member values at same time. bcoz once new member value is assigned, old value is overwritten.


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
    printf("\n%d",sizeof(n1));
}