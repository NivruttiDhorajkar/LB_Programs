/*

Accept number from user and toggle the alternate nibble.

Input : No:
Output : 

Input : No:
Output : 

*/

#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
/*

0000    1111    0000    1111    0000    1111    0000    1111
0       f       0       f       0       f       0       f           

0X0f0f0f0f
*/

UINT ToggleBit(UINT No)
{
    UINT iMAsk = 0X0f0f0f0f;
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
