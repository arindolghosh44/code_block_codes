#include<stdio.h>
typedef struct node
{
    int data;
    struct node*next;
}N;
N*temp,*head,*newnode;
void cr()
{
    int ch=1;
    head=0;
    newnode=(N*)calloc(1,sizeof(N));
    printf("Enter the element:");
    scanf("%d",&newnode->data);
    newnode->next=0;

    while(ch){
            if(head==0)
            {
                head=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=temp->next;
            }

    printf("Want to continue:");
    scanf("%d",&ch);
}
void dis()
{
    temp=head;
    while(temp!=0)
    {
        printf(" %d",temp->data);
        temp=temp->data;
    }
}
void re()
{
    N*prev,*curr,*ne;
     prev=head;
    while(prev!=0){
    curr=prev->next;
    ne=curr->next;
    curr->next=prev;




    prev=prev->next;


    }

}

}
void main()
{
    int ch;
    while(1){
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        cr();
        break;
    case 2:
        re();
        break;
    case 3:
        dis();
        break;
    case 4:
        exit(1);
    default:
        printf("Wrong Entry");
    }
    }
}
