#include<stdio.h>
#include<malloc.h>
 typedef struct none{
     int data;
     struct none*next;
}N;
N*head;
void create(int m)
{
    N*q,temp;
    temp=(N*)malloc(sizeof(N));
    temp-->data=m;
    temp->next=0;
    if(head==0)
        head=temp;
    else
    {
        q=head;
        while(q->next!=0)
        {
            q=q->next;
            q->next=temp;
        }
    }
    }
void addafter(int m,int pos)
{
     N*q,temp;
     int i;
     q=head;
     for(i=0;i<pos-1;i++)
     {
         q=q->next;
         if(q==0)
         {
             printf("there are less than %d element:",pos);
             return;
         }
     }
     temp=(N*)malloc(sizeof(N));
     temp->data=m;
     temp->next=q->next;
     q->next=temp;

}
void addbefore(int m,int pos)
{
     N*q,temp;
     int i;
     q=head;
     for(i=0;i<pos-2;i++)
     {
         q=q->next;
         if(q==0)
         {
             printf("there are less than %d element:",pos);
             return;
         }
     }
     temp=(N*)malloc(sizeof(N));
     temp->data=m;
     temp->next=q->next;
     q->next=temp;
}
void display()
{
    N*q;
    if(head==0)
    {
        printf("the list is empty");
        return;
    }
    q=head;
    printf("the list is:");
    while(q!=0)
    {
        printf("%d",q->data);
        q=q->next;
    }
    printf("\n");
}
void search(int m)
{
    N*q=head;
    int pos=1;
    while(q!=0)
    {
        if(q->data==m){
        printf("%d element found in %d position",m,pos);
        return;
        }
        q=q->next;
        pos++;
    }
    if(q==0)
    {
        printf("Item %d is not found in list",m);
    }
}
void rev()
{
    N*p1,*p2,*p3;
    if(head->next==0)
        return;
        p1=head;
        p2=p1->next;
        p3=p2->next;
        p1->next=0;
        p2->next=p1;
        while(p3!=0)
        {
            p1=p2;
            p2=p3;
            p3=p3->next;
            p2->next=p1;
        }
        head=p2;

}
void deleteat(int m)
{
    N*temp,*q,*p;
    if(head->data==m)
    {
        temp=head;
        head=head->next;
        free(temp);
        return;
    }
    q=head->next,p=head;
    for(;q->data!=m && q!=0 ;q=q->next)
        p=q;
     if(q==0)
    {
        printf("%d is not found",m);
        return;
    }
    p->next=q->next;
    free(q);
}
void main()
{
    int ch,m,n,pos,i;
    head=0;
    while(1)
    {
        printf("\n 1.create a linkedlist \n 2.insert at after \n 3.insert at before \n 4.display \n 5.searching an particular element \n 6.reverse the linkedlist \n 7. deleted an element from a particular position \n 8.exit \n enter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("how many nodes you want");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("Enter the element[%d]",i+1);
                scanf("%d",&m);
                create(m);
            }
            break;
        case 2:
            printf("enter the element:");
            scanf("%d",&m);
            printf("Enter the position after which you want to insert:");
            scanf("%d",&pos);
            addafter(m,pos);
            break;
        case 3:
             printf("enter the element:");
            scanf("%d",&m);
            printf("Enter the position before which you want to insert:");
            scanf("%d",&pos);
            addbefore(m,pos);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("enter the element to be search:");
            scanf("%d",&m);
            search(m);
            break;
        case 6:
            rev();
            break;
        case 7:
            if(head==0)
            {
                printf("the list is underflow");'
                continue;
            }
            printf("Enter the element for delete;");
            scanf("%d",&m);
            deleteat(m);
            break;
        case 8:
            exit(1);
        default:
            printf("wrong entry");
        }
    }
}
