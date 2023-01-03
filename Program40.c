//  Accept N  number from user and Display Reverse order N to 1

// Input : 5
// Output : 5   4   3   2   1

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt=0;
    
    printf("\n-------------------------------------\n");
    
    iCnt=iNo;
    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
     
    printf("\n-------------------------------------\n");
}

int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}