#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c;
    int num;
    FILE* fptr=NULL;
    char str[100];
    fptr=fopen("file1.txt","w");      //it can create a file and write to a file
    if(fptr==NULL)                      
    {
        printf("Error.......");
        exit(0);
    }

    /*
    printf("Enter char to add: ");
    scanf("%c",&c);
    fputc(c,fptr);
    
    
    printf("Enter string to add: ");
    //scanf("%s",str);
    gets(str);                           // Overwritting takes place in write("w") mode
    fputs(str,fptr);

    */
    printf("Enter to add: ");
    scanf("%d %s",&num,str);
    fprintf(fptr,"%d %s",num,str);
    
    

    fclose(fptr);
    
}