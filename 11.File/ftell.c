#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr=NULL;
    fptr=fopen("file_1.txt","r");
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }

    //fseek(fptr,5,SEEK_SET);
    int a=ftell(fptr);
    printf("%d",a);
    

    fseek(fptr,0,SEEK_END);
    printf("\n%d",ftell(fptr));              // finding length of file
    fclose(fptr);
}
