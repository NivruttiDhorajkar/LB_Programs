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
    SinglyLL <int>obj;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    int iRet = obj.Count();
    cout<<"Number of node are: "<<iRet<<"\n";
    
    return 0;
}