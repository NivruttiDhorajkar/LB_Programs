/*
******************************* Singly Circular LinkList *********************************

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

///////////////////////////////////////////////////////////////////////////////////////////////////

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////////////////

SinglyCL :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;

    if((First == NULL ) && (Last == NULL ))    // Empty linklist
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // Linked list contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: InsertLast(int No)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;

    if((First == NULL ) && (Last == NULL ))    // Empty linklist
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // Linked list contains atleast one node
    {
        (Last)->next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteFirst()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL)) // If linked list is empty
    {
        return;
    }
    else if(First == Last)   // If linked list contains at lest one node
    {
        //free(*First);
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        First = (First)->next;
       // free(temp);
        delete temp;
        (Last)->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteLast()
{
    PNODE temp =First;
   if((First == NULL) && (Last == NULL)) // If linked list is empty
    {
        return;
    }
    else if(First == Last)   // If linked list contains at lest one node
    {
        //free(*First);
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        //free(*Last);    //free(temp->next);
        delete (Last);

        Last = temp;
        (Last)->next = First;
    } 
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: Display()
{
    PNODE temp = First;
    cout<<"Elements of Linked list are:\n";

   do
   {
        cout<<"| "<<temp->Data<<" |->";
        temp = temp ->next;
   } while (temp!= Last->next);
   cout<<"\n";
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int SinglyCL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp->next;
    } while (temp != Last->next);
    return iCnt;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: InsertAtPosition(int No, int iPos)
{
    //PNODE newn = (PNODE) malloc (sizeof(NODE));
    PNODE newn = new NODE;
    PNODE temp = NULL;
    newn->Data = No;
    newn->next = NULL;

    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count();

    if((iPos < 1 ) || (iPos > NodeCnt + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt +1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;  
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void SinglyCL :: DeleteAtPosition(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count();

    if((iPos < 1 ) || (iPos > NodeCnt))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        //temp1->next = temp2->next;
        temp1->next = temp1->next->next;
        //free(temp2);
        delete temp2;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyCL obj;

    int iRet = 0;
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertFirst(51);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertFirst(21);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertLast(101);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertLast(111);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertLast(121);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.InsertAtPosition(105,5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.DeleteAtPosition(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////////
    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Nodes are: "<<iRet<<"\n";

    return 0;
}