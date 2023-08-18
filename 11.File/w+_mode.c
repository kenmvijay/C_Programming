#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c;
    FILE* fptr=NULL;
    fptr=fopen("file_1.txt","w+");  //it can read or write. Once it is opened, it delets all file ele. it only reads the currently written content
    char s[50];
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    //printf("Enter what to rewrite: ");
    //gets(s);
    //fputs(s,fptr);

    //rewind(fptr);              // to point cursor to the initial

    //while(!feof(fptr))
    //{
    //    c=fgetc(fptr);
    //    printf("%c",c);
    //}
    fclose(fptr);
}