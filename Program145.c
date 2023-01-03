/*
Problem Statement : Accept string from user and accept one character
check wheather charcter is present or not in that string

Input : String:Hello    ch:l
Output : present

Input : String:Marvellous   ch : k
Output : absent

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCh(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0' )
    {
        if(*str == ch)
        {
            bFlag = true;
            break;;
        }
        str++;
    }
   return bFlag;
}

int main()
{
    char Arr[20];
    char cSearch = '\0';
    bool bRet = false;

    printf("Enter your string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character u search :\n");
    scanf(" %c",&cSearch);

    bRet = CheckCh(Arr,cSearch);
    if(bRet == true)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }

    return 0;
}