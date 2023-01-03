// Problems on N Numbers:
// Problem Statement : Accept N numbers from user and
// perform the addition of that N numbers.

// Input : 5        //10  20  30  40  50  
// Output : 150

// Input : 3        //11  21  20
// Output : 52

// Input : 4        //5   10  3   8
// Output : 26

#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the elements:\n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements from array are:\n");

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);
   
    return 0;
}