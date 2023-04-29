// Write a C program to print all strong numbers between given interval using functions.
#include<stdio.h>
void print(int,int);
int isstrong(int);
int fact(int);
void main()
{
    int n,start,end;
    printf("Enter the starting point -");
    scanf("%d",&start);

    printf("Enter the Ending point - ");
    scanf("%d",&end);
    print(start,end);
}
void print(int start,int end)
{
      for(int i=start;i<=end;i++)
      {
        if(isstrong(i)==1)
        printf("%d, ",i);
      }
}
int isstrong(int n)
{
    int backup=n;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum+=fact(r);
        n/=10;
    }
    if(sum==backup)
    return 1;

    else 
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;

    else
    return (n*fact(n-1));
}