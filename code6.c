//  Write a program in C to check whether a number is a prime number or not using the function.
#include<stdio.h>
int checkPrime(int);
int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    checkPrime(n);
}
int checkPrime(int x)
{
    int c=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("The given number is Prime.");

    else 
    printf("The given number is NOT Prime.");
}