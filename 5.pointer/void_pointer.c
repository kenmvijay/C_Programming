#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=10;
    char b='a';
    float c=2.3;
    void* ptr;
    ptr=&a;
    printf("%d\n",*(int*)ptr);
     ptr=&b;
    printf("%c\n",*(char*)ptr);
     ptr=&c;
    printf("%f\n",*(float*)ptr);



}