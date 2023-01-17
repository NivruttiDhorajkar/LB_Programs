/*
Display number in decimal,octal,hexadecimal format
*/

#include<stdio.h>


int main()
{
    unsigned int value = 11;

    printf("Value in decimal format : %d\n",value);
    printf("Value in octal format : %o\n",value);
    printf("Value in hexadecimal format : %x\n",value);

    return 0;
}