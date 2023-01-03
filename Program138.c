/*
Problem statement : Accept string from user and
 find frequency of letter a in that string.

 Input : he is ram
 Output : 1

 Input : aakash is a boy
 Output : 4

*/

#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0 ;

    while(*str != '\0' )
    {
        if((*str) =='a') 
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

    iRet = CountCh(Arr);
    printf("Frequency of a is :%d\n",iRet);

    return 0;
}