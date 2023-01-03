/*
Problem Statement : Addition of digit of element in singly linear linklist
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

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplayDigitsSum(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = SumDigits(First->data);
        printf("Addition of digits of the number %d is %d\n",First->data, iRet);
        First = First->next; 
    }
}

int main()
{
    //struct node * Head = NULL;
    PNODE Head = NULL;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    DisplayDigitsSum(Head);

    return 0;
}