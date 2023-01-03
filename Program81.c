// Problem Statement : Accept N number from user as well as another number from user and
// return the index which number ocuurs for the first time and not occurs return failure.

// Input : 5    (10 20  30  40  50 )    20
// Output : at index-1

// Input : 3    (10 20  30)         30
// Output : at index-2

#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckFirstIndex(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the element to findout the first index of that number : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckFirstIndex(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
        printf("%d is occured in the array at index %d\n",iValue,iRet);
    }
    
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}