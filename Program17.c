// Demonstation of Iteration using for loop by accepting user input:
// Display output by accepting input from user using for loop:

#include<stdio.h>

int Display(int A)
{
    
    for(int iCnt=1; iCnt<=A; iCnt++)
    {
        printf("Jay Ganesh...!\n");
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