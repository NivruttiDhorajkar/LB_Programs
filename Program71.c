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
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    int iLength=0;

    printf("Enter number of elemnents u want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements:\n");
    
    for (iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements from array are:\n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=Summation(ptr,iLength);
    printf("Addition of all elements is:%d\n",iRet);

    free(ptr);
   
    return 0;
}