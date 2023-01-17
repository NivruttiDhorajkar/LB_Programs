/*
Write a program which display elements of array.
Output :    10
            20
            30
            40
            50
*/

#include<stdio.h>

void DisplayCharR(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    DisplayCharR(Brr,5);
    
    return 0;
}