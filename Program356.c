/*
Accept number from user and 
display factors of number 
using Recursive.

Input  : 10
Output : 1  2   5
*/

#include<stdio.h>

void FactorsR(int No)
{
    static int iCnt = 1;
    
    if(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        FactorsR(No);
    }
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    FactorsR(Value);

    return 0;
}