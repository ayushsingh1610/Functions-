// Write a C program to find the maximum and minimum of some values using a function that returns an array.
#include<stdio.h>
void max(int x[]);
void min(int y[]);
void main()
{
    int a[5];
    printf("Enter the number - ");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    max(a);
    min(a);
}
void max(int x[])
{
    int mx=0;

    for(int i=0;i<5;i++)
    {
        if(x[i]>mx)
        {
            mx=x[i];
        }
    }
    printf("The MAXIMUM value is - %d",mx);
}
void min(int y[])
{
    int mn=y[0];
    for(int i=0;i<5;i++)
    {
        if(y[i]<mn)
        {
            mn=y[i];
        }
    }
    printf("\nThe MINIMUN value is %d",mn);
}