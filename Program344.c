/*

Accept decimal number from user and accpet position from user
and OFF the Bit of that particular position.

Input : No : 208
        Pos : 7
Output : 144


*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OFFBit(UINT No,UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;
    iMask = iMask << (Pos -1);

    iMask = ~iMask;

    Result = No & iMask;
    return Result;
}

int main()
{
    UINT value = 0;
    UINT bRet = 0;
    UINT Position = 0;

    printf("Enter number:\n");
    scanf("%d",&value);

    printf("Enter the position:\n");
    scanf("%d",&Position);

    bRet = OFFBit(value,Position);
    printf("Updated number is:%d\n",bRet);
    return 0;
}
