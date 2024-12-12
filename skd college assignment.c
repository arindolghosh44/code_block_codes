#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[23][34],n,i,j;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the element of array:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);

}

}

printf(" the array is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",a[i][j]);

}
printf("\n");

}
printf(" \n enter your position:");
scanf("%d %d",&i,&j);
if(a[i-1][j]==NULL)
    printf("  \n upper element is :out of the array");
else
printf(" \n the upper element is %d",a[i-1][j]);
if(a[i+1][j]==NULL)
     printf("  \n lower element is :out of the array");
else
printf(" \n the lower element is %d",a[i+1][j]);
if(a[i][j-1]==NULL)
     printf("  \n left element is :out of the array");
else
printf("\n the left element is %d",a[i][j-1]);
if(a[i][j+1]==NULL)
     printf("  \n right element is :out of the array");
else
printf("\n the right element is %d ",a[i][j+1]);

}
