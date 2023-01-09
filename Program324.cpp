/*
queue datastructure in specific way
*/

#include<iostream>
using namespace std;

struct node
{
    int Data;
    struct node * next;
};

class Queue
{
    public:
        struct node * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int no);      // InsertLast
        int DeQueue();              // DeleteFirst
        void Display();
};

////////////////////////////////////////////////////////////////////

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////////////

bool Queue :: IsQueueEmpty()
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

void Queue :: EnQueue(int no)  //  Insert Last
{
    struct node * newn = new node;

    newn->Data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node * temp = First;

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

int Queue :: DeQueue()  //  Delete First
{
    if(First == NULL)   //Queue is empty
    {
        cout<<"Unable to pop the element as Queue is empty\n";
        return-1;
    }
    else    // at least Queue conatins one elelment
    {
        int value = First->Data;
        struct node * temp = First;

        First = First->next;
        delete temp;

        iCount--;
        return value;
    }
}

////////////////////////////////////////////////////////////////////

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Elements of Queue are: "<<"\n";

        struct node* temp = First;
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
    Queue obj;

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
    return 0;
}