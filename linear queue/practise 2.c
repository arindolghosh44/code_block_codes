#include<stdio.h>
void main()
{
int ch[34],i,n,pos,j,flag;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
    printf(" element-[%d]",i);
    scanf("%d",&ch[i]);
}
printf("The array is:");
for(i=0;i<n;i++)
    printf(" %d",ch[i]);
    printf(" \n the unique element is");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ch[i]==ch[j])
                flag++;

        }
         if(flag==1)
    {

       printf(" \n%d",ch[i]);
    }
    }

}
