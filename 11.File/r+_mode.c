// initially pointer fptr points to the beginning of the file. when i read all the data, it points to the end of file
// after that if i write it writes at the end
// if i write without reading, it overwrites only the data length in the file, as the length of the given data


#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr= NULL;
    char ch;
    fptr=fopen("file1.txt","r+");   //to read and modify the data  // it modifies, but does not rewrite

    if(fptr==NULL)
    {
        printf("error");
        exit(0);
    }
    while(!feof(fptr))
    {
        ch=fgetc(fptr);
        printf("%c",ch);
    }

    fprintf(fptr," you all");

    rewind(fptr);                    

    while(!feof(fptr))
    {
        ch=fgetc(fptr);
        printf("%c",ch);
    }
    
    fclose(fptr);
}