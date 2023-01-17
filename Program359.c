/*
Accept number from user and 
count Digits of that number 
using Recursive.

Input  : 105
Output : 3

Input  : 28586
Output : 5

*/

#include<stdio.h>

int CountDigits(int No)
{
    static int iCnt = 0;
    int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        iCnt++;
        No = No / 10;
        CountDigits(No);
    }
    return iCnt;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = CountDigits(Value);
    printf("Count of Digits is:%d\n",iRet);
    
    return 0;
}