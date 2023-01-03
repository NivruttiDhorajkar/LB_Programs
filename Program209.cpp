/*

Problem Statement : Accept number from user and
Display the  maximum time which digit is present and its frequency.

Input : 7987677
Output : Maximum Times Digit is occurs is 7 and Frequency is 4

*/

#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

        void MaxFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }

            int iMaxFrequency = 0;
            int iMaxDigit = 0;
            for(int iCnt = 0; iCnt<10; iCnt++)
            {
                if(Frequency[iCnt] > iMaxFrequency)
                {
                    iMaxFrequency = Frequency[iCnt];
                    iMaxDigit = iCnt;
                }
            }

            cout<<"Maximum Times Digit is occurs is "<<iMaxDigit<<" and Frequency is "<<iMaxFrequency<<"\n";


        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();
    
    return 0;
}