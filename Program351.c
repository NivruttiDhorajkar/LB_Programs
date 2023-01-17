/*
Accept number from user and 
print * on scrren of that number
using recursive.
*/

#include<stdio.h>

void DisplayR(int No)
{
    static int iCnt = 1;
    
    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);     // Recursive call
    }
}

int main()
{
    int Value = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Value);

    DisplayR(Value);
    printf("\nEnd of Main\n");
    return 0;
}