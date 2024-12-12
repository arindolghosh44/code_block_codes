#include<stdio.h>
void main()
{
int ch[34],i,n,pos,j;
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
printf(" \n From which position you want to delete:");
scanf("%d",&pos);
j=0;
while(j<pos)
    j++;
    while(j<n){
        ch[j]=ch[j+1];
        j++;
    }
    printf("The new array list is:");
    for(i=0;i<n-1;i++)
    printf(" %d",ch[i]);





}
