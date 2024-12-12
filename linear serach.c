#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[56],i,n,f,loc=0;
printf("enter the number of element of the array:");
scanf("%d",&n);
printf(" enter the element one by one:");
{


for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
printf(" what value you want to find:");
scanf("%d",&f);
for(i=0;i<n;i++)
{
if(a[i]==f)
{
loc=i+1;
break;
}
}
printf("element is find in %d position:",loc);


}
