/*
Problem Statement : Accept string from user and convert lower
letters of string into upper case.

Input : KIshOR 
Output : KISHOR

Input : MaRVeLLUS
Output : MARVELLOUS

*/

#include<stdio.h>

void strUprX(char *str)
{
    while((*str) != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{   
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    strUprX(Arr);

    printf("String after conversion is:%s\n",Arr);

    return 0;
}