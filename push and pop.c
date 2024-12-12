#include<stdio.h>
#define max 20
int stack[max];
int top=-1;
void push(int k);
int pop();
int disply();
int main()
{
    int k;
push(20);
push(30);
push(40);
push(50);

k=pop();
if(k=-402)
printf("%d",k);



}

void push(int item)
{
   if(top==max-1)
        printf("overflow");
   else{
    top++;
    stack[top]=max;

   }

}
int pop()
{
  int k=-402;
  if(top==-1)
        printf("underflow");
  else
  {
      k=stack[top];
      top--;
  }
  return (k);

}





