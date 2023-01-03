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

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    

    return 0;
}