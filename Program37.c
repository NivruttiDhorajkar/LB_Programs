// Accept the number from user and display its non factors addition.
// 
// Input : 6
// Output : 4   5
// 
// Input : 15
// Output : 2   4   6   7   8   9   10  11  12  13  14

#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;
    
    for (iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum=iSum+  iCnt; 
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

    iRet=DisplayNonFactors(iValue);
    printf("Addition of Non Factors of %d is:\n",iRet);

    return 0;
}