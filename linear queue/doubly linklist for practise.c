#include<stdio.h>
typedef struct node
{
    int data;
    struct node*next;
    struct node*prev;
}cust;
cust*head,*temp,*n;
void cre()
{
    int ch=1;
    head=0;
    while(ch){
    n=(cust*)malloc(sizeof(cust));
    printf("Enter the data:");
    scanf("%d",&n->data);
    n->prev=0;
    n->next=0;
    if(head==0)
        head=temp=n;
    else
    {
        temp->next=n;
        temp->next->prev=temp;
        temp=temp->next;
    }
    printf("Want to continue(1/0):");
    scanf("%d",&ch);
    }
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
void se()
{
    int ch,pos=1,flag=0;
    printf("Enter the element you want to search:");
    scanf("%d",&ch);
   temp=head;
   while(temp!=0){
   if(temp->data==ch){
        printf("%d element found in %d position",ch,pos);
        flag=1;

   }
temp=temp->next;
    pos++;

   }

   if(flag==0)
    printf("%d element is not found",ch);


}
void inaf()
{
    int i=1,pos;
    printf("Which position you want to insert:");
    scanf("%d",&pos);
    n=(cust*)malloc(sizeof(cust));
    printf("Enter the data:");
    scanf("%d",&n->data);
    n->prev=0;
    n->next=0;
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;



}
void inbf()
{
    int i=1,pos;
    printf("Which position you want to insert:");
    scanf("%d",&pos);
    n=(cust*)malloc(sizeof(cust));
    printf("Enter the data:");
    scanf("%d",&n->data);
    n->prev=0;
    n->next=0;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}
void inbeg()
{

    n=(cust*)malloc(sizeof(cust));
    printf("Enter the data:");
    scanf("%d",&n->data);
    n->prev=0;
    n->next=0;
    if(head==0)
        head=temp=n;
        else{
            n->next=head;
            head->prev=n;
            head=n;

        }
}
void inlast()
{

    n=(cust*)malloc(sizeof(cust));
    printf("Enter the data:");
    scanf("%d",&n->data);
    n->prev=0;
    n->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;



}
void rev()
{
     cust*current,*nextnode;
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
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.cre \n 2. dis \n 3. se\n 4.inaf \n 5. inbf \n 6.inbeg \n 7. inlast\n  8.rev \n  9.exit \n  ");
        printf(" \n Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            cre();
            break;
        case 2:
            display();
            break;
        case 3:
            se();
            break;
        case 4:
            inaf();
            break;
        case 5:
            inbf();
            break;
        case 6:
            inbeg();
            break;
        case 7:
            inlast();
            break;
        case 8:
            rev();
            break;
        case 9:
            exit(1);
        default:
            printf("wrong entry");

        }
    }
}
