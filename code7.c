// Write a program in C to get the largest element of an array using the function.
#include<stdio.h>
int largest(int x[]);
int main()
{
    int a[5];
    printf("Enter the elements in array -\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    largest(a);
}
int largest(int x[])
{
    int max=0;
    for(int i=0;i<5;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }

    }
    printf("The largest element is %d",max);
}