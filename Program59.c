// Problem Statement : Accept number from user and 
// check it number will palindrome or not.

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

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
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