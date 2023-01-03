/*
Accept two number from user and 
check that number is anagram or not.

Input : N1:  789567           N2: 597768
Output : Numbers is anagram

*/

#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency1[10] = {0};
    int Frequency2[10] = {0};
    bool Flag = true;

    while(iNo1 != 0)
    {
        Frequency1[(iNo1 % 10)]++;
        iNo1 = iNo1 / 10;
    }

     while(iNo2 != 0)
    {
        Frequency2[(iNo2 % 10)]++;
        iNo2 = iNo2 / 10;
    }

    for(int iCnt = 0; iCnt<10; iCnt++)
    {
        if(Frequency1[iCnt] != Frequency2[iCnt])
        {
            Flag = false;
            break;
        }
    }
    return Flag;

}

int main()
{
    int iValue1 = 0;
    int ivalue2 = 0;
    bool bRet = 0;

    cout<<"Enter first number:\n";
    cin>>iValue1;

    cout<<"Enter second number:\n";
    cin>>ivalue2;

    bRet = CheckAnagram(iValue1, ivalue2);

    if(bRet == true)
    {
        cout<<"Numbers is anagram\n";
    }
    else
    {
        cout<<"Numbers is not anagram\n";
    }
        
    return 0;
}