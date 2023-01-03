/*
Problem Statement : Accept full name from user and display its length.

Input : Hello
Output : 5

Input : kishor dhorajkar
Output : 16

*/

// [^'\n']   - Regular Expression/Rejex.

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    int i = 0; 

    for(i=0; str[i]!='\0'; i++)
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{  
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);        //strlenX(100);

    printf("Number of charcters are:%d\n",iRet);

    return 0;
}