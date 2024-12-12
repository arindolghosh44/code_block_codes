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
void main()
{
int i,l;
    char s[45],k;
    printf("Enter the string:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        push(s[i]);
    }
    printf("The reverse string is:");
    for(i=0;i<l;i++)
    {
        k=pop();
        printf("%c",k);
    }

}
