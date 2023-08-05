#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int n;
    int a[200];
    printf("Enter no of ele in array: ");
    scanf("%d",&n);

    printf("Enter the ele of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        int b=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==b)
            {
                for(int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n=n-1;
                j=j-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
