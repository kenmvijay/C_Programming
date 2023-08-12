#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<stdlib.h>


int main()
{
    char a[50];
    char b[50];

    printf("Enter 2 strings: ");
    scanf("%s %s",a,b);
    printf("%s %s\n",a,b);
    char c[50];
   
    int count=0;
    char check;
    int i=1;
    check=a[0];
    while(check!='\0')
    {
        i++;
        check=a[i];
        count++;
    }


    for(int j=0;j<count;j++)
    {
        a[j]=tolower(a[j]);
        b[j]=tolower(b[j]);

        if(a[j]==b[j])
        continue;
        else
        {
        printf("They are not same");
        exit(0);
        }
    }
    printf("They are same");

}


    
