#include<stdio.h>

int Display(int iNO)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("Jay Ganesh..! %d\n",iCnt);
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