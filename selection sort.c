#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[56],i,n,j,temp;
printf("enter the size of the array:");
scanf("%d",&n);
printf(" enter the element one by one:");
{
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}

}
printf(" \n The sorted array is:");
for(i=0;i<n;i++)
    printf(" %d",a[i]);
}
