// Problem Statement : Accept N number from user as well as another number from user and
// check wheather that number is present or not in array.

// Input : 5    (10 20  30  40  50)     50
// Output : number is present

// Input : 5    (10 20  30  25  11)     50
// Output : number is not present

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
bool SearchNumber(int Arr[], int iSize, int iNo)
{
    int iCnt=0;
    int iFrequency=0;
    
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
      if(Arr[iCnt] == iNo)
      {
        iFrequency++;
      }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0,iValue=0;
    bool bRet=0;

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

    printf("Enter the number u want to search:\n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    bRet = SearchNumber(ptr, iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in array:\n",iValue);
    }
    else
    {
        printf("%d is not present in array:\n",iValue);
    }
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}