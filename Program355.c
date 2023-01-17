/*
Accept number from user and 
display factors of number 
using Itrative.

Input  : 10
Output : 1  2   5
*/

#include<stdio.h>

void FactorsI(int No)
{
    int iCnt = 1;
    
    for(iCnt =1; iCnt<=(No/2); iCnt++)
    {
        if(No % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    FactorsI(Value);

    return 0;
}