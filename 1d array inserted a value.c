#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[45],pos,element,i,n;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element one by one:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter which position you want to insert this value:");
scanf("%d",&pos);
printf("\nenter the element you want to store:");
scanf("%d",&element);
//if for(i=pos-1;i<=n;i++) then in pos -1 value is copied to second value by replace this value 1 7 2 2 2 ,in reverse order you can establish your value in empty position
for(i=n;i>=pos-1;i--)
a[i+1]=a[i];
a[pos-1]=element;

printf("\n after inserting the element array became");
for(i=0;i<=n;i++)
printf(" %d",a[i]);
}
