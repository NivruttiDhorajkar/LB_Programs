import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and 
count capital charcters  in a string.

*/

class MarvellousX
{
    public int CapitalCOunt(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int iCnt1 =0; iCnt1<Arr.length;iCnt1++)
        {
            if((Arr[iCnt1]>= 'A') && (Arr[iCnt1] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    
}

class Program276
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.CapitalCOunt(str);
        System.out.println("Number of capital case letters are : "+iRet);
        
        sobj.close();
    }
}