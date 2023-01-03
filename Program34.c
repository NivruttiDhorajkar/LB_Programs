// Problem Statement:Accept the input from user  check wheather number is perfect or not.

// Input : 6
// Output : Number is perfect

// Input : 8
// Output : Number is not pefect

#include<stdio.h>
#include<stdbool.h>

bool PerfectOrNot(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt< iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if( iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue=0;
    int iAns=0;
     
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iAns = PerfectOrNot(iValue);

    if (iAns == true)
    {
        printf("Number is perfect");
    }
    else
    {
        printf("NUmber is not perfect");
    }
    return 0;
}
