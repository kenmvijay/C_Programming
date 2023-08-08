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
    struct emp e1;
    //int n;
    //printf("Enter no of emp: ");
    //scanf("%d",&n);
    //for(int i=0;i<n;i++)
    //{
        printf("Enter the name: ");
        scanf("%s",e1.name);
        printf("Enter the reg no: ");
        scanf("%d",&e1.reg);

    //}

    printf("\nEmployee name: %s",e1.name);
    printf("\nEmployee reg no: %d",e1.reg);
}