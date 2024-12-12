#include<stdio.h>
#include<string.h>
#define Max 50
char stack[Max];
top=-1;
void push(char a)
{
    if(top==Max-1)
        printf("Stack overflow");
    else{
        top++;
        stack[top]=a;
    }
}
char pop()
{
    char k='@';
    if(top==-1)
        printf("Underflow");
    else{
        k=stack[top--];
    }
    return (k);
}
int check(char ch,char ch2)
{
    if(ch=='(' && ch2==')')
        return 1;
    else if(ch=='{' && ch2=='}')
        return 1;
    else if(ch=='[' && ch==']')
        return 1;
    else
        return 0;
}
void main()
{
    int i,v;
    char c[34],ch2;
    printf("Enter the bracket order:");
    gets(c);
    v=0;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='(' ||c[i]=='{'||c[i]=='[' )
            push(c[i]);
        else if(c[i]==')' ||c[i]=='}'||c[i]==']')
        {
            ch2=pop();
            v=check(ch2,c[i]);
            if(v==0);
            break;


        }
    }
    if(v==0)
        printf("wrong order");
    else
        printf("correct in order");


}
