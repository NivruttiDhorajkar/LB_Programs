/*
 Accept one number from user and find its factors and 
 return the multiplication of its factors.

 */

 import java.util.*;

class Numbers
{
    public int FactorMultiplication(int iValue1)
    {
        int iCnt = 0;
        int iMult = 0;

        iMult = 1;

        for(iCnt=1; iCnt <= (iValue1/2); iCnt++)
        {
            if((iValue1 % iCnt ) == 0)
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
        
    }
}

class Program255
{
    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1 = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet =  nobj.FactorMultiplication(iNo1);
        System.out.println("Multiplication of factors of "+iNo1 + " is: "+iRet);
        sobj.close();
    
    }
}