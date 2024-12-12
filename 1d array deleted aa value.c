#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[45],pos,i,n;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter which position you want to deleted this value:");
scanf("%d",&pos);

for(i=pos-1;i<=n;i++)
a[i]=a[i+1];


printf("\n after inserting the element array became");
for(i=0;i<n-1;i++)
printf(" %d",a[i]);
}
