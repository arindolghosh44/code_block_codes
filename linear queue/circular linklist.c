#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head,*temp,*newnode;
c=0;
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
            temp->next=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            temp->next=head;
        }
        c++;
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
     if(pos==c)
     {
         while(temp->next!=head)
         {
             temp=temp->next;
         }
         temp->next=newnode;
         temp=newnode;
         temp->next=head;

     }
    else{
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    }

}
void inbf()
{
     int pos,i=1,ele;
    printf("enter the position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the data:");
    scanf("%d",&newnode->data);
     if(pos==1)
     {
         newnode->next=head;
         head=newnode;
     }
else{
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}

}
void se()
{
    int item,pos=1,flag=0;
    printf("enter the element you want to search:");
    scanf("%d",&item);
    temp=head;
    while(temp!=0)
    {
        if(temp->data==item){
            printf(" %d element found in %d position",item,pos);
            flag=1;
        return;
        }
        temp=temp->next;
        pos++;
    }
    if(flag==0)
        printf("The element is not found in this linklist");
}
void dis()
{
    if(head==0)
        printf("the list is empty");
    else{
    temp=head;
    while(temp!=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
    }
}
void rev()
{
    struct node*pre,*cu,*ne;
    pre=0;
    cu=ne=head;
    while(ne!=0)
    {
        ne=ne->next;
        cu->next=pre;
        pre=cu;
        cu=ne;

    }
    head=pre;
}
void delat()
{
    struct node*nextnode;
    int pos,i=1;

    printf("enter the node position which you want to delete:");
    scanf("%d",&pos);
    if(pos==1)
    {
         nextnode=head;
   head=head->next;
   free(nextnode);
    }
else{
            temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
free(nextnode);

}


}



void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.creation \n 2.Insertion at after \n 3. Insertion at before \n 4.searching \n 5.traversing \n 6.Reversing the list \n 7.Deletion of a particular node\n 8.exit \n Enter your choice \n ");
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
