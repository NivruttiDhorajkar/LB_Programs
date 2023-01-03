/*
Problem Statement :

Input : 
Output :

*/

#include<stdio.h>

int main()
{
    printf("______________________________________\n");
    printf("ASCII Table\n");
    printf("________________________________________\n");

    printf("Character\tDecimal\tHex\toctal");
    for(int i=0; i<=127; i++)
    {
        printf(" %c \t\t  %d \t  %x \t  %o \n",i,i,i,i);
    }

    printf("_________________________________________\n");

    return 0;
}