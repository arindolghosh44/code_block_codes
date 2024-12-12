#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[23][34],n,i,j,k,t;
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
printf("the selected array is:\n");

if(a[i-1][j]!=NULL && a[i+1][j]!=NULL && a[i][j-1]!=NULL && a[i][j+1]!=NULL)
printf("  ");
else
{
    for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

if(a[i-1][j]==NULL)
    printf("$");
else
printf("%d",a[i-1][j]);
if(a[i+1][j]==NULL)
     printf("$");
else
printf("%d",a[i+1][j]);
if(a[i][j-1]==NULL)
     printf("$");
else
printf("%d",a[i][j-1]);
if(a[i][j+1]==NULL)
     printf("$");
else
printf("%d ",a[i][j+1]);

}
printf("\n");

}

}

}




