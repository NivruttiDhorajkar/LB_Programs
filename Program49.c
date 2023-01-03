// Problems on Digits:
// Problem Statement : Accept  number from user and
// count number of digits of that number using updater.

// Input : 751
// Output : 3

// Input : 7515
// Output : 4

// Input : 75
// Output : 2

// Input : 7
// Output : 1

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt=0;

    if(iNo < 0)     //Updator.
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit =iNo %10;
        iNo = iNo / 10;
        iCnt++;
    } 
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are: %d\n",iRet);

    return 0;
}