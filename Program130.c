/*
Problem Statement : Accept charcter from user and 
check wheather digit or not.

Input : 0
Output : Digit

*/

#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{  
    char CValue = '\0';
    bool bRet=false;

    printf("Please enter one character\n");
    scanf("%c",&CValue);

    bRet = IsDigit(CValue);
    if(bRet == true)
    {
        printf("%c is a digit\n",CValue);
    }
    else
    {
        printf("%c is not a digit\n",CValue);
    }
    return 0;
}