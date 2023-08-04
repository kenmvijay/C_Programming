#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int in,n,m,a,b,c;

int multi(int a,int b,int c)
{
   if(b!=0)
   {
        printf("%d * %d =%d\n",a,c,(a*c));
        multi(a,b-1,c+1);
   }
   else
   exit(0);
}

int main()
{
    printf("Enter the number whose multiplication is needed: ");
    scanf("%d",&n);
    printf("Enter the number until where the multiplication is needed: ");
    scanf("%d",&m);
    in=1;
    multi(n,m,in);
    
}

