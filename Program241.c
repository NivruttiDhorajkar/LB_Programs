/*
************************************ Doubly Circular Linklist *************************************
*/

#include<stdio.h>
#include<stdlib.h>

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

/////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE First, PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // If linked list is empty
    {
        *First = newn;
        *Last = newn;
    }
    else    // If linked list contains at least one node
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

/////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // If linked list is empty
    {
        *First = newn;
        *Last = newn;
    }
    else    // If linked list contains at least one node
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

////////////////////////////////////////////////////////////////////////////////

void Display(PNODE First,PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Elements of linked list are:\n");

    do 
    {
        printf("|%d|<=>",First->Data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    do 
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if(*First == NULL && *Last == NULL)     // If linked list is empty
    {
        return;
    }
    else if(*First == *Last)    // If linked list contains at least one node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        *First = (*First)->next;
        free((*Last)->next);    // free((*First)->prev);
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}


/////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE First, PPNODE Last)
{
    
    if(*First == NULL && *Last == NULL)     // If linked list is empty
    {
        return;
    }
    else if(*First == *Last)    // If linked list contains at least one node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    // If linked list contains more than one node
    {
        *Last = (*Last)->prev;
        free((*First)->prev);   // free((*Last)->next);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

/////////////////////////////////////////////////////////////////////////////////////
 
    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are:%d\n",iRet);

/////////////////////////////////////////////////////////////////////////////////////
 
    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are:%d\n",iRet);

/////////////////////////////////////////////////////////////////////////////////////

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are:%d\n",iRet);

/////////////////////////////////////////////////////////////////////////////////////

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are:%d\n",iRet);

/////////////////////////////////////////////////////////////////////////////////////
    return 0;
}