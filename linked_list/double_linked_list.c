#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>



struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

int main()
{
    int n;
    printf("Enter the no of nodes: ");
    scanf("%d",&n);

    struct node* user_node[n];
    for(int i=0;i<n;i++)
    {
        struct node* user_node[i]=(struct node*)malloc(n*sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&user_node[i]->data);
        if(i=0)
        {
            user_node[i]->prev=NULL;
        }
        else
        {
        user_node[i]->prev=user_node[i-1];
        user_node[i-1]->next=user_node[i];
        }
        
    }


    struct node* temp;
    temp=user_node[0];
    for(int i=0;i<3;i++)
    {
        printf("\nData %d: %d",i+1,temp->data);
        printf("\nAddress of node %d: %d",i+1,temp);
        temp=temp->next;
    }    

}