/*

Accept string from user
and display charcters of string 
on new lineusing Recursive.

Input : Hello
Output : 
        o
        l
        l
        e

*/

#include<stdio.h>

void DisplayCharR(char *str)
{
    if(*str != '\0')
    {
        
        str++;
        DisplayCharR(str);
        printf("%c\n",*str);
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