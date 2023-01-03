/*
        Input : Row : 4      Column : 4
        Output : 
                    *   *   *   *
                    *   *   *   *
                    *   *   *   * 
                    *   *   *   *
*/

#include<stdio.h>

void Display(int iRow, int iCol)    // N^2
{
    int iCnt=0;
    int i=0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

   for(iCnt=1;iCnt<=iRow; iCnt++)   // Outer
   {
    for(i=1; i<=iCol; i++)          // Inner  4 of Outer
    {
        printf("*\t");               // 4 of Inner
    }
    printf("\n");
   }
}

int main()
{
    int iValue = 0;
    int iValue1 = 0;

    printf("Enter Number of rows:\n");
    scanf("%d",&iValue);

    printf("Enter Number of columns:\n");
    scanf("%d",&iValue1);

    Display(iValue,iValue1);

    return 0;
}