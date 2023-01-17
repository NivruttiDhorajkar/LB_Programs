/*

Accept decimal number from user and 
if 4th bit is ON then change it. 

*/

#include<stdio.h>
#include<stdbool.h>

// 4th bit

typedef unsigned int UINT;
/*
0000 0000 0000 0000 0000 0000 0000 0000 

1111 1111 1111 1111 1111 1111 1111 0111

 f     f    f    f   f    f     f    7

0Xfffffff7
*/

UINT OFFBit(UINT No)
{
    UINT iMAsk = 0Xfffffff7;

    return(No & iMAsk);
}

int main()
{
    UINT value = 0;
    UINT bRet = 0;

    printf("Enter number:\n");
    scanf("%d",&value);

    bRet = OFFBit(value);
    printf("Updated number is:%d\n",bRet);
    return 0;
}
