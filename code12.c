// Write a C program to print all strong numbers between given interval using functions.
#include<stdio.h>
void check(int,int);
int fact(int);
void main()
{
    int n,start,end;
    printf("Enter the starting point -");
    scanf("%d",&start);

    printf("Enter the Ending point - ");
    scanf("%d",&end);
    check(start,end);
}
void check(int start,int end)
{
    int sum=0;
    while(start!=end)
    {
        int backup=start;
        while (backup>0)
        {
        sum=sum+fact(backup%10);
        backup=backup/10;
        }

        if(sum==start)
        printf("%d, ",start);

        start++;
    }  
}
int fact(int n)
{
    if(n==0)
    return 1;

    else
    return (n*fact(n-1));
}