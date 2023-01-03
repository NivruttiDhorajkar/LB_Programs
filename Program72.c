// Problem Statement : Accept N number from user and
// return the average of that numbers.

// Input : (5) (10   20  30  40  50 ) 
// Output : 30

// Input : (3)  (10   15  20)
// Output : 15

// Input : (4)  (10 20  15  8)
// Output : 13

#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)   //pointer reprsentation of array
float Average(int Arr[],int iSize)
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        iSum =iSum + Arr[iCnt];
    }
    return (iSum / iSize);
}

int main()
{
    int *ptr = NULL;
    int iLength=0;
    int i=0;
    float fRet=0.0f;
    
    printf("Enter the size u want:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter the numbers:\n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    fRet = Average(ptr,iLength);
    printf("Average is:%f",fRet);

    free(ptr);

    return 0;
}