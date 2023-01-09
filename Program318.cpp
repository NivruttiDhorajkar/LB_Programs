/*

singly linear linklist in generic programming

*/

#include<iostream>
using namespace std;


struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

/////////////////////////////////////////////////////////////////////////////////////

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();
        void InsertFirst(int No);
        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////////////////////////////

SinglyLL :: SinglyLL()
{
    First = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;

    if(First == NULL)   // If linked list is empty
    {
        First = newn;
    }
    else    // If linked list contains at least one node
    {
        newn->next = First;
        First = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{
    PNODE temp  = First;

    cout<<"Elements of linked list are:"<<"\n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|->";
        temp =temp->next;
    }
    cout<<"NULL"<<"\n";
}

/////////////////////////////////////////////////////////////////////////////////////

int SinglyLL :: Count()
{
    int iCnt = 0;
    PNODE temp  = First;
    while(temp != NULL)
    {
        iCnt++;
        temp =temp->next;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL obj;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    int iRet = obj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";
    
    return 0;
}