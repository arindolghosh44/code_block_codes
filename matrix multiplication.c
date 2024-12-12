#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[34][56],b[23][78],c[78][89],i,j,k,p,n,g,h,sum;
printf("enter the  row and column size of the first array:");

scanf("%d %d",&n,&p);
printf(" \n enter the element of the first array :");
for(i=1;i<=n;i++)
{
for(j=1;j<=p;j++)
{
printf("element:[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}

printf(" \n enter the  row and column size of the second array:");

scanf("%d %d",&g,&h);
printf("enter the element of the second array :\n");
for(i=1;i<=g;i++)
{
for(j=1;j<=h;j++)
{
printf("element:[%d][%d]",i,j);
scanf("%d",&b[i][j]);
}
}
printf(" \n the first array is:");
for(i=1;i<=n;i++)
{
for(j=1;j<=p;j++)
{

printf("\t%d",a[i][j]);
}
printf("\n");
}

printf(" \n the second array is:");
for(i=1;i<=g;i++)
{
for(j=1;j<=h;j++)
{

printf("\t%d",b[i][j]);
}
printf("\n");
}
if(n!=h)
printf(" \n multiplication is not posible");
else
{

for(i=1;i<=n;i++)
{
for(j=1;j<=h;j++)
{
    sum=0;

for(k=1;k<=n;k++)
{
sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;
}
}
}

printf("\n the new matrix is");
for(i=1;i<=n;i++)
{
for(j=1;j<=h;j++)
{
printf("\t%d",c[i][j]);
}
printf("\n");
}
}





}
