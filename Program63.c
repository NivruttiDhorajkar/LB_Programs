// Problem Statement : Accept number from user and 
// check it number will palindrome or not using for loop.

// Input : 121
// Output : Number is palindrome

// Input :123
// Output : Number not palindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;

    // for (iRev=0; iNo!=0;  iNo = iNo / 10)
    for (iDigit=0; iNo!=0;  iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;  
    }

    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet = false;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    
    bRet=CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a palindrome number\n",iValue);
    }
    else
    {
         printf("%d is a not palindrome number\n",iValue);
    }

    return 0;
} 