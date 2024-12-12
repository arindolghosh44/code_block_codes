#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}N;
N*head,*newnode,*temp;
void cre()
{
    int ch=1;

    head=0;
    while(ch)
    {
    newnode=(N*)malloc(sizeof(N));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
        head=temp=newnode;
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;

    }
    printf("want to continue(1/0):");
    scanf("%d",&ch);
    }

}
void inaf()
{
    int pos,i=1,data;
    printf("enter the position:");
    scanf("%d",&pos);
    temp=head;
    newnode=(N*)malloc(sizeof(N));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;



}
void inbf()
{
     int pos,i=1,data;
    printf("enter the position:");
    scanf("%d",&pos);
    temp=head;
    newnode=(N*)malloc(sizeof(N));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
}
void se()
{
    int ele,pos=1;
    printf("enter the element you want to search:");
    scanf("%d",&ele);
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data==ele){
            printf("%d element found in %d location",ele,pos);
            return;
        }
        temp=temp->next;
        pos++;

    }
    if(temp==0)
        printf("%d element is not found",ele);
}
void dis()
{
    temp=head;
    if(head==0)
    {
        printf("the list is empty");
    }
    else{
    while(temp->next!=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf(" %d",temp->data);
    }
}
void rev()
{
    N*current,*nextnode;
    if(head==0)
        printf("Invalid data");
    else
    {
        current=head;
        while(current!=0)
        {
            nextnode=current->next;
            current->next=current->prev;
            current->prev=nextnode;
            current=nextnode;
        }
    }
}
void delat()
{
    int pos,i=1;
    temp=head;
    printf("enter the position:");
    scanf("%d",&pos);
    while(i<=pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing \n 6.Reversing the list \n 7.Deletion of a particular node \n 8.Exit \n enter your choice");
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
            rev();
            break;
        case 7:
            delat();
            break;
        case 8:
            exit(1);
        default:
            printf("wrong entry");
        }
    }
}

