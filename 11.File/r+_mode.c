#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr= NULL;
    fptr=fopen("file1.txt","r+");   //to read and modify the data  // it modifies, but does not rewrite

    fprintf(fptr,"K Vijay Kumar");
    fclose(fptr);
}