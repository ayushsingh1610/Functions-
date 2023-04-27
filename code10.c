// Write a program in C to check whether two given strings are an anagram.
// if we can rearrange characters of one string to form another string. All the characters of one string must be present in another string and should appear same number of time in other string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    char s2[50];
    char str1[50]="";
    char str2[50]="";

    printf("Enter the string 1- ");
    gets(s1);
    printf("Enter the string 2- ");
    gets(s2);

   for(char ch='a';ch<='z';ch++)
    {
        for(int i=0;i<strlen(s1);i++)
        {
            if(ch==s1[i])
            {
                strncat(str1,&s1[i],1);
            }
        }
    }
    for(char ch1='a';ch1<='z';ch1++)
    {
        for(int i=0;i<strlen(s2);i++)
        {
            if(ch1==s2[i])
            {
                strncat(str2,&s2[i],1);
            }
        }
    }
    // printf("%s\n",str1);
    // printf("%s\n",str2);

    if(strcmp(str1,str2)==0)
    printf("The strings are ANAGRAM\n");


    else
    printf("The strings are NOT Anagram");  
}