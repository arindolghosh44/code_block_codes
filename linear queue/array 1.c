#include<stdio.h>
void main()
{
    int a[34],i,max,min,j,c=0,k,p,flag=0;
    int n;
    printf("Enter the total number of data:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(i=0;i<n;i++)
      {

       scanf("%d",&a[i]);

max=min=a[0];
      }
         for(i=1;i<n;i++)
         {


             if(max<a[i])
                max=a[i];
                 if(min>a[i])
                    min=a[i];

         }
         for(j=0;j<n;j++)
         {
             if(a[j]%2==0)
                c++;
         }


         printf(" \n The maximum number:%d",max);
         printf(" \n The minimum number is:%d",min);
         printf("\n total number of even number is:%d",c);
         printf(" \n The prime numbers are:");
         for(k=0;k<n;k++)
         {
             flag=0;
             for(p=2;p<a[k]-1;p++)
             {
                 if(a[k]%p==0)
                    flag=1;
             }
             if(flag==0)
                printf(" %d",a[k]);

         }



}
