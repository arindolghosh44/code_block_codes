#include<stdio.h>
void main()
{
int a[45],b[34],c[97],i,j,k,n,m;
printf("\nenter the size of the first array:");
scanf("%d",&n);
printf(" \n enter the element of the first array:");
for(i=0;i<n;i++)
{
printf(" \n element:[%d]",i);
scanf("%d",&a[i]);
}
printf("\n Element of the first array:");
for(i=0;i<n;i++)
{

printf(" %d",a[i]);
}
printf(" \n enter the size of the second array:");
scanf("%d",&m);
printf("\nenter the element of the second array:");
for(j=0;j<m;j++)
{
printf("\nelement:[%d]",j);
scanf("%d",&b[j]);
}


printf("\n Element of the second array:");
for(j=0;j<m;j++)
{

printf(" %d",b[j]);
}
for(i=0,j=0,k=0;i<n ||j<m;)
{
    if(a[i]<b[j])
    {
        c[k]=a[i];
        k++;
        i++;
    }
    else{

      c[k]=b[j];
      k++;
      j++;
    }
}
while(i<=n-1)
{

    c[k]=a[i];
    i++;
    k++;
}
while(j<=m-1)
{

    c[k]=b[j];
    j++;
    k++;
}
printf("the merged array is:");
k=0;
while(k<=m+n){
    printf(" %d",c[k]);
k++;
}





}
