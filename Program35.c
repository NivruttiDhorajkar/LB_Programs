// Problem Statement:Accept the number from user and check it ia perfect number or not.
// Input : 8
// Ouput : Number is not perfect number

// Input : 28
// Ouput : Number is perfect number

#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
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
      if(iSum == iNo)
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