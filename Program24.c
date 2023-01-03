#include<stdio.h>

void Display(int iNO)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=iNO)
    {
        printf("Jay Ganesh..! %d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iSize=0;

    printf("Enter number of Iterations:\n");
    scanf("%d",&iSize);

    Display(iSize);

    return 0;
}