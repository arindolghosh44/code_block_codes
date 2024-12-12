#include <stdio.h>
#include <stdio.h>
struct node
{
  int value;
  struct node*next;
};
 typedef struct node N;
 N*start=NULL,*ptr;
 void createNode()
 {
   N *tmp;
   tmp=(N*)malloc(sizeof(N));
   printf("\n supply values: ");
   scanf("%d",&tmp->value);
   if(start==NULL)
 {
   start=tmp;
   ptr=tmp;
 }
 else
 {
   ptr->next=tmp;
   ptr=tmp;
 }
 tmp->next=NULL;
 }
 void traversal()
 {
   N *tmp;
   tmp=start;
   printf("\n list is now: ");
   while(tmp!=NULL)
 {
   printf("%d",tmp->value);
   tmp=tmp->next;
 }
 }
 void insert_begin()
 {
   N*tmp;
   tmp=(N*)malloc(sizeof(N));
   printf("\n supply value: ");
   scanf("%d",&tmp->value);
   tmp->next=start;
   start=tmp;
 }
 void insert_end()
 {
   N *tmp,*p;
   tmp=(N*)malloc(sizeof(N));
   printf("\n supply value: ");
   scanf("%d",&tmp->value);
   tmp->next=NULL;
   p=start;
   while(p->next!=NULL)
 {
   p=p->next;
 }
 p->next=tmp;
 }
 void insert_position()
 {
   N *tmp,*p;
   int n,i;
   printf("\n supply value: ");
   scanf("%d",&tmp->value);
   printf("\n enter position: ");
   scanf("%d",&n);
   p=start;
   for(i=1;i<n-1;i++)
   {
     p=p->next;
     tmp->next=p->next;
     p->next=tmp;
   }
 }
   void main()
   {
     int ch;

     while(1)
     {
       printf("\n MENU IS...............");
       printf("\n1.......createNode");
       printf("\n2........display");
       printf("\n3........Insert node at the begin");
       printf("\n4.........Insert node at the end");
       printf("\n5..........Insert node  in between");
       printf("\n0.......exit");
       printf("\n\n enter choice");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1:createNode();
                break;
         case 2:traversal();
                break;
         case 3:insert_begin();
                break;
         case 4:insert_end();
                break;
         case 5:insert_position();
                break;
         case 6:exit(0);
         default:
            printf("wrong entry");
       }


     }

   }
