/*
 
 Accept one number from user and display its even factors.

 Input : 250
 Output : 2 10  50

*/

import java.util.*;

class Numbers
{
    public void DisplayEvenFactors(int iValue)
    {
        int iCnt = 0;

        for(iCnt=2; iCnt<=(iValue/2); iCnt+=2)  // iCnt = iCnt + 2
        {
            if((iValue % iCnt) == 0) 
            {
                System.out.println("Even Factor is :"+iCnt);
            }
        }
    }
}

class Program253
{
    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.DisplayEvenFactors(iNo);
        sobj.close();
    }
}