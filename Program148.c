/*
Problem Statement : Accept character from user and convert it
into capital letter

Input : a
Output : A

*/

#include<stdio.h>

char ToUpperX(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }   
}

int main()
{   
    char cValue ='\0';
    char cRet = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the uppercase is:%c\n",cRet);

    return 0;
}