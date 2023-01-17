/*
Accept one decimal number from user and 
check wheather 4th bit of that number is ON or OFF.
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 8;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
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
    UINT value = 0;
    bool bRet = 0;

    printf("Enter number:\n");
    scanf("%d",&value);

    bRet = CheckBit(value);
    if(bRet == true)
    {
        printf("4th Bit is ON\n");
    } 
    else
    {
        printf("4th Bit is OFF\n");
    }

    return 0;
}