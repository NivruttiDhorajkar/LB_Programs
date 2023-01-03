// Problem Statement :  Accept number of rows and columns from user
// and Display bellow pattern.

// Input : Row : 6       Column : 6
// Output :    $    $   $   $   $   $
//             $    *   *   *   *   $
//             $    *   *   *   *   $
//             $    *   *   *   *   $
//             $    *   *   *   *   $
//             $    $   $   $   $   $


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;


    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((j==1) || (j == iCol) || ((i ==1) || (i==iRow)))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}