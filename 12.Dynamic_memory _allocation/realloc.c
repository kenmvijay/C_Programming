#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int* ptr;
    int* ptr_1;
    printf("Enter the no of ele: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));  //ptr=(int*)malloc(n*4);
    
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

    printf("\nEnter the new mem: ");
    scanf("%d",&n);
    ptr_1= (int*)realloc(ptr,n*sizeof(int));

    printf("old adress: %d ,new address: %d",ptr,ptr_1);

    printf("\nEntered ele in new mem are:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}