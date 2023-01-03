// Problem Statement: Accept the N number from user and //find the addition of that factors //
// and check number is perfect or not using functional approach.

// Input : 10       //Factors are : 1 2 5
// Output : Number is not perfect.            //Addition of factors of 10 is 8. 

// Input : 6
// Output : Number is perfect number


#include<stdio.h>
#include<stdbool.h>


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

// 6    28  496 8128 -> Perfect Numbers
bool CheckPerfect(int iData)
{
    int iAns = 0;
    iAns =SumFactors(iData);
    if(iAns == iData)
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
    bool bRet=false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d is Perfect Number:\n",iValue);
    }
    else
    {
        printf("%d is Not Perfect Number:\n",iValue );
    }

   

    return 0;
}