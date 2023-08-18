#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr=NULL;
    fptr=fopen("file_1","r");
    if(fptr==NULL)
    {
        printf("Error");
        exit(1);
    }

    long int a=ftell(fptr);
    printf("%ld")
}