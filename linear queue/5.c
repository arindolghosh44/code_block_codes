#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int i;
   typedef struct node{
       char food[56];
    }N;
    N c[15];
    for(i=1;c[i]!='\0';i++)
        gets(c[i].food);
    printf(".......................................MENU...........................................");
    for(i=1;c[i]!='\0';i++)
    {
        puts(c[i].food);
    }

    }
