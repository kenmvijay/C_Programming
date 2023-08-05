#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    char a[100];
    printf("Enter the word: ");
    scanf("%s",a);
    int i=0;
    
    while(a[i]!='\0')
    {
        i++;
    }
    n=i;
    for(int i=0;i<n;i++)
    {
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
        {
            for(int j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            i=i-1;
            n=n-1;
        }
    }
    printf("%s",a);

}