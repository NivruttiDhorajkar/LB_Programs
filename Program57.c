// Problem Statement : Accept one number from user and
//  count number of even and odd digits and print it .

// Input : 751 
// Output: even-3   odd- 0

// Input : 468 
// Output: even-3   odd-0

// Input : 876
// Output: even-2   odd-1

// Input : 0
// Output : even-1  odd-0

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iEvenCnt=0;
    int iOddCnt=0;
    int iDigit=0;

    if(iNo == 0)    //Filter
    {
       iEvenCnt++;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Number of even digits are:%d\n",iEvenCnt);
    printf("Number of odd digits are:%d\n",iOddCnt);
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
    DisplayEvenOddDigits(iValue);

    return 0;
} 