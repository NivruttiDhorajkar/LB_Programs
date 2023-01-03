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
///////////////////////////////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;
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
        free(temp);
        (*Last)->next = *First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp =*First;
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
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        free(*Last);    //free(temp->next);
        *Last = temp;
        (*Last)->next = *First;
    } 
}

///////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPosition(PPNODE First, PPNODE Last, int No, int iPos)
{
    PNODE newn = (PNODE) malloc (sizeof(NODE));
    PNODE temp = NULL;
    newn->Data = No;
    newn->next = NULL;

    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count(*First,*Last);

    if((iPos < 1 ) || (iPos > NodeCnt + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, Last,No);
    }
    else if(iPos == NodeCnt +1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        temp = *First;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;  
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPosition(PPNODE First, PPNODE Last, int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count(*First,*Last);

    if((iPos < 1 ) || (iPos > NodeCnt))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp1 = *First;

        for(iCnt=1; iCnt<iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        //temp1->next = temp2->next;
        temp1->next = temp1->next->next;
        free(temp2);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertFirst(&Head,&Tail,51);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertFirst(&Head,&Tail,21);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertLast(&Head,&Tail,101);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertLast(&Head,&Tail,111);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertLast(&Head,&Tail,121);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    InsertAtPosition(&Head,&Tail,105,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    DeleteAtPosition(&Head,&Tail,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);
///////////////////////////////////////////////////////////////////////////////////////////////////
    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of Nodes are :%d\n ",iRet);

    return 0;
}