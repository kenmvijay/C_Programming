#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int sum=0;
int count=0;


void add(int m,char x[100],int z)
{
    int k=0;
    for(int j=m;j<z;j++)
    {
        x[k]=x[j];
        if(j!=k)
        x[j]='0';
        k++;
    }
    x[k]='\0';
    int num=atoi(x);
    sum=sum+num;
    count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    
    
}

int main()
{
    int n;
    int b,out;
    char a[100];
    char dupli[100];
    printf("Enter the string: ");
    scanf("%s",a);
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
        dupli[i]=a[i];
    }
    
    int exception;
    for(int i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1')||(a[i]=='2')||(a[i]=='3')||(a[i]=='4')||(a[i]=='5')||(a[i]=='6')||(a[i]=='7')||(a[i]=='8')||(a[i]=='9'))
        {
            add(i,a,n);
            i=i+count-1;
            for(int i=0;i<n;i++)
    {
        a[i]=dupli[i];
    }


        }
        
    }
    printf("%d",sum);
}