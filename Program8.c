//******* Step to follow while programming *******

//1  Understand the problem statement
//2  Write the algorithm
//3  Decide the programming language
//4  Write the program
//5  Test the program

// **********************************************************
//Problem Statement: Accept the number from user and check wheather it is divisible by 5 or not
// Input : 23
// Output : 23 is not ivisible by 5.
//
// Input : 25
// output : 25 is divisible by 5.
//
// Input : -20
// output : -20 is divisible by 5.
//
// **********************************************************

//*************************************************
// Algorithm
//*************************************************

/*
        START
            Accept number from user as No
            Divide that No by 5 and check the value of reminder
            If the value is 0 
                Then display as No is divisible by 5 
            Otherwise
                display as No is not divisible by 5

        END
*/
// *************************************************************************************************

#include<stdio.h>

// *************************************************************************************************
//
// Function Name : DivisibleByFive
// Description : To check wheather input is divisible by 5 or not
// Input : Integer
// Output : Integer
// Author : Nivrutti Rupchnad Dhorajkar
// Date : 12/10/2022
//
// *************************************************************************************************
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if (iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// *************************************************************************************************
// Entry point of application
// *************************************************************************************************

int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter your number:\n");
    scanf("%d",&iValue1);

    iRet=DivisibleByFive(iValue1);
    if(iRet ==0 )
    {
        printf("%d is not divisible by 5\n",iValue1);
    }
    else
    {
        printf("%d is divisible by 5\n",iValue1);
    }

    return 0;
}

//**********************************************************************************
// Result 
// Input : 5
// Output : 5 is divisible by 5
//
//**********************************************************************************