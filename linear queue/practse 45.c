#include<stdio.h>
#include<string.h>
#define M 50
char s[M];
int top=-1;
void push(char a)
{
    if(top==M-1)
        printf("Stck is overflow");
    else
        s[++top]=a;
}
char pop()
{
    char k;
    if(top==-1)
        printf("underflow");
    else
        k=s[top--];
    return(k);
}
void main()
{
    int i;
    char a[45],b[56],k[67];
    printf("Enter the number:");
    gets(a);
    printf("The original number is:");
    puts(a);
    printf("The reverse number is:");
    for(i=0;a[i]!='\0';i++)
    {
      push(a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
      k[i]=pop();
    }
    puts(k);

}
