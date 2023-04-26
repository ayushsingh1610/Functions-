#include<stdio.h>
int printSum(int, int );
void main()
{
    int a, b;
    printf("ENter the number - ");
    scanf("%d",&a);

    printf("Enter the number 2 - ");
    scanf("%d",&b);

    int c= printSum(a,b);
    printf("%d",c);

}
int printSum(int x, int y)
{
   return (x+y);
    
}