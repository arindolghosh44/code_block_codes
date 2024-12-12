#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[34][56],c[45],i,j,n,p,sum=0,sum1=0,t,g;
printf("enter the  array size:");
scanf("%d %d",&n,&p);

printf("enter the first array element one by one:");

for(i=0;i<n;i++)
{
for(j=0;j<p;j++)
{
scanf("%d",&a[i][j]);
}
}


printf("\nthe first array is:");
for(t=0;t<n;t++)
{
for(g=0;g<p;g++)
{
printf(" %d",a[t][g]);
}
printf("\n");
}


for(i=0,j=0;i<n,j<p;i++,j++)
{
sum=sum+a[i][j];

}


for(t=0,g=0;t<n,g<p;t++,g--)
{
sum1=sum1+a[t][g];

}
printf("\n the sum of left diagonal is");
printf("%d",sum);

printf("\n the sum of right diagonal");

printf(" %d",sum1);


}
