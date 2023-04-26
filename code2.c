#include<stdio.h>
int square(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    square(n);
}
int square(int a)
{
    printf("%d",(a*a));
    return 0;
}