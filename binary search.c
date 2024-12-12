#include<stdio.h>
#include<stdlib.h>
void main()
{
int high,mid,low,n[23],i,e,size;
printf("enter the size  of the array");
scanf("%d",&size);
printf("enter the total number of data");
for(i=1;i<=size;i++)
scanf("%d",&n[i]);
printf("enter the element you want to find");
scanf("%d",&e);
//binary search main part
low=0;
high=size-1;
mid=(low+high)/2;
while(low<=high)
{

if(e<n[mid])
    //if the middle value is greater than e then we need to decrease our middle value
high=mid-1;
else if(e>n[mid])
low=mid+1;
else if(e==n[mid])
{
printf("the  %d value is find in %d position",e,mid);
break;
}
mid=(low+high)/2;
}
if(low>high)
printf("the value is not found in any position");



}
