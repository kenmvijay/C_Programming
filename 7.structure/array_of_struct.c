#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct emp
{
    int reg;
    char name[200];

};

int main()
{
    
    int n;
    printf("Enter no of emp: ");
    scanf("%d",&n);

    struct emp e[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter the name of student %d: ",i+1);
        scanf("%s",e[i].name);
        printf("Enter the reg no: ");
        scanf("%d",&e[i].reg);

    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nThe name of student %d is: %s",i+1,e[i].name);
        printf("\nThe reg no is: %d",e[i].reg);

    }
}