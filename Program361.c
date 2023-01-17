/*
Accept number from user and 
return addition of Digits of that number 
using Recursive.

Input  : 105
Output : 1+0+5 = 6

Input  : 28586
Output : 2+8+5+8+6 = 29

*/

#include<stdio.h>

int SumCountDigitsR(int No)
{
    int iDigit = 0;
    static int iSum = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        SumCountDigitsR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = SumCountDigitsR(Value);
    printf("Sum of Digits is:%d\n",iRet);
    
    return 0;
}