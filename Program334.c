
/*

Accept number from user check its
10th bit is ON or OFF
*/

#include<stdio.h>
#include<stdbool.h>

// 10th bit

typedef unsigned int UINT;
//
//  0000    0000    0000    0000    0000    0010    0000    0000
//   0        0       0       0       0       2       0      0
//  00000200
//  0X00000200

bool CheckBit(UINT No)
{
    UINT iMask = 0X00000200;
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
        printf("10th Bit is ON\n");
    } 
    else
    {
        printf("10th Bit is OFF\n");
    }

    return 0;
}
