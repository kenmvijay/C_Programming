//The void pointers refer to the pointers that have no data type associated with them. 
//As the name suggests, the void pointer indicates that the pointer is basically empty- 
//and thus, it is capable of holding any data type address in the program.

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