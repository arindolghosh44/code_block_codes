#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 100
typedef struct node
{
    char name[34];
    char aadhar[34];
      char mobile[34];
    char city[45];
}c;

c cust[MAX];

void book(int);
void custde(int);
//void seq();


void main()
{
    int ch,i;
    while(1)
    {
        printf("\n 1.Booking \n 2. Customer details \n 3.Sequence of customer for this day \n 4.Exit\n");
        printf("Enter your choice:");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            printf("How many customer is there:");
            scanf("%d",&i);
            book(i);
            break;
        case 2:
             printf("How many customer is there:");
            scanf("%d",&i);
            custde(i);
            break;
       /* case 3:
            seq();
            break;*/
        case 4:
            exit(1);
        default:
            printf("Wrong entry");
        }

    }
}
void book(int i)
{
    int j;
    for(j=0;j<i;j++)
    {
    printf("  \n Enter the customer name:\n ");
    gets( cust[j].name);
    printf(" \n Enter the city:");
    gets( cust[j].city);
    printf(" \n Enter aadhar number:");
     gets( cust[j].aadhar);
      printf(" \n Enter mobile number:");
    gets( cust[j].mobile);
    }

}
void custde(int i)
{
    int j;
    for(j=i;j<i;j++)
    {
    printf("\n The customer name:");
    puts(cust[j].name);
    printf("\n The city:");
    puts(cust[j].city);
    printf(" \n Enter aadhar number and mobile number");
    puts(cust[j].aadhar);
    puts(cust[j].mobile);
    }

}
