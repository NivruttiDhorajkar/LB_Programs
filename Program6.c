#include<stdio.h>

// int MultiplicationOfNumbers(int iValue1, int iValue2)
// {
//     int iAns=0;
//     iAns=iValue1 * iValue2;
//     return iAns;
// }

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iMult=0;

    printf("Enter First Number:\n");
    scanf("%d",&iNo1);

    printf("Enter Second Number:\n");
    scanf("%d",&iNo2);

    printf("First Numbr is:%d\n",iNo1);
    printf("Second number is:%d\n",iNo2);

    // iMult=MultiplicationOfNumbers(iNo1,iNo2);
    iMult=iNo1 * iNo2;

    printf("Multiplication is:%d",iMult);

    return 0;
}