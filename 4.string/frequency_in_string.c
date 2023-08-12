#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char d,char c[100])
{
    int a=0;
    int b=1;
    
    int n=strlen(c);
    for(int i=0;i<n;i++)
    {
        
            if(d==c[i])
            return(a);
        

    }
    return(b);
}


int main()
{
    int count=0;
    char s[100];
    char r[100];
    char t;
    printf("Enter the string: ");
    scanf("%s",s);
    int j=0;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        
        char t=s[i];
        int k=check(t,r);
        
        if(k==1)
        {
            r[j]=s[i];
            j++;
            count=0;
             for(int i=0;i<n;i++)
             {
                if(s[i]==t)
                count++;
             }
             printf("%c is repeated for %d times\n",t,count);
        }


    }
}