// Problem Statement : Accept N number from user and 
// ind out Smallest number of that numbers.

// Input : N: 3     (10 20  30)
// Output : 10

// Input : N : 5    (-89    45  0   -789    5)
// Output : -789

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin= Arr[0];

    for(iCnt=0; iCnt<iSize; iCnt++)     //N
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}


int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet=0;

    printf("Enter Number of element:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc (iLength * sizeof(int));

    printf("Enter the elements:\n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Minimum(ptr,iLength);
    printf("Minimum number is:%d ",iRet);

    free(ptr);
    return 0;
}