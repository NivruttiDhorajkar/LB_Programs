/*

Addition of two numbers for integer datatatype

*/

#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int iAns = 0;
    iAns = i + j;

    return iAns;
}

int main()
{
    int iRet = 0;
    int a = 10;
    int b = 11;

    iRet = Addition(a,b);

    cout<<"Addition is:"<<iRet;
    return 0;
}