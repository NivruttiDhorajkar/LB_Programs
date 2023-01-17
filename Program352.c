/*
Accept number from user and 
return addition from 0 to that number 
using Iterative.
Input  : 4
Output : 4+3+2+1 = 10
*/

#include<stdio.h>

int  SummationI(int No)
{
    int iSum = 0;
    int iCnt = 0;

    while(iCnt <= No )
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = SummationI(Value);
    printf("Addition is:%d\n",iRet);

    return 0;
}