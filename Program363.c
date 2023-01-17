/*

Accept string from user
and calculate length of string using Recursive.

Input : kishor Dhorajkar
Output : 16

*/

#include<stdio.h>

int strlenXR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenXR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = strlenXR(Arr);
    printf("String length is:%d\n",iRet);
    return 0;
}