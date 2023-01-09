/*
Queue datastructure in generic way
*/

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T Data;
    struct node * next;
};

template <class T>
class Queue
{
    public:
        struct node<T> * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(T no);      // InsertLast
        T DeQueue();              // DeleteFirst
        void Display();
};

////////////////////////////////////////////////////////////////////

template <class T>
Queue <T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////////////

template <class T>
bool Queue<T> :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////

template <class T>
void Queue <T>:: EnQueue(T no)  //  Insert Last
{
    struct node<T> * newn = new node<T>;

    newn->Data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
    iCount++;
    cout<<no<<" gets pushed in the Queue gets successfully\n";
}

////////////////////////////////////////////////////////////////////

template <class T>
T Queue <T>:: DeQueue()  //  Delete First
{
    if(First == NULL)   //Queue is empty
    {
        cout<<"Unable to pop the element as Queue is empty\n";
        return-1;
    }
    else    // at least Queue conatins one elelment
    {
        T value = First->Data;
        struct node <T>* temp = First;

        First = First->next;
        delete temp;

        iCount--;
        return value;
    }
}

////////////////////////////////////////////////////////////////////

template <class T>
void Queue<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Elements of Queue are: "<<"\n";

        struct node<T>* temp = First;
        while(temp != NULL)
        {
            cout<<"|"<<temp->Data<<"|->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }   
}

////////////////////////////////////////////////////////////////////

int main()
{
    Queue<int> obj;

    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();
    int iRet = obj.DeQueue();
    cout<<"Poped elementt is:"<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"Poped elementt is:"<<iRet<<"\n";

    obj.Display();

    Queue<float> fobj;

    fobj.EnQueue(11.23f);
    fobj.EnQueue(21.56f);
    fobj.EnQueue(51.56f);
    fobj.EnQueue(101.89f);

    fobj.Display();
    float fRet = fobj.DeQueue();
    cout<<"Poped elementt is:"<<fRet<<"\n";

    fRet = fobj.DeQueue();
    cout<<"Poped elementt is:"<<fRet<<"\n";

    fobj.Display();
    return 0;
}