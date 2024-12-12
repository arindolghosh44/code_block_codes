#include<stdio.h>
#include<string.h>
#define max 100
int r=-1;
int f=-1;
struct nava
{
char name[50];
long int aadar;
long int mobile;
char city[50];
}v[max];

void enque(char a,long int b,long int c,char d)
{
    char n[200];
    n=gets(nava.a,nava.b,nava.c,nava.d);
    if(r==max-1)
        printf("overflow");
    else if(f==-1 && r==-1)
    {
        f=r=0;
        nava[r]=n;

    }
    else{
        r++;
        nava[r]=n;
    }
}
void deque()
{

    char n[200];

     else if(f==-1 && r==-1)
    {
        printf("underflow");

    }
    else if(r==f)
    {
        f=r=-1;
    }
    else{

        printf("The element deleted from queue");
        n=nava[f];
        f++;
        printf("%c",n);

    }
}
void display()
{
    int i;
    if(f==-1 && r==-1)
        printf("empty");
    else{
        for(i=f;i<=r;i++)
            printf("%c",nava[f]);



    }





}










void main()
{

    printf("the booking sequence is");
    enque(rajendra,6799780045890,9749429965,asansol);
    enque(rajendra,6799780045890,9749429965,asansol);
    enque(rajendra,6799780045890,9749429965,asansol);
    enque(rajendra,6799780045890,9749429965,asansol);
}
