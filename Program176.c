/*
Problem Statement : 

Input : 
Output :

*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    //struct node * newn = (struct node*)malloc(sizeof(struct node));
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //1 Allocate Memory
    
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)  // IF linked list is empty
    {
        *First = newn;
    }
    else    // If linked list contains at least one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    //struct node * newn = (struct node*)malloc(sizeof(struct node));
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //1 Allocate Memory
    PNODE temp = *First;

    newn->data = No;
    newn->next = NULL; 

    if(*First == NULL)  // IF linked list is empty
    {
        *First = newn;
    }
    else    // If linked list contains at least one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the linked list are:\n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
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
    PNODE temp = *First;
    if(*First == NULL)  //Empty linklist
    {
        return;
    }
    else if((*First)->next == NULL) // 1 node in linklist
    {
        free(*First);
        *First = NULL;
    }
    else    // more than 1 node in link list
    {
        (*First) = (*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)  //Empty linklist
    {
        return;
    }
    else if((*First)->next == NULL) // 1 node in linklist
    {
        free(*First);
        *First = NULL;
    }
    else    // more than 1 node in link list
    {
       while(temp->next->next != NULL)
       {
            temp = temp->next;
       }
       free(temp->next);
       temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First,int No, int ipos)
{
    int NodeCnt = 0;
    int iCnt = 0;
    PNODE newn =NULL;
    PNODE temp =NULL;

    NodeCnt = Count(*First);

    if((ipos < 1) || ((ipos > (NodeCnt + 1))))
    {
        printf("Invalid Position....!\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,No);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->data = No;
        newn->next = NULL;

        temp = *First;

        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteAtPos(PPNODE First, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid Position....!\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if( ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;  //temp1->next = temp1->next->next;
        free(temp2);
    }

}

int main()
{
    //struct node * Head = NULL;
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Count(Head);
    printf("Number of original nodes are:%d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
    printf("Number of original and inserted last nodes are:%d\n",iRet);

    InsertAtPos(&Head,105,5);
    Display(Head);
    iRet = Count(Head);
    printf("Number of original and Insert at position nodes are:%d\n",iRet);

    DeleteAtPos(&Head,5);
    Display(Head);
    iRet = Count(Head);
    printf("Number of original and Delete at position nodes are:%d\n",iRet);


    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of original and Delete first nodes are:%d\n",iRet);

    DeleteLast(&Head);
    Display(Head); 
    iRet = Count(Head);
    printf("Number of original and delete last nodes are:%d\n",iRet);

    return 0;
}