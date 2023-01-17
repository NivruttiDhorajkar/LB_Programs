/*

Accept decimal number from user and 
toggle 4th bit of number 

*/

#include<stdio.h>
#include<stdbool.h>

// 4th bit

typedef unsigned int UINT;
/*
0000     0000    0000    0000    0000    0000    0000    0000 

0000     0000    0000    0000    0000    0000    0000    1000 

  0        0       0       0       0       0       0       8

  00000008
  0X00000008
*/

UINT ToggleBit(UINT No)
{
    UINT iMAsk = 0X00000008;
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
