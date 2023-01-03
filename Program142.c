/*
Problem Statement : Accept string from user and accept one character
and count frequency of that charcter.

Input : String:Hello  ch :l
Output : 2


*/

#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0 ;

    while(*str != '\0' )
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter your string:\n");
    scanf("%[^'\n']s",Arr);


    iRet = CountFrequency(Arr,'a');
    printf("Frequency of letter is :%d\n",iRet);

    return 0;
}