/*
Problem Statement : Accept character from user and convert it
into Toggele case.

Input : A
Output : a

Input : a
Output : A

Input : *
Output : *

*/

#include<stdio.h>

char CharToggleX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch -32;
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

    cRet = CharToggleX(cValue);

    printf("Toggle Character is:%c\n",cRet);

    return 0;
}