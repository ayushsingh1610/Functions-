// Write a program in C to swap two numbers using a function.
#include<stdio.h>
void swap(int , int);
int main()
{
    int a,b;
    printf("Enter the number 1- ");
    scanf("%d",&a);

    printf("Enter the number 2- ");
    scanf("%d",&b);
    printf("The values Before swapping are \na - %d \nb - %d\n",a,b);
    swap(a,b);
}
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;

    printf("The values after swapping are \na - %d \nb - %d",x,y);
}