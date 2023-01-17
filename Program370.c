/*

Accept string from user
and display charcters of string 
on new lineusing Recursive.

Input : Hello
Output : H
         e
         l
         l
         o

*/

#include<stdio.h>

void DisplayCharR(char *str)
{
    if(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
        DisplayCharR(str);
        
 
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