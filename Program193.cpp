/* 
Template
Accet N Numbers from user..
*/

#include<iostream>
using namespace std;

// Problems on N numbers
class ArrayX
{
   public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];       // Memory allocation
        }

        void Accept()
        {
            cout<<"Please enter the numbers:\n";

            for(int iCnt=0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are:\n";
            for(int iCnt=0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        void Function()     // Function which contains businees logic 
        {
            // Logic
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements:\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    return 0;
}