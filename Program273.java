import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and 
count number of digits in a string.

*/

class MarvellousX
{
    public int DigitCOunt(String s)
    {
        int iCnt = 0;

        for(int iCnt1 =0; iCnt1<s.length();iCnt1++)
        {
            if((s.charAt(iCnt1)>= '0') && (s.charAt(iCnt1) <= '9'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    
}

class Program273
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.DigitCOunt(str);
        System.out.println("Number of Digits are : "+iRet);
        
        sobj.close();
    }
}