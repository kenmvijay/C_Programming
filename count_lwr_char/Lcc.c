#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[200];
    int count=0;
    printf("Enter the string: ");
    scanf("%s",s);

    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        int b=(int)s[i];
        if(b>=97 &&b<=122)
        {
            count++;
        }
    }
    printf("%d",count);
}