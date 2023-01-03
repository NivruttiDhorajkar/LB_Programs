import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and 
count number of characters in a string.
*/

class Program269
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered string:");

        String str = sobj.nextLine();

        for (int iCnt=0; iCnt<str.length(); iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
        sobj.close();
    }
}