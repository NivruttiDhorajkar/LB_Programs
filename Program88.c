// Problem Statement : Accept number from user and 
// print that number of * on screen.

// Input : 4
// Output : *   *   *   *

// Input : -4
// Output : *   *   *   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}