/*

Accept string from user
and count small charcters of string using Recursive.

Input : KiSHor
Output : 3

*/

#include<stdio.h>

int CountSmallR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = CountSmallR(Arr);
    printf("Small charcters in string is:%d\n",iRet);
    return 0;
}