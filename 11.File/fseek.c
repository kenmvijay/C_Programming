#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr=NULL;
    fptr=fopen("file_1.txt","r");

    int a=fseek(fptr,2,SEEK_SET);         // SEEK_SET -FROM BEGINNING
    
                                    // SEEK_CUR -CURRENT
    while(!feof(fptr))              // SEEK_END - FROM END
    {
    char c=fgetc(fptr);
    printf("%c",c);
    }

    if(a==0)                         //returns 0 if succesfully read
    printf("Successfully read");
    fclose(fptr);

    
    
}