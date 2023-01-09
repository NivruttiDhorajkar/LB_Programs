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

}

////////////////////////////////////////////////////////////////////

bool Stack :: IsStackEmpty()
{

}

////////////////////////////////////////////////////////////////////

void Stack :: Push(int no)
{

}

////////////////////////////////////////////////////////////////////

int Stack :: Pop()
{

}

////////////////////////////////////////////////////////////////////

void Stack :: Display()
{

}

////////////////////////////////////////////////////////////////////

int main()
{
    return 0;
}