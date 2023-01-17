/*
Accept one decimal number from user and 
count number of bits which are ON or one.

Input : 11
Output : 3

*/

#include<stdio.h>

typedef unsigned int UINT;

int CountONBits(UINT No)
{
    int Digit =0;
    int iCnt = 0;

    while(No != 0)
    {
        Digit = No % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    UINT value = 0;
    int iRet =0;

    printf("Enter number:\n");
    scanf("%d",&value);

    iRet = CountONBits(value);
    printf("Number of bits which are ON is:%d\n",iRet);

    return 0;
}