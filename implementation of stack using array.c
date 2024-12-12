#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
top=-1;
void push(int item)
{
if(top==max-1)
printf("overflow");
else
{
top++;
stack[top]=item;


}




}
int pop()
{
int k=-402;
if(top==-1)
{
printf("underflow");
}
else
{
k=stack[top];
top--;

}
return(k);



}

void peak()
{

if(top==-1)
{
printf("stack is empty");
}
else
{
printf("\n%d",stack[top]);

}

}

void display()
{
int i;
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);



}
void main()
{
int k;
push(67);
push(45);
push(34);
push(23);
push(12);
k=pop();
printf("%d",k);
peak();
display();



}











