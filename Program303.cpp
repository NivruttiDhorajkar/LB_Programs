/*

Addition of two  numbers using generic programing

*/

#include<iostream>
using namespace std;

template<class T>

T Addition(T i, T j)
{
    T Ans;
    Ans = i + j;

    return Ans;
}

int main()
{
    double iRet = 0.0;
    double a = 10.1;
    double b = 11.9;

    iRet = Addition(a,b);

    cout<<"Addition is:"<<iRet;
    return 0;
}