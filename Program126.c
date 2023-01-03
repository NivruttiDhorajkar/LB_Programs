/*
Problem Statement : Accept charcter from user and 
check wheather lower or not.

Input : a
Output : is a small case letter

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    printf("Please enter one charcter\n");
    scanf("%c",&CValue);

    bRet = CheckSmall(CValue);
    if(bRet == true)
    {
        printf("%c is a small case letter\n",CValue);
    }
    else
    {
        printf("%c is not a small case letter\n",CValue);
    }
    return 0;
}