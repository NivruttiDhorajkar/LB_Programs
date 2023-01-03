// Demonstation of Iteration using while loop
// Display output using while loop:

#include<stdio.h>

void Display()
{
    int iCnt=0;
    // for(iCnt=1; iCnt<=5; iCnt++)
    // {
    //     printf("Jay Ganesh...!\n");
    // }

    iCnt=1;
    while(iCnt<=5)
    {
        printf("Jay Ganesh...!\n");
        iCnt++;
    }
}

int main()
{
    Display();

    return 0;
}