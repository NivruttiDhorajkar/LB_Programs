// Program Statement : Accept number from user and
// return smallest digit of that number.

// Input : 271
// Output : 1

// Input : 589
// Output : 5

// Input : 820
// Output : 0

#include<stdio.h>

int CheckMinDigit(int iNo)
{
    int iDigit=0;
    int iMin=9;

    if(iNo < 0)     //Updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=CheckMinDigit(iValue);

    printf("Smallest digit of %d is :%d\n",iValue,iRet);

    return 0;
}