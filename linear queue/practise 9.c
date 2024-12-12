#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
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
        return k;
}
int isalpha(char p)
{
    if(p<='z' && p>='a')
        return 1;
    else if(p<='Z' && p>='A')
        return 1;
    else
        return 0;
}
int isdigit(char p)
{
    if(p<='9' && p>='0')
        return 1;
    else
        return 0;
}
int prcd(char a,char b)
{
    if(a=='(')
        return 0;
    else if(a==b)
        return 1;
    else if((a=='-' && b=='*') || (a=='+' && b=='*') ||(a=='-' && b=='/') ||(a=='-' && b=='/'))
        return 0;
    else if((a=='-' && b=='^') || (a=='+' && b=='^') ||(a=='*' && b=='^') ||(a=='/' && b=='^'))
        return 0;
    else
        return 1;
}

void main()
{
    int i,j=0,flag=1;
    char inf[45],post[89],h;
    push('(');
    printf("Enter the Infix string with )");
    gets(inf);
    for(i=0;inf[i]!='\0';i++)
    {
        if(inf[i]=='(')
            push('(');
        else if(isalpha(inf[i]) || isdigit(inf[i]))
        post[j++]=inf[i];
        else if(inf[i]==')')
        {
            do{
                    h=pop();
                    if(h!='(')
                        post[j++]=h;


            }while(h!='(');
        }
    else if(inf[i]=='*' ||inf[i]=='/' ||inf[i]=='+' ||inf[i]=='-' ||inf[i]=='^' ||inf[i]=='%')
            {
                while(flag)
                {
                   if(prcd(stack[top],inf[i]))
                    post[j++]=pop();
                    else
                        flag=0;
                }
                push(inf[i]);
                flag=1;
            }

        }



    post[j]=NULL;
    printf("The postfix expression is:");
    puts(post);
}
