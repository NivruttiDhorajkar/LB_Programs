/* 
Accept N numbers from user and display the addition of 
its even and odd elements

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

        int AdditionOfEven()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt=0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }

        int AdditionOfOdd()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt=0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements:\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    iRet = obj.AdditionOfEven();
    cout<<"Addition of even elements is : "<<iRet<<"\n";

    iRet = obj.AdditionOfOdd();
    cout<<"Addition of odd elements is:"<<iRet<<"\n";

    return 0;
}