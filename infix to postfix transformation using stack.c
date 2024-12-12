#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define max 50
char stack[max];
 int top=-1;
void push(char item)
{
if(top==max-1)
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
printf("underflow");
else
{
k=stack[top];
top--;

}
return (k);



}
int check(char ch,char ch2)
{
if(ch=='(')
return 0;
if(ch==ch2)
return 1;
if(ch=='-' && ch2=='*' || ch=='+' && ch2=='*' || ch=='-' && ch2=='/'  || ch=='+'  && ch2=='/')
return 0;

if(ch=='-' && ch2=='^' || ch=='+' && ch2=='^' || ch=='*' && ch2=='^'  || ch=='/'  && ch2=='^')
return 0;
else
return 1;







}













void main()
{
char q[50],p[50],ch,ch2;
int i,l,j,n;
push('(');
printf("enter the string with right parenthesis:");
gets(q);
l=strlen(q);
n=strlen(p);
for(i=0;i<l;i++)
ch=q[i];
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
{
for(j=0;j<n;j++)
p[j]=ch;

}
else if(ch='(')
push('(');
ch2=pop();
else if(ch=='%' || ch=='*' || ch=='/' || ch=='+' || ch=='-' || ch=='^')
check(ch2,ch);












}










