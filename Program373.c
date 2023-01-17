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

    while(iCnt < iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
    }
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    DisplayCharR(Brr,5);
    
    return 0;
}