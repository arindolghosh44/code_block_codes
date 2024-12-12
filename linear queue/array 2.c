#include<stdio.h>
void main()
{
    int a[34],i,j,n,temp=0;
    printf("Enter the array size;");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         for(i=0;i<n;i++)
         {
              for(j=0;j<n;j++)
              {
                  if(a[i]<a[j])
                  {
                     temp=a[i];
                     a[i]=a[j];
                     a[j]=temp;
                  }
              }
         }
         printf("The sorted element list is: ");
          for(i=0;i<n;i++)
            printf(" %d",a[i]);


}
