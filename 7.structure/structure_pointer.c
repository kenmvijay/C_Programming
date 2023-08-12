#include<stdio.h>


struct stu
{
    int regno;
    char name[30];
};


int main()
{
    struct stu s1;
    struct stu* ptr1;
    char c[100];
    ptr1=&s1;
    printf("Enter the name: "); 
    gets(ptr1->name);
    printf("Enter the regno: ");
    scanf("%d",&ptr1->regno);
    
    //scanf("%s",ptr1->name);
    printf("\nRegno: %d",ptr1->regno);
    printf("\nName: %s",ptr1->name);
    
    return 0;
}