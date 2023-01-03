/*
Problem Statement : Accept one string from user and one string is empty,
copy the data of fill string into empty string.

Input : str : kishor Dhorajkar
Output : copied string is : kishor Dhorajkar

Input : str : India is my country
Output : copied string is : India is my country

*/

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

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

    strcpyX(Arr,Brr);       // strcpyX(100,200)
    printf("Copied string is :%s\n",Brr);

    return 0;
}