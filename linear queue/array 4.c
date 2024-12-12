#include<stdio.h>
void main()
{
    int a[34],i,j,n,temp=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

         for(i=0;i<n;i++)
         {
             temp=1;
              for(j=0;j<n;j++)
              {
                  if(a[i]==a[j])
                  {
                    temp++;

                  }
              }

              if(temp==1)
             printf(" \n %d element found for %d  times ",a[i],temp);
             else if(temp>0)
                 printf(" \n %d element found for %d  times ",a[i],temp);

         }

}
