#include<stdio.h>
# define max 5
int cq[max];
int f=-1,r=-1;
void enque(int);
void deque();
void display();
void main()
{
int ch,x;
while(1)
{
printf("\n1.enque \n 2. deque \n 3. dispaly \n 4. exit \n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter your value to insert;");
scanf("%d",&x);
enque(x);
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
void enque(int a)
{
if(f==-1 && r==-1)
{
f=r=0;
cq[r]=a;


}
else if((r+1)%max==f)
printf("overflow");
else
{
r=(r+1)%max;
cq[r]=a;

}



}
void deque()
{
int x;
if(f==-1 && r==-1)
printf("underflow");
else if(f==r)
f=r=-1;
else
{
printf("The deleted element is:");
x=cq[f];
f=(f+1)%max;
printf("%d",x);



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
printf(" %d",cq[i]);
i=(i+1)%max;
}
printf(" %d",cq[r]);




}



}







