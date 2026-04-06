#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node*next;
}node;
node*create(int x)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void display(node*head)
{
    node*curr=head;
    do
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    while(curr!=head);
    {
        printf("\n");
    }
}
node*insert_beg(node*head , int x)
{
    node* temp=create(x);
    node* last=head;
    while(last->next!=head)
    {
        last=last->next;
    }
    temp->next=head;
    last->next=head;
    return temp;
}

node*insert_l(int x,node*head)
{
    node*temp=create(x);
    node*curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}
node*insert_pos(node*head,int x,int pos)
{
    node*temp=create(x);
    node*curr=head;
    for(int i=i;i<=pos -2;i++)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;

}
node*delete_pos(node*head,int pos)
{
    node*curr=head;
    for(int i=1;i<=pos-2;i++)
    {
        curr=curr->next;
    }
    node*temp=curr->next;
    curr->next=curr->next->next;
    free(temp);
    return head;
}
int main()
{
    node*head=create(10);
    node*first=create(20);
    node*second=create(30);
    node*third=create(400000);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=head;
    display(head);
    head=delete_pos(head,2);
    printf("After deletion   ");
    display(head);
    return 0;
}
