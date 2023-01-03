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

int main()
{
    struct node *newn = (struct node*)malloc(sizeof(struct node));
    newn->Data = 11;
    newn->next = NULL;

    printf("%d\n",newn->Data);
    printf("Size of structure is:%d\n",sizeof(struct node));

    return 0;
}

