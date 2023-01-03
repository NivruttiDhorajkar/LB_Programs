// Problem Statement: Accept the N number from user And find its Factorial
// Input : 5
// Output : 1*2*3*4*5=120



#include<stdio.h>

int Factorial(int iNo1)
{
    int iFact=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;

}

int main()
{
    int iRet=0;
    int iValue=0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of %d is:%d",iValue ,iRet);

    return 0;
}