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
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}

}
printf(" \n The sorted array is:");
for(i=0;i<n;i++)
    printf(" %d",a[i]);
}
