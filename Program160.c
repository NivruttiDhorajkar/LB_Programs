/*
Problem Statement : Accept one string from user and one string is empty,
copy converting the string into toggle case.

Input : 
Output : 

Input : 
Output : 

*/

#include<stdio.h>

void strcpyLwrX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >='A') && (*src <= 'Z'))
        {
            *dest = *src +32;
        }
        else if((*src >='a') && (*src <='z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{   
    char Arr[20];
    char Brr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    strcpyLwrX(Arr,Brr);       // strcpyX(100,200)
    printf("Copied string is :%s\n",Brr);
    printf("Original string is:%s\n",Arr);


    return 0;
}