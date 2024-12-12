#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 5
int q[Max];
int f=-1;
int r=-1;
void enque(int a)
{
    if((r+1)%Max==f)
        printf("The queue is overflow");
    else if(f==-1 && r==-1)
    {
        f=r=0;
        q[r]=a;
    }
    else{
        r=(r+1)%Max;
         q[r]=a;

    }
}
void deque()
{
    int a;
    if(f==-1 && r==-1)
        printf("The queue is underflow");
        else if(f==r)
            f=r=-1;
    else{
        a=q[f];
        f=(f+1)%Max;
        printf("The deleted element is %d",a);
    }
}
void display()
{
int i=f;
if(f==-1 && r==-1)
printf("the queue is empty");
else
{
printf("the que is ");
while(i!=r)
{
printf(" %d",q[i]);
i=(i+1)%Max;
}
printf(" %d",q[r]);




}



}

void main()
{
    int ch,a;
    while(1)
    {
        printf("\n 1. enque \n 2. deque \n 3. display \n 4. exit\n Enter your choich:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value :");
            scanf("%d",&a);
            enque(a);
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
    }
}

