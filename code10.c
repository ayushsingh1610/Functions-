// Write a program in C to check whether two given strings are an anagram.
// if we can rearrange characters of one string to form another string. All the characters of one string must be present in another string and should appear same number of time in other string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    char s2[50];
    int p=0;

    printf("Enter the string 1- ");
    gets(s1);
    printf("Enter the string 2- ");
    gets(s2);

    for(int i=0;i<strlen(s1);i++)
    {
        for(int j=0;j<strlen(s2);j++)
        {
            if(s1[i]!=s2[j])
            {
                p=1;
                
            }
        }
    }
    if(p=1)
    printf("The strings are anagram");

    else
    printf("NOT");

}