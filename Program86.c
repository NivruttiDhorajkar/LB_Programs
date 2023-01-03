// Problem Statement : Accept N number from user as well as one another number
// and find last occurence index.

// Input : N : 5    No : 10 (   10  20  30  40  10)
// Output : 4

// Input : N : 5    No : 40 (   10  20  30  40  10)
// Output : 3


#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = iSize-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    int iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout  that number at last occurance: \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckLastOccurance(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
        printf("%d is occured in the array at last index %d\n",iValue,iRet);
    }
    
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}