// Write a program in C to check Armstrong and Perfect numbers using the function.
#include<stdio.h>
#include<math.h>
void armstrong(int);
void perfect(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    armstrong(n);
    perfect(n);
}
void armstrong(int a)
{
    int c=0,sum=0;
    int x=a;
    int y=a;
    while(x>0)
    {
        c++;
        x= x/10;
    }
    while(y>0)
    {
        int r=y%10;
        sum=sum+ pow(r,c);
        y=y/10;
    }
    if(sum ==a)
    printf("The number %d is ARMSTRONG.",a);
}
void perfect(int b)
{
    int sum=0;
    int n=b;

    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==b)
    {
        printf("\nThe number %d is Perfect.",b);
    }
}