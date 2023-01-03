/*
Problem Statement : Accept string from user and 
reverse it again.

Input : kishor dhorajkar
Output : rakjarohd rohsik

Input : India
Output : aidnI

*/

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{   
    char Arr[20];
    
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("String in reverse order is:%s\n",Arr);

    return 0;
}