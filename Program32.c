// Problem Statement:Accept the number from user find Factors of 1 to N Numbers using for loop using time compexicity.
// Input : 10
// Output : Factors are : 1 2 5

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    printf("Factors are:\n");
    for (iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}