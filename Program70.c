// Problems on N Numbers:
// Problem Statement : Accept N numbers from user and
// perform the addition of that N numbers.

// Input : 5        //10  20  30  40  50  
// Output : 150

// Input : 3        //11  21  20
// Output : 52

// Input : 4        //5   10  3   8
// Output : 26

#include<stdio.h>

int Summation(int Data[], int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt=0;
    int iRet=0;

    printf("Enter the elements:\n");
    
    for (iCnt=0; iCnt<5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are:\n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet=Summation(Arr,5);
    printf("Addition of all elements is:%d\n",iRet);
   
    return 0;
}