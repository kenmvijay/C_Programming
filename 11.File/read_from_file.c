#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr=NULL;
    char c;
    char s[50];

    fptr= fopen("file_1.txt","r");      // it cannot create a file but only read

    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    
    /*
    while(!feof(fptr))                   // End Of File
    {
        c=fgetc(fptr);        //c=getc(fptr);
        printf("%c",c);
    }
    */

    while(!feof(fptr))                   // End Of File
    {
    fgets(s,5,fptr);                     //reads till 5 char for a time
    printf("%s",s);                       //if while loop is not added it atmost reads a single line
    }
    
    fclose(fptr);
}