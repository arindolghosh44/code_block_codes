#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
top=-1;
void push(char a)
{
    if(top==MAX-1)
        printf("Stack is overflow");
    else
        stack[++top]=a;

}
char pop()
{
    char k='@';
    if(top==-1)
        printf("Stack is underflow");
    else
        k=stack[top--];
    return(k);
}
int str(char s[])
{
 int i,val,result,a,b;
 for(i=0;s[i]!='\0';i++)
 {

     if(s[i]>='0' && s[i]<='9')
        push(s[i]-48);
     else{
        a=pop();
        b=pop();
        switch(s[i])
        {
        case '*':
            val=b*a;
            break;
            case '/':
            val=b/a;
            break;
            case '+':
            val=b+a;
            break;
            case '-':
            val=b-a;
            break;
            default:
                exit(1);

        }
        push(val);

     }

 }
 result=pop();
 return result;
}

void main()
{
    int l,i,ch=1;
    char s[34];
    while(ch){
    printf("Enter the postfix expression:");
    gets(s);
    l=str(s);
    printf("The evaluated value of postfix expression is:%d",l);
    printf("Want to continue(1/0):");
    scanf("%d",&ch);
    }



}
