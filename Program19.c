// Demonstation of Iteration using while loop by accepting user input:
// Display output by accepting input from user using while loop:

#include<stdio.h>

int Display(int A)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=A)
    {
        printf("Jay Ganesh...!\n");
        iCnt++;
    }
}

int main()
{
    int iSize=0;
    int iRet=0;

    printf("Enter the number of Iterations:\n");
    scanf("%d",&iSize);

    iRet=Display(iSize);

    return 0;
}