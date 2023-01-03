// X : new line in doubly linear linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
    struct node * prev;     // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;      // X
        *First = newn;
    }
}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      // X
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");

    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)  // Linked list is empty
    {
        return;
    }
    else if((*First)->next == NULL) // Linked list conatins one node
    {
        free(*First);
        *First = NULL;
    }
    else    // linked list contains more than one node
    {
        *First  = (*First)->next;
        free((*First)->prev);   // X 
        (*First)->prev = NULL;  // X
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)  // Linked list is empty
    {
        return;
    }
    else if((*First)->next == NULL) // Linked list conatins one node
    {
        free(*First);
        *First =  NULL;
    }
    else    // linked list contains more than one node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    Display(Head);

    InsertFirst(&Head,51);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    InsertFirst(&Head,21);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    InsertFirst(&Head,11);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    InsertLast(&Head,101);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    InsertLast(&Head,111);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    InsertLast(&Head,121);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    return 0;
}