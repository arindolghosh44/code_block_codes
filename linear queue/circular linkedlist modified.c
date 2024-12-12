#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
int data;
struct node*next;

}N;
N*tail,*temp,*newnode;
void cre()
{
    int ch=1;
    tail=0;
    while(ch)
    {
        newnode=(N*)malloc(sizeof(N));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("want to continue(1/0):");
        scanf("%d",&ch);
    }
}
void dis()
{
    if(tail==0)
        printf("the list is empty");
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);

    }
}
void inaf()
{
    int pos,i=1;
    printf("enter position:");
    scanf("%d",&pos);
    newnode=(N*)malloc(sizeof(N));
    printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=tail->next;
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
     int pos,i=1;
    printf("enter position:");
    scanf("%d",&pos);
    newnode=(N*)malloc(sizeof(N));
    printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=tail->next;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
}
void se()
{
    int item,pos=1;
    printf("enter the item:");
    scanf("%d",&item);
     temp=tail->next;
        while(temp->next!=tail->next)
        {
            if(temp->next->data==item){

                printf("%d element is found in %d position",item,pos+1);
            return;
            }
            temp=temp->next;
            pos++;
        }
        if(temp->next==0)
        {
            printf("item not found ");
        }



}
void delat()
{
    int num,pos,i=1;
    N*nextnode,*current;
    printf("enter the position which node you want to delete:");
    scanf("%d",&num);
    current=tail->next;
    while(i<=pos)
    {
        current=current->next;
        i++;
    }
    nextnode=current->next;
    current->next=nextnode->next;
    free(nextnode);





}
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing \n 6.Deletion of a particular node \n 7.Exit \n enter your choice");
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
