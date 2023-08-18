// used to remove effects of structure padding

#include<stdio.h>

#pragma Pack(1)

struct stu 
{
    char a;
    int b;
    char c;

}s1;


int main()
{
    printf("%d",sizeof(struct stu));
}