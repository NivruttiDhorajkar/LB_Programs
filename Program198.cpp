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
        cout<<"Allocating the memory for resources...\n";
        iSize = i;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout<<"Deallocating the memory of resourrces..\n";
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
    int iLength = 0;

    cout<<"Enter the size of Array:\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    return 0;
}