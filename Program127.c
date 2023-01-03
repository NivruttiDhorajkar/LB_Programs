/*
Problem Statement : Accept charcter from user and 
check wheather upper or not.

Input : A
Output : is a capital letter

*/

#include<stdio.h>
#include<stdbool.h>

bool IsSmallerX(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bRet = IsSmallerX(CValue);
    if(bRet == true)
    {
        printf("%c is a small letter\n",CValue);
    }
    else
    {
        printf("%c is not asmall letter\n",CValue);
    }
    return 0;
}