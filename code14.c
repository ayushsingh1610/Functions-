// Write a C program to print all perfect numbers between given interval using functions.
#include<stdio.h>
void perfect(int,int);
int factor(int);
void main()
{
    int start,end;
    printf("Enter the starting value - ");
    scanf("%d",&start);

    printf("Enter the ending value - ");
    scanf("%d",&end);
    perfect(start,end);
}
void perfect(int a, int b)
{
    for(int i=a;i<b;i++)
    {
        if(factor(i)==1)
        printf("%d, ",i);
    }
}
int factor(int n)
{
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(temp==sum)
    return 1;
}