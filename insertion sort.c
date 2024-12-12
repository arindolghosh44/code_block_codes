#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[56],i,n,j,key;
printf("enter the size of the array:");
scanf("%d",&n);
printf(" enter the element one by one:");
{
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
a[i]=key;
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;

printf(" \n The sorted array is:");
for(i=0;i<n;i++)
    printf(" %d",a[i]);
}
