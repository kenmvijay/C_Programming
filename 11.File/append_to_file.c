//cursors beginning is at the eof
//rewind() is of no use, u cannot alter the present element


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[50];
    FILE* fptr=NULL;
    fptr=fopen("file3.txt","a");          // it can create a file and append to a file
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    
    printf("Enter what to append: ");
    gets(s);

    fprintf(fptr,"\n%s",s);

    fclose(fptr);
}