/*
Problem Statement : Accept string from user and 
count the number of whitesoaces on it

Input : kishor Dhorajkar 
Output : 1

Input : India is my country.
Output : 3

*/

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
    int iCnt = 0;
    while((*str) != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{   
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);

    printf("Number of whitespaces is:%d\n",iRet);

    return 0;
}