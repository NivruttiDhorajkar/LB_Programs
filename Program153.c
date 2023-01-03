/*
Problem Statement : Accept string from user and convert lower
letters of string into upper case and upper letters into lower case.

Input : KIshOR 
Output : kiSHor

Input : MaRVeLLUS
Output : mArvEllus

*/

#include<stdio.h>

void strToggleX(char *str)
{
    while((*str) != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >='A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{   
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);

    printf("String after conversion is:%s\n",Arr);

    return 0;
}