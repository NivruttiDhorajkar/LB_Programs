/*
Accept number from user and 
return addition of factors of number 
using Recursive.

Input  : 10
Output : 1  2   5 = 8

*/

#include<stdio.h>

int SumFactorsR(int No)
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
        SumFactorsR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    iRet = SumFactorsR(Value);
    printf("Additiuon of factors is:%d\n",iRet);

    return 0;
}