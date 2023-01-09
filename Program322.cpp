/*
Stack datastructure in specific way
*/

#include<iostream>
using namespace std;

struct node
{
    int Data;
    struct node * next;
};

class Stack
{
    public:
        struct node * First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);      // Insert
        int Pop();              // Delete
        void Display();
};

////////////////////////////////////////////////////////////////////

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////////////

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int no)  //  Insert First
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
        newn->next = First;
        First = newn;
    }
    iCount++;
    cout<<no<<" gets pushed in the stack gets successfully\n";
}

////////////////////////////////////////////////////////////////////

int Stack :: Pop()  //  Delete First
{
    if(First == NULL)   //Stack is empty
    {
        cout<<"Unable to pop the element as stack is empty\n";
        return-1;
    }
    else    // at least stack conatins one elelment
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

void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"stack is empty\n";
    }
    else
    {
        cout<<"Elements of stack are: "<<"\n";

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
    Stack obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Display();
    int iRet = obj.Pop();
    cout<<"Poped elementt is:"<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"Poped elementt is:"<<iRet<<"\n";

    obj.Display();
    return 0;
}