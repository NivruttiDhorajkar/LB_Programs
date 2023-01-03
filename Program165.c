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
    
}

void Display(PNODE First)
{

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

