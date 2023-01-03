// Problem Statement : Accept one number from user and
//  count number of even digits using updater.

// Input : 751 
// Output: 0

// Input : 468 
// Output: 3

// Input : 876
// Output: 2

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iEvenCnt=0;
    int iDigit=0;

    if(iNo == 0)
    {
        return 1;
    }

    // if(iNo < 0)     // updater
    // {
    //     iNo = -iNo;
    // }

    while(iNo != 0 )
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);
    printf("Number of even digits are: %d\n",iRet);

    return 0;
}