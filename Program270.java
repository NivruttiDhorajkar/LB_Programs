import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and 
count number of characters in a string.

*/

class MarvellousX
{
    public void Display(String s)
    {
        for (int iCnt=0; iCnt<s.length(); iCnt++)
        {
            System.out.println(s.charAt(iCnt));
        }
    }
}

class Program270
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.Display(str);
        
        sobj.close();
    }
}