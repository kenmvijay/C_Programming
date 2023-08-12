#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[100];
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}