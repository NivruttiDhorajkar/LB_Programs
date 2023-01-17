/*

Accept number from user and accept two position of that number
and check that particular position is ON or OFF.

Input : No:136  Position1 : 4   Position2 : 8
Output : ON

Input : No:136  Position : 3    Position2 : 6
Output : OFF

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT iMask1 = 0X00000001;    // UINT = 1;
    UINT iMask2 = 0X00000001; 

    UINT iMask = 0;

    UINT Result = 0;

    if((Pos1 < 1 ) || (Pos1 > 32) || (Pos2 < 1 ) || (Pos2 > 32))
    {
        printf("Invalid position, it should be between 1 to 32\n");
        return false;
    }

    iMask1 = iMask1 << (Pos1 - 1);     // Dynamic Mask Formation
    iMask2 = iMask2 << (Pos2 - 1);

    iMask = iMask1 | iMask2;

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
    UINT iPos1 = 0;
    UINT iPos2 = 0;
    bool bRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&value);

    printf("Enter the position 1 of bit:\n");
    scanf("%d",&iPos1);

    printf("Enter the position 2 of bit:\n");
    scanf("%d",&iPos2);

    bRet = CheckBit(value,iPos1,iPos2);

    if(bRet == true)
    {
        printf("%d & %d position bit is ON\n",iPos1,iPos2);
    }
    else
    {
        printf("%d & %d position bit is OFF\n",iPos1,iPos2);
    }

    return 0;
}


