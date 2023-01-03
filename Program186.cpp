#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    cout<<"Enter first number:\n";  //printf("Enter first number:\n");
    cin>>iNo1;                      //scanf("%d",&iNo1);

    cout<<"Enter second numbver:\n";
    cin>>iNo2;

    iAns = iNo1 + iNo2;

    cout<<"Addition is:"<<iAns<<"\n";

    return 0;
}