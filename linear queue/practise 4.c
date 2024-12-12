#include<stdio.h>
void main()
{
    int f[34],s[34],m[78],i,j,k,sf,ss;
    printf("Enter the size of the first array:");
    scanf("%d",&sf);
    printf("Enter the element of the first array:");
    for(i=0;i<sf;i++)
    {
        printf("Element-[%d]:",i);
        scanf("%d",&f[i]);
    }
    printf("Enter the size of the second array:");
    scanf("%d",&ss);
    printf("Enter the element of the second array:");
    for(j=0;j<ss;j++)
    {
        printf("Element-[%d]:",j);
        scanf("%d",&s[j]);
    }
    printf("The first array is:");
     for(i=0;i<sf;i++)
    {
        printf(" %d",f[i]);
    }
    printf("\n The second array is:");
     for(j=0;j<ss;j++)
    {
        printf(" %d",s[j]);
    }
    for(i=0,j=0,k=0;f<sf && s<ss;)
    {
        if(f[i]<s[j]){
            m[k]=f[i];
            k++;
            i++;
            }
        else{
            m[k]=s[j];
            k++;
            j++;
        }
    }
    while(i<=sf-1)
    {
        m[k]=f[i];
        i++;
        k++;
    }
    while(j<=ss-1)
    {
        m[k]=s[j];
        j++;
        k++;
    }
    printf(" \n The merged array list is:");
    k=0;
    while(k<sf+ss)
    {
        printf(" %d",m[k]);
        k++;
    }


}
