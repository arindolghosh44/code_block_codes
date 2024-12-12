#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

char stack[max];
int top=-1;

 void push(char item)
{
if (top==max-1)
printf("overflow");
else
{
top++;
stack[top]=item;

}





}
char pop()
{

char k='@';
if(top==-1)
{
printf("underflow");
}
else
{
k=stack[max];
top--;
}
return (k);


}
void main()
{
char q[67],ch,p[89];
int l,i,t,j,k,n;
l=strlen(q);
t=strlen(p);
printf("enter the input with close braket");
printf("")
gets(q);
for(i=0;i<l;i++)
ch=q[i];
push('(');
if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z'|| ch>='0' && ch<='9')

{
for(j=0;j<t;j++)
{
p[j]=ch;
}


}
else if(ch=='(')
push('(');
else if(ch=='+' || ch=='-'|| ch=='*' || ch=='\')
{
while


}








}






}
