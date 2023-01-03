// Problems on Digits:
// Problem Statement : Accept number from user and
// calculate summation of its digits.

// Input : 751
// Output : 13

// Input : 7515
// Output : 18

// Input : 75
// Output : 12

// Input : 7
// Output : 7

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum=0;

    while(iNo != 0)
    {
        iDigit =iNo %10;
        iNo = iNo / 10;
        iSum=iSum + iDigit;
    } 
    return iSum;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Summation of digits are: %d\n",iRet);

    return 0;
}