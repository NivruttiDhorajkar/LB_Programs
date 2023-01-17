/*
Accept string from user
and calculate length of string using Iterative.

Input : kishor Dhorajkar
Output : 16

*/

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = strlenX(Arr);
    printf("String length is:%d\n",iRet);
    return 0;
}