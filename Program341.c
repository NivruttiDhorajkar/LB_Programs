/*

Accept number from user and accept position of that number
and check that particular position is ON or OFF.

Input : No:10  Position : 12
Output : OFF

Input : No:526  Position : 10
Output : ON

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;    // UINT = 1;
    UINT Result = 0;

    if((Pos < 1 ) || (Pos > 32))
    {
        printf("Invalid position, it should be between 1 to 32\n");
        return false;
    }

    iMask = iMask << (Pos - 1);     // Dynamic Mask Formation

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
    UINT iPos = 0;
    bool bRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&value);

    printf("Enter the position of bit:\n");
    scanf("%d",&iPos);

    bRet = CheckBit(value,iPos);

    if(bRet == true)
    {
        printf("%d position bit is ON\n",iPos);
    }
    else
    {
        printf("%d position bit is OFF\n",iPos);
    }

    return 0;
}


