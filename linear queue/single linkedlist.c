#include<stdio.h>
#include<malloc.h>
 typedef struct node{
 int data;
     struct node *next;
 }N;
 N*head;
void create(int);
void inataf(int,int);
void inatbef(int,int);
void search(int);
void traver();

void main()
{
    int ch,pos,da,item,m,n,i;
    head=NULL;
    while(1)
    {
    printf("1.insertion at after\n 2.insertion at before\n 3.create a node \n 4.searching a item data \n 5.traversing or display \n ");
    printf(" \n 8.exit\n enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("which position you enter the data and give the data:");
        scanf("%d %d",&pos,&da);
        inataf(pos,da);
        break;
    case 2:
        printf("which position you enter the data and give the data:");
        scanf("%d %d",&pos,&da);
        inatbef(pos,da);
        break;
    case 3:
        printf("how many nodes you want:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Enter the Element[%d]:",i+1);
            scanf("%d",&m);
            create(m);
        }
        break;
    case 4:
        printf("which data you want to search:");
        scanf("%d",&item);
        search(item);
        break;
    case 5:
        traver();
        break;

    case 8:
        exit(1);
    default:
        printf("wrong entry");


    }
    }
}

void inataf(int pos,int da)
{
    int i=1;
    N*newnode,*temp;
 temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode=(N*)malloc(sizeof(N));
        newnode->data=da;
        newnode->next=temp->next;
        temp->next=newnode;



}

void inatbef(int pos,int da)
{
    int l,i=1;
 N*newnode,*temp;
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode=(N*)malloc(sizeof(N));
        newnode->data=da;
        newnode->next=temp->next;
        temp->next=newnode;



}
void create(int m)
{

    N*newnode,*temp;
    newnode=(N*)malloc(sizeof(N));
    printf("enter the data part data of the created new node:");
    newnode->data=m;
    newnode->next=0;
    if(head==0)
        head=temp=newnode;
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
void search(int item)
{
    N*temp;
   temp=head;
   int pos=1;
   while(temp!=0)
   {
       if(temp->data==item)
       {
           printf("%d data founded in the position %d \n",item,pos);
           break;
       }
       temp=temp->next;
       pos++;
   }
   if(temp==0)
    printf("Item %d is not found in list",item);
}
void traver()
{
    N*temp;
    temp=head;
    if(head==0){
        printf("list is empty");
        return;
    }
    printf("the list is:");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

