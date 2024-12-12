#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[45],b[78],pos,i,n;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element one by one of the first array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the size of the second array:");
scanf("%d",&pos);
printf("\n enter the element of the second array:");
for(i=0;i<pos;i++)
scanf("%d",&b[i]);
for(i=pos-1;i>=pos-1;i--)
a[i+1]=a[i];


printf("\n after inserting the element array became");
for(i=0;i<=n;i++)
printf(" %d",a[i]);
}
