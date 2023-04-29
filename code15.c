// C Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include<stdio.h>
void print(int);
int isPrime(int);
void main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    print(n);
}
void print(int a)
{
    int p=0,q=0;
    for(int i=2;i<a;i++)
    {
        for(int j=2;j<a;j++)
        {
            if(i+j==a)
            {
                if(isPrime(i)&&isPrime(j)==1)
                {
                printf("\nThe sum of two prime number %d and %d are - %d",i,j,a);
                
                }
            }
        }
    }
}
int isPrime(int a)
{
    int temp1=a;
    int c=0;
   for(int i=1;i<a;i++)
   {
        if(a%i==0)
        c++;
   }
   if(c==1)
   return 1;

   else 
   return 0;
}