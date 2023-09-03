#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int* ptr;
    int* ptr_1;
    printf("Enter the no of ele: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    ptr_1=(int*)calloc(2,sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nEntered ele are:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

    printf("\nDefault values are:\t");
    for(int i=0;i<2;i++)
    {
        printf("%d\t",*(ptr_1+i));
    }

    free(ptr);
}