#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
typedef struct node
{
char name[48];
long int aadhar;
long int mobile;
char city[45];
}n;

char n[max];
int r=-1;
int f=-1;
void enque(char a[],long int b,long int c,char d[])
{
if(r==max-1)
printf("overflow");
else if(f==-1 && r==-1)
{
f=r=0;
n[r]=(n.name,n.aadhar,n.mobile,n.city);
}
else
{
r++;
n[r]=(n.name,n.aadhar,n.mobile,n.city);
}

}
void deque()
{
typedef struct no
{
char na[48];
long int aad;
long int mob;
char c[45];
}x;
if(f==-1 && r==-1)
printf("underflow");
else if(r==f)
f=r=-1;
else
{
printf("the element deleted from queue is:");
x=n[f];
f++;
printf(" %s %ld %ld %s",x.na,x.aad,x.mob,x.c);



}



}
void display()
{
int i;
if(f==-1 && r==-1)
printf("empty list");
else
{
for(i=f;i<=r;i++)
printf("%s %ld %ld %s",n[i].name,n[i].aadhar,n[i].mobile,n[i].city);




}
void main()
{
int ch;
typedef struct no
{
char na[48];
long int aad;
long int mob;
char c[45];
}p;
while(1)
{
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the elements:");
scanf("%s %ld %ld %s",&p.na,&p.aad,&p.mob,&p.c);
enque(p.na,p.aad,p.mob,p.c);
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
}





