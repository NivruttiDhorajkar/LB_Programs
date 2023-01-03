/*
*************************** Data Structure **************************

Problem Statement : 

Input : 
Output : 

Input : 
Output : 

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
typedef struct  node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    //step1 : Allocte the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(PNODE));

    // step2 : Initialise the node
    newn->Data = No;
    newn->next = NULL;

    // step3 : Check linked list empty or not 
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If  linked contains at least one node 
    {
        newn->next = *First;
        *First = newn;
    }   
}

void Display(PNODE First)
{
    printf("Elements of link list are:\n");
    while(First != NULL)
    {
        printf("%d\t",First->Data);
        First = First->next;
    }
    printf("\n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    return 0;
}

