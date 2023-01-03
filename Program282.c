/*
Problem Statement : Find minimum element in singly linear linklist
and return it.

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
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Minimum(PNODE First)
{
    int iMin = 0;

    if(First == NULL)   // If linked list is empty
    {
        printf("Linkelist is empty!\n");
        return 0;
    }

    iMin = First->data;

    while(First != NULL)
    {
        if(First->data < iMin)
        {
            iMin = First->data;
        }
        First = First->next;
    }
    return iMin;
} 

int main()
{
    //struct node * Head = NULL;
    PNODE Head = NULL;
    int iRet = 0;

    iRet = Minimum(Head);       // Abnormally band / segmentation fault
    printf("Minimum is : %d\n",iRet);

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    iRet = Minimum(Head);
    printf("Minimum is : %d\n",iRet);
    
    return 0;
}