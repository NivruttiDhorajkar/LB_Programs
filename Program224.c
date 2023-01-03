/*
******************************* Singly Circular LinkList *********************************

*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if((*First == NULL ) && (*Last == NULL ))    // Empty linklist
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // Linked list contains atleast one node
    {

    }
}

void Display(PNODE First, PNODE Last)
{

}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    Display(Head,Tail);


    return 0;
}