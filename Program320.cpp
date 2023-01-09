/*

singly linear linklist in generic programming

*/

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T Data;
    struct node * next;
};

/////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();
        void InsertFirst(T No);
        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyLL <T>:: SinglyLL()
{
    First = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: InsertFirst(T No)
{
    struct node<T> * newn = new struct node<T>;

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

template <class T>
void SinglyLL <T> :: Display()
{
    struct node<T>* temp  = First;

    cout<<"Elements of linked list are:"<<"\n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->Data<<"|->";
        temp =temp->next;
    }
    cout<<"NULL"<<"\n";
}

/////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T>:: Count()
{
    int iCnt = 0;
    struct node<T> * temp  = First;
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
    SinglyLL <int>iobj;
    int iRet = 0;

    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";

    SinglyLL <float>fobj;

    fobj.InsertFirst(10.1f);
    fobj.InsertFirst(51.52f);
    fobj.InsertFirst(21.85f);
    fobj.InsertFirst(11.56f);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";

    SinglyLL <char>cobj;

    cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.InsertFirst('C');
    cobj.InsertFirst('D');
    cobj.Display();
    iRet = cobj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";

    SinglyLL <double>dobj;

    dobj.InsertFirst(45.56);
    dobj.InsertFirst(478.56);
    dobj.InsertFirst(78.25);
    dobj.InsertFirst(69.45);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";
    
    return 0;
}