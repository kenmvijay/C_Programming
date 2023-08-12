#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int n;

void b_sort(int b[],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",b[k]);
    }
}

int main()
{
    
    int a[100];
    printf("Enter the no of ele in the array: ");
    scanf("%d",&n);
    printf("Enter the array ele: ");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    b_sort(a,n);
}