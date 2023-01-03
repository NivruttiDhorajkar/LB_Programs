// // Problem Statement : Accept N number from user and 
// display that numbers in reverse order.

// Input: N : 3     (10 20  30 )
// Output : 30  20  10

// Input: N :5      (10 20  30  40  50)
// Output : 50  40  30  20  10 

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt = iSize-1; iCnt>=0 ; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}


int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    printf("Enter Number of element:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc (iLength * sizeof(int));

    printf("Enter the elements:\n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements in reverse order:\n");

    DisplayReverse(ptr,iLength);

    free(ptr);
    return 0;
}