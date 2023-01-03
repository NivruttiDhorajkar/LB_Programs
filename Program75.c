// Problem statement : Accpet N number from user and
// display even and odd number count

// Input : 3    (10 11  12)
// Output : even-2  odd-1


#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOdd(int Arr[], int iSize)
{
    int iCnt=0;
    int iEvenCnt=0;
    int iOddCnt=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) ==0 )
        {
            iEvenCnt++;
        }
        
    }
    printf("Number of even elements are:%d\n",iEvenCnt);
    
    printf("Number of even elements are:%d\n",iSize - iEvenCnt);
    
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

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

    // Step 4 : Call the function
    DisplayEvenOdd(ptr, iLength);


    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}