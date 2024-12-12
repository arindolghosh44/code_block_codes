#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
 typedef struct node
{
    char name [24];
    char aadhar[12];
    char mobile[13];
    char city[24];
}st;
st q[MAX];
int f=-1;
int r=-1;
void enque(char a[24])
{
    if(r==MAX-1)
        printf("Overflow");
    else if(f==-1 && r==-1)
    {
        f=r=0;
        q[r]=gets(a);


    }
    else{

        r++;
        q[r]=gets(a);





    }
}
void deque()
{
    st x;
    if(r==-1  && f==-1)
        printf("Underflow");
    else if(r==f)
    {
        f=r=-1;
    }
    else{
        printf("the element deleted from queue is:");
        x=q[f];
        f++;
        printf("the deleted name,aadhar,mobile number and city name  are:");
        puts(x.name,x.aadhar,x.mobile,x.city);




    }
}
void display()
{
    int i;
    if(f==-1 && r==-1)
        printf("the list is empty");
    else{
        printf("the elements are:");
        for(i=f;i<=r;i++)
        {
            puts(q.name,q.aadhar,q.mobile,q.city);
        }

    }
}
void main()
{
    int ch,choice=1;
    st p;
    while(choice)
    {
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            printf("enter the elements one by one:");
            gets(p.name);
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("wrong entry");




        }
        printf("want to continue:");
        scanf("%d",&choice);
    }





}
