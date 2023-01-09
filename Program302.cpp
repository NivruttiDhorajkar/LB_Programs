/*

Addition of two numbers for double datatype

*/

#include<iostream>
using namespace std;

double Addition(double i, double j)
{
    double iAns = 0.0;
    iAns = i + j;

    return iAns;
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