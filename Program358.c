/*
Accept number from user and 
check wheather number is perfect or not 
using Recursive.

Input  : 10
Output : not perfect

Input  : 28
Output : perfect

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;
    
    if(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            Sum = Sum + iCnt;
        }
        iCnt++;
        CheckPerfectR(No);
    }
    
    if(Sum == No)
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
    int Value = 0;
    bool bRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    bRet = CheckPerfectR(Value);
    if(bRet == true)
    {
        printf("%d is perfect number\n",Value);
    }
    else
    {
        printf("%d is not perfect number\n",Value);
    }
    return 0;
}