/*
Accept number from user and 
return addition from 0 to that number 
using Recursive.

Input  : 4
Output : 4+3+2+1 = 10
*/

#include<stdio.h>

int  SummationR(int No)
{
    static int iSum = 0;
    static int iCnt = 0;

    if (iCnt <= No )
    {
        iSum = iSum + iCnt;
        iCnt++;
        SummationR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = SummationR(Value);
    printf("Addition is:%d\n",iRet);

    return 0;
}