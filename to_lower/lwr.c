#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[200];

    printf("Enter the string: ");
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    int n=i;

    for(int i=0;i<n;i++)
    {
        int b=(int)s[i];
        if(b>=65 && b<=90)
        {
            s[i]=b+32;
        }
    }
    printf("%s",s);
}