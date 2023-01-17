/*
Accept number from user and 
return addition from 0 to that number 
using Recursive.

Input  : 4
Output : 4*3*2*1 = 24
*/

#include<stdio.h>

int  FactorialR(int No)
{
    static int iFact = 1;
    static int iCnt = 1;

    if (iCnt <= No )
    {
        iFact = iFact * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return iFact;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = FactorialR(Value);
    printf("Muliplication is:%d\n",iRet);

    return 0;
}