#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;

}*head,*newnode,*temp;


void cre()
{
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        printf("want to continue(1/0):");
        scanf("%d",&choice);
    }
}
void inaf()
{
    int pos,i=1,ele;
    printf("enter the position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    newnode->next=0;
    printf("enter the data:");
    scanf("%d",&newnode->data);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}
void inbf()
{
     int pos,i=1,ele;
    printf("enter the position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
void se()
{
    int item;
    printf("enter the element you want to search:");
    scanf("%d",&item);
    temp=head;
    while(temp!=0)
    {
        if(temp->data==item){
            printf("element found");
        return;
        }
        temp=temp->next;
    }
}
void dis()
{
    if(head==0)
        printf("the list is empty");
    else{
    temp=head;
    while(temp->next!=head)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
    printf("%d",temp->data);
    }
}

void delat()
{
    struct node*nextnode;
    int pos,i=1;
    temp=head;
    printf("enter the node position which you want to delete:");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);

}
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing  \n 6.Deletion of a particular node \n 7.Exit \n enter your choice");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            cre();
            break;
        case 2:
            inaf();
            break;
        case 3:
            inbf();
            break;
        case 4:
            se();
            break;
        case 5:
            dis();
            break;

        case 6:
            delat();
            break;
        case 7:
            exit(1);
        default:
            printf("wrong entry");
        }
    }
}
