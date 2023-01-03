/*
***************************** Singly Linear Linklist ***************************
Problem Statement:

*/

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        SinglyLL();
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
       
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{}

void SinglyLL :: InsertLast(int No)
{}

void SinglyLL :: InsertAtPosition(int No, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPosition(int iPos)
{}

void SinglyLL :: Display()
{}


int main()
{
    SinglyLL obj1;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}