//cannot rewrite the already present data
//it can read the already present data

#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char c;
    FILE* fptr=NULL;
    fptr=fopen("file4.txt","a+");     //if file does not exist, it creates a new file  //read or append   //appends 

    if(fptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    
    char s[]=" Hello";
    fputs(s,fptr);

    rewind(fptr);                 //takes cursor to beginning

    while(!feof(fptr))
    {
        c=fgetc(fptr);
        printf("%c",c);
    }  
    
    rewind(fptr);     

    char d[]=" everyone";
    fputs(d,fptr);              


    fclose(fptr);
}
