#include <stdio.h>
int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return GCD(b,a%b);
}
void main()
{
    int a,b,v;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    v=GCD(a,b);
    printf("the GCD value of %d and %d is:%d",a,b,v);
}
