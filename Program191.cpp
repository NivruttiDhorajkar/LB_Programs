/* 
find factorial of number using class.
*/

#include<iostream>
using namespace std;

// Problems on numbers
class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        int Factorial()
        {
            int iCnt = 0;
            int iFact = 1;
            for(iCnt=1; iCnt<=iNo; iCnt++)
            {
                iFact = iFact*iCnt;
            } 
            return iFact;   
        }

};

int main()
{
    int iValue = 0 ;
    int iRet = 0;  

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet = obj.Factorial();

    cout<<"Factorial is:"<<iRet<<"\n";
    return 0;
}