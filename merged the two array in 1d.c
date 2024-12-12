#include<stdio.h>
#include<stdio.h>
void main()
{
int a[34],b[56],c[45],i,j,k,n,s,m;
printf("enter the first array size:");
scanf("%d",&n);
printf("enter the second array size:");
scanf("%d",&s);
printf("enter the merged array size:");
scanf("%d",&m);
printf("enter the first array element one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the second array element one by one:");
for(j=0;j<s;j++)
scanf("%d",&b[j]);
printf("\nthe first array is:");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
printf("\n the second array is");
for(j=0;j<s;j++)
printf("\n %d",b[j]);
for(i=0;i<n;i++)
{
c[k]=a[i];
k++;
}
for(j=0;j<s;j++)
{
c[k]=b[j];
k++;
}
printf("\nthe merged array is");
for(k=0;k<m;k++)
printf("\n %d",c[k]);
}
