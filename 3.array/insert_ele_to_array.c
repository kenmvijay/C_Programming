#include<stdio.h>
#include<conio.h>
#include <string.h>

int main()
{
    
    int pos,ele,n;
    printf("Enter no of ele in array: ");
    scanf("%d",&n);
    int a[100];
    printf("Enter the array ele: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the ele to insert: ");
    scanf("%d",&ele);
    printf("Enter the pos of ele to insert: ");
    scanf("%d",&pos);

    
    for(int i=0;i<n;i++)
    {
        if(i==(pos-1))
        {   
            n=n+1;
            for(int j=n;j>i;j--)
            {
                a[j]=a[j-1];
            }
            a[i]=ele;
            
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}