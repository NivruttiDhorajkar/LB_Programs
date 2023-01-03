// Problem Statement : Accept N number from user and 
// find out largest number of that N numbers.

// Input : N : 5        (999    456     2000    7820    9999)
// Output : 9999

// Input : N : 3    (1000   78956   45623   )
// Output : 78956


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt=0; iCnt<iSize; iCnt++)     //N
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(ptr,iLength);
    printf("Maxixmum number is:%d ",iRet);

    free(ptr);
    return 0;
}