#include<stdio.h>
void main()
{
int a[29],b[45],c[34],i,j,n,e,o,k;
printf("input the size of the array:");
scanf("%d",&n);
printf("input size of the even numbers array:");
scanf("%d",&e);
printf("input size of the even numbers array:");
scanf("%d",&o);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the array is:");
for(i=0;i<n;i++)
printf("%d",a[i]);
for(i=0;i<n;i++)
{

if(a[i]%2==0)
{
j=0;
while(j<e)
{
a[j]=a[i];
j++;

}

}
 else if(a[i]%2!=0)
{
k=0;
while(k<o)
{
a[k]=a[i];
k++;

}



}












}
printf("the even number of element is:");
for(j=0;j<e;j++)
printf("%d",a[j]);
printf("the odd number of element is:");
for(k=0;k<o;k++)
printf("%d",a[k]);






