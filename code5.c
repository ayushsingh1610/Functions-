//  Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int series(int );
int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    series(n);
}
int series(int x)
{
    int sum=0;
    int f=1;

    for(int i=1;i<=x;i++)
    {
        f=f*i;
        sum=sum+(f/i);
    }
    printf("The result is - %d",sum);
    
}