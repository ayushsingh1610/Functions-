// Write a C program to print all Armstrong numbers between given interval using functions.
#include<stdio.h>
#include<math.h>
void print(int,int);
int isArmstrong(int);
int count(int);
void main()
{
    int start,end;
    printf("Enter the Starting point- ");
    scanf("%d",&start);

    printf("Enter the Ending point- ");
    scanf("%d",&end);
    print(start,end);
}
void print(int start, int end)
{
    printf("The Armstrong number from %d to %d are - \n",start,end);
    for(int i=start;i<=end;i++)
    {
        if(isArmstrong(i))
        printf("%d, ",i);
    }
}
int isArmstrong(int n)
{
    int temp=n;
    int sum=0;
    int d=count(n);
    while(temp!=0)
    {
        int r=temp%10;
        sum+= pow(r,d);
        temp/=10;
    }
    if(sum==n)
    return 1;

    else 
    return 0;
}
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    if(c>2)
    return c;
}
