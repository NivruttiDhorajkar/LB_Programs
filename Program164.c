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
int main()
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = 11;
    newn->next = NULL;

    printf("%d\n",newn->Data);
    printf("Size of structure is:%d\n",sizeof(NODE));

    return 0;
}

