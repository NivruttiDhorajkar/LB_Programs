// Problem Statement: Accept the N number from user and find the addition of that factora
// Input : 10       //Factors are : 1 2 5
// Output : Addition of factors of 10 is 8. 

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for (iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum=iSum + iCnt;
        }
       
    }
     return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);

    printf("Adition of factors of %d is :%d",iValue,iRet);

    return 0;
}