/*

Accept n numbers from user and perform adition of that numbers
using generic programming

*/

#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum ;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data,4);
    cout<<"Addition is:"<<iRet<<"\n";

    float Data1[] = {10.1f,20.5f,30.3f,40.5f};
    float fRet = Addition(Data1,4);
    cout<<"Addition is:"<<fRet<<"\n";
    
    return 0;
}