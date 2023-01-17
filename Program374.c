/*
Write a recursive program which display elements of array.
Output :    10
            20
            30
            40
            50
*/

#include<stdio.h>

void DisplayCharR(int Arr[], int iSize)
{
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        DisplayCharR(Arr,iSize);
    }
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    DisplayCharR(Brr,5);
    
    return 0;
}