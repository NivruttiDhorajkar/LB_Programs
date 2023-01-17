
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT Start, UINT End)
{
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;
    UINT iMask = 0;
    UINT Result = 0;

    iMask1 = iMask1 << (Start - 1);
    iMask2 = iMask2 >> (32 - End);

    iMask = iMask1 & iMask2;

    Result = No ^ iMask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT i = 0;
    UINT j = 0;
    UINT Ret = 0;

    printf("Enter number:\n");
    scanf("%d",&Value);

    printf("Enter starting bit position:\n");
    scanf("%d",&i);

    printf("Enter ending bit position:\n");
    scanf("%d",&j);

    Ret = ToggleRange(Value,i,j);
    printf("Updated number is:%d\n",Ret);
    return 0;
}