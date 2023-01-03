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
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
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
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL)) // If linked list is empty
    {
        return;
    }
    else if(*First == *Last)   // If linked list contains at lest one node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
   if((*First == NULL) && (*Last == NULL)) // If linked list is empty
    {
        return;
    }
    else if(*First == *Last)   // If linked list contains at lest one node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If linked list contains more than one node
    {

    } 
}

void Display(PNODE First, PNODE Last)
{
   printf("Elements of Linked list are:\n");

   do
   {
        printf("| %d | -> ",First->Data);
        First = First ->next;
   } while (First != Last->next);
   printf("\n");
    
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    return iCnt;
    
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);

    return 0;
}