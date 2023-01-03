/*
************************** Class Design *************************
Problem Statement : Accept N number from user and

Input : 
Output : 

*/

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

    ArrayX(int i)
    {
        iSize = i;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter the elements of Array:\n";
        int iCnt = 0;

        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"Your enterd element is:\n";
        int iCnt = 0;
        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }
};

int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    return 0;
}