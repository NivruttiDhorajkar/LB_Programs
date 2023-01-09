/*

Accept n numbers from user and display maximum number in it.
using generic programming

*/

#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Data[] = {110,210,320,40};
    int iRet = Maximum(Data,4);
    cout<<"Maximum is:"<<iRet<<"\n";

    float Data1[] = {10.1f,20.5f,30.3f,40.5f};
    float fRet = Maximum(Data1,4);
    cout<<"Maximum is:"<<fRet<<"\n";
    
    return 0;
}