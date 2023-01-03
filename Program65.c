// Program Statement : Accept number from user and
// return largest digit of that number.

// Input : 271
// Output : 7

// Input : 589
// Output : 9

// Input : 820
// Output : 8

#include<stdio.h>

int CheckMaxDigit(int iNo)
{
    int iDigit=0;
    int iMax=0;

    if(iNo < 0)     //Updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=CheckMaxDigit(iValue);

    printf("Largest digit of %d is :%d\n",iValue,iRet);

    return 0;
}