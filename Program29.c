// Problem Statement: Accept the N number from user and find Addtion of 1 to N number.
// Input : 5
// Output : 1+2+3+4+5=15
// Input : 10
// Output : 1+2+3+4+5+6+7+8+9+10=55


#include<stdio.h>

int Summation(int iNo1)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;

}

int main()
{
    int iRet=0;
    int iValue=0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);

    printf("Summation is :%d",iRet);

    return 0;
}