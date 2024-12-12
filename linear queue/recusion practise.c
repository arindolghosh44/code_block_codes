#include<stdio.h>
int print(int n)
{
return (n-1);
}
void main()
{
    int n=10,v,i;
    for(i=n;i>=0;i--)
    printf("%d",print(n--));
}
