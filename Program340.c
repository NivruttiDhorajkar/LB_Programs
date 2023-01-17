/*

Accept decimal number from user and 
toggle form 5th, 6th, 7th bit of number 

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000     0000    0000    0000    0000    0000    0000    0000 

0000     0000    0000    0000    0000    0000    0111    0000 

  0        0       0       0       0       0       7       0

  00000070

  0X00000070
*/

UINT ToggleBit(UINT No)
{
    UINT iMAsk = 0X00000070;
    int iAns = 0;

    iAns = No ^ iMAsk;

    return iAns;
}

int main()
{
    UINT value = 0;
    UINT bRet = 0;

    printf("Enter number:\n");
    scanf("%d",&value);

    bRet = ToggleBit(value);
    printf("Updated number is:%d\n",bRet);
    return 0;
}
