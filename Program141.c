/*
Problem statement : Accept string from user and
 find frequency of Capital letter  in that string.

 Input : He is a RAM
 Output : 3

 Input : Aakash is A Boy
 Output : 3

*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0 ;

    while(*str != '\0' )
    {
        if((*str >='A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);
    printf("Frequency of Capital letters is :%d\n",iRet);

    return 0;
}