// Problem Statement: Accept the N number from user And find  its factors.
// Input : 10
// Output : Factors are : 1 2 5

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
   
    for (iCnt=1; iCnt<iNo; iCnt++)
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

    printf("Factors are:\n");
    DisplayFactors(iValue);

    return 0;
}