import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and 
count small charcters  in a string.

*/

class MarvellousX
{
    public int SmallCOunt(String s)
    {
        int iCnt = 0;

        for(int iCnt1 =0; iCnt1<s.length();iCnt1++)
        {
            if((s.charAt(iCnt1)>= 'a') && (s.charAt(iCnt1) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    
}

class Program271
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCOunt(str);
        System.out.println("Number of small case letters are : "+iRet);
        
        sobj.close();
    }
}