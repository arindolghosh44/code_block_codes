#include<stdio.h>
#define Max 50
int stack[Max];
top=-1;
void push(int a)
{
    if(top==Max-1)
        printf("Stack overflow");
    else{
        top++;
        stack[top]=a;
    }
}
int pop()
{
    int k;
    if(top==-1)
        printf("stack underflow");
    else{
        k=stack[top--];
    }
    return (k);
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d",stack[i]);
}
void main()
{
    int ch,item,k,n,i;

    while(1)
    {
        printf("\n 1.push \n 2. pop \n  3.display \n 4.Exit");
        printf(" \n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("how many element you want to push:");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        scanf("%d",&item);
        push(item);
        }
        break;
    case 2:
        k=pop();
        printf("The deleted element is:%d",k);
        break;
    case 3:
        display();
        break;
    case 4:
        exit(1);
    default:
        printf("Wrong entry");
    }
    }
}
