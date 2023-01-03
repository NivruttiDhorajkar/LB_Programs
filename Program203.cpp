/*
Problem Statement : Accept N number from user and 
return Minimum element of that array.

Input : N : 5  Element : 10    20  30  40  50
Output : 10

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

class MarvellousLB : public ArrayX
{
    public:
        MarvellousLB(int i ): ArrayX(i)
        {

        }
        int Minimum()
        {
            int iMin = 0;
            int iCnt = 0;
            iMin = Arr[0];

            for(iCnt=0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
    }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of Array:\n";
    cin>>iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Minimum();

    cout<<"Minimum number is: "<<iRet<<"\n";
    
    delete obj;

    return 0;
}