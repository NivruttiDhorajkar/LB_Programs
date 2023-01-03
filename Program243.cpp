/*
************************************ Doubly Circular Linklist *************************************
*/

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

////////////////////////////////////////////////////////////////////////////////////////

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count(); 
};

///////////////////////////////////////////////////////////////////////////////////////

DoublyCL :: DoublyCL()  // Default Constructoer
{
    First = NULL;
    Last = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: InsertFirst(int No)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL)) // If linked list is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If linked list contains at least one node
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }

    First->prev = Last;
    Last->next = First;
}

/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: InsertLast(int No)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL)) // If linked list is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If linked list contains at least one node
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: Display()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked list is empty\n";
        return;
    }

    cout<<"Elements of linked list are:\n";

    do 
    {
        cout<<"|"<<temp->Data<<"|<=>";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}

/////////////////////////////////////////////////////////////////////////////////////

int DoublyCL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;
    do 
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteFirst()
{
    if(First == NULL && Last == NULL)     // If linked list is empty
    {
        return;
    }
    else if(First == Last)    // If linked list contains at least one node
    {
        //free(First);
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        First = (First)->next;
        //free((Last)->next);    // free((First)->prev);
        delete (Last)->next;
        (First)->prev = Last;
        (Last)->next = First;
    }
}


/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteLast()
{
    
    if(First == NULL && Last == NULL)     // If linked list is empty
    {
        return;
    }
    else if(First == Last)    // If linked list contains at least one node
    {
        //free(*First);
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        Last = (Last)->prev;
        //free((*First)->prev);   // free((*Last)->next);
        delete (First)->prev;

        (First)->prev = Last;
        (Last)->next = First;
    }
}

/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: InsertAtPos(int No, int iPos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    NodeCnt = Count();

    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == NodeCnt +1 )
    {
        InsertLast(No);
    }
    else
    {
        //newn = (PNODE) malloc(sizeof(NODE));
        PNODE newn = new NODE;

        newn->Data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(iCnt=1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        } 
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

/////////////////////////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteAtPos(int iPos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    NodeCnt = Count();

    PNODE temp = NULL;

    if((iPos < 1) || (iPos > NodeCnt ))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt )
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(iCnt=1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        } 
        temp->next = temp->next->next;
        //free(temp->next->prev);
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    DoublyCL obj;

/////////////////////////////////////////////////////////////////////////////////////
 
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////
 
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////
 
    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////
 
    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

/////////////////////////////////////////////////////////////////////////////////////
    return 0;
}