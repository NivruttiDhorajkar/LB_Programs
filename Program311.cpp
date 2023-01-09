/*

Accept n numbers from user and display it 
using generic programming

*/

#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Data[] = {10,20,30,40};
    Display(Data,4);

    float Data1[] = {10.1f,20.5f,30.3f,40.5f};
    Display(Data1,4);

    char Data2[] = {'a','b','c','d'};
    Display(Data2,4);

    return 0;
}