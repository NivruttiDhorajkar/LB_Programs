// Problem Statement :  Accept number of rows and columns from user
// and Display bellow pattern.

// Input : Row : 4       Column : 4
// Output :     1   $   3   $
//              1   $   3   $
//              1   $   3   $
//              1   $   3   $


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((j % 2) != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("$\t");
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