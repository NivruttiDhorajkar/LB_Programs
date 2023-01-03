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

/////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertFirst(int No)
{
    // Step 1 : Allocate the memory for node
    PNODE newn = new NODE;

    // Step 2 : Inialiaze node
    newn->Data = No;
    newn->next = NULL;

    // Step 3 : Check if LL is empty or not
    if(First == NULL)   // If (iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains at least one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertLast(int No)
{
    // Step 1 : Allocate the memory for node
    PNODE newn = new NODE;

    // Step 2 : Inialiaze node
    newn->Data = No;
    newn->next = NULL;

    // Step 3 : Check if LL is empty or not
    if(First == NULL)   // If (iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains at least one node
    {

    }
}

void SinglyLL :: InsertAtPosition(int No, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPosition(int iPos)
{}

void SinglyLL :: Display()
{
    cout<<"Elements of Linked List are: "<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" | "<<temp->Data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL \n";
}


int main()
{
    SinglyLL obj1;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    // obj1.InsertLast(101);
    // obj1.InsertLast(111);
    // obj1.InsertLast(121);

    // obj1.Display();

    // cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}