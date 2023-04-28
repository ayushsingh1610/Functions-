// Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
int check(int);
int main()
{
    int n,p;
    printf("Enter the number - ");
    scanf("%d",&n);
    // p= check(n);
    if(check(n)==1)
    printf("The number is EVEN");

    else
    printf("The number is ODD");
}
int check(int a)
{
    if(a%2==0)
    return 1;

    else
    return 0;
}