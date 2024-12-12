#include<stdio.h>
void main()
{
    int a[34],i,j,n,temp=0;
    printf("Enter the array size;");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("The unique element is:");
         for(i=0;i<n;i++)
         {
             temp=0;
              for(j=0;j<n;j++)
              {
                  if(a[i]==a[j])
                    temp++;
              }
              if(temp==1)
              printf(" %d",a[i]);
         }

}
