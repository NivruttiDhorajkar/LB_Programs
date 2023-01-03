// Display tables of patricular number

// Input :5
// Output : 5   10  15  20  25  30  35  40  45  50

#include<stdio.h>

void DisplayTable(int iNo)
{
    
    // 5 * 1        iNo * 1
    // 5 * 2        iNo * 2
    // 5 * 3        iNo * 3
    // 5 * 4        iNo * 4
    // 5 * 5        iNo * 5
    // 5 * 6        iNo * 6
    // 5 * 7        iNo * 7
    // 5 * 8        iNo * 8
    // 5 * 9        iNo * 9
    // 5 * 10       iNo * 10

    int iCnt=0;

    printf("*******************************\n");
    printf("Table of %d is:\n",iNo);
    printf("*******************************\n");

    for(iCnt=1; iCnt<=10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
    printf("*******************************\n");
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

   
    return 0;
}