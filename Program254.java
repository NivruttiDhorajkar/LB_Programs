/*
 Accept two number from user and Display the Common 
 factors of that numbers.

 Input : N1:12    N2:16
 Output :   1   2   4

 Input : N1:17    N2:67
 Output :   1   

 */

import java.util.*;

class Numbers
{
    public void DisplayCommonFactors(int iValue1, int iValue2)
    {
        int iCnt = 0;

        System.out.println("Common factors are: ");
        for(iCnt=1; (iCnt <= iValue1/2) && (iCnt <= iValue2/2); iCnt++)
        {
            if((iValue1 % iCnt == 0) && (iValue2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program254
{
    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.DisplayCommonFactors(iNo1,iNo2);
        sobj.close();
    }
}