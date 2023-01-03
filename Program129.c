/*
Problem Statement : Accept charcter from user and 
check wheather upper or not using ASCII value.

Input : A
Output : is a capital letter

*/

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch >= 65) && (ch <= 90))
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
    bool bRet= false;

    printf("Please enter one charcter\n");
    scanf("%c",&CValue);

    bRet = IsCapitalX(CValue);
    if(bRet == true)
    {
        printf("%c is a capital letter\n",CValue);
    }
    else
    {
        printf("%c is not a capital letter\n",CValue);
    }
    return 0;
}