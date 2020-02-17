#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
 
int main()
{
    int n;
    printf("Enter total number of node: ");
    scanf("%d",&n);
 
    createList(n);
 
    printf("\nList is\n ");
 
    displaylist();
 
    printf("\nReversed List is: \n");
    reverseList();
 
    displaylist();
 
    return 0;
}
void createList(int n)
{
    struct node *p,*temp;
    int i,data;
 
    temp=(struct node *)malloc(sizeof(struct node));
 
    printf("Enter the data of the node 1: ");
    scanf("%d",&data);
 
    temp->data=data;
    temp->next=NULL;
 
    p=temp;
    head=temp;
 
    for(i=2;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
 
        printf("Enter the data of the node %d: ",i);
        scanf("%d",&data);
 
        temp->data=data;
        temp->next=NULL;
 
        p->next=temp;
        p=p->next;
 
    }
 
}
 
void displaylist()
{
    struct node *temp;
    temp=head;
 
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
 void reverseList()
 {
     struct node *current,*prev,*next;
     current=head;
     prev=NULL;
 
     while(current != NULL)
     {
         next=current->next;
         current->next=prev;
 
         prev=current;
         current=next;
 
 
     }
     head=prev;
 }