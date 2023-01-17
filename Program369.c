/*

Accept string from user
and display charcters of string 
on new lineusing Recursive.

Input : Hello
Output :Hello
        ello
        llo
        lo
        o

        o
        lo
        llo
        ello

*/

#include<stdio.h>

void DisplayCharR(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n",str);
        DisplayCharR(++str);
        printf("%s\n",str);
 
    }   
}

int main()
{
    char Arr[20];

    printf("Enter the String:\n");
    scanf("%[^'\n']s",&Arr);

    DisplayCharR(Arr);
    
    return 0;
}