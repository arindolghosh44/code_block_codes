#include<stdio.h>
#include<string.h>
#define MAX 100
typedef struct node{
char name[23];
char aadhar[23];
char mobile[23];
char city[23];
}N;
N cust[MAX];
int f=-1;
int r=-1;
int c=0;
void enque()
{
    if(r==f)
        printf("Queue is overflow");
    else
    {
        printf("Enter the name of the customer:");
        gets(cust[c].name);
        printf("Enter the aadhar number of the customer:");
        gets(cust[c].aadhar);
         printf("Enter the mobile number of the customer:");
        gets(cust[c].mobile);
         printf("Enter the city name of the customer:");
        gets(cust[c].city);
        cust[r]=cust[c];
        r=(r+1)%MAX;
        c++;
    }
}
char deque()
{
    N temp;
    if(r==0)
        printf("no data is entered yet");
    else{
        temp=cust[f++];
        printf("Enter the name of the customer:");
        puts(cust[c].name);
        printf("Enter the aadhar number of the customer:");
        puts(cust[c].aadhar);
         printf("Enter the mobile number of the customer:");
        puts(cust[c].mobile);
         printf("Enter the city name of the customer:");
        puts(cust[c].city);
        f=(f+1)%MAX;

    }
}
    void main()
    {
        enque();

    }
