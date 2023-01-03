/*
Problem Statement : Accept string from user and convert capital
letters of string into lower case.

Input : KIshOR 
Output : kishor

Input : MaRVeLLUS
Output : marvellous

*/

#include<stdio.h>

void strlwrX(char *str)
{
    while((*str) != '\0')
    {
        if((*str >='A') && (*str <= 'Z'))
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

    strlwrX(Arr);

    printf("String after conversion is:%s\n",Arr);

    return 0;
}