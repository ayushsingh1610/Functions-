// Write a program in C to check if a given number is even or odd using the function. 
#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    check(n);
}
int check(int x)
{
    if(x%2==0)
    printf("The entered num is EVEN");
    
    else
    printf("The entered Num is ODD");
}