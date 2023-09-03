#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    char c[100];
    printf("Enter a char: ");
    //scanf("%c",&c);
    //c=getchar();       //waits untill u input as many char but reads only one char
    //c=getch();           // as soon as a char is typed it reads it and executes next line. does not display the entered char
    //c=getche();           //same as getch but displays the entered  char
    gets(c);                // reads a line
    printf("Char= %s",c);

   

}
