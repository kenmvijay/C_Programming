#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[200];
    printf("Enter the string: ");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            printf("%c",s[i]);
    }
}