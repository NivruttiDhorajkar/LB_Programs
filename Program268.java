import java.util.Scanner;

/*
************************* Strings in java ***********************
Accept string from user and count number of characters in a string.
*/

class Program268
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your full name:");

        String str = sobj.nextLine();

        System.out.println("Number of charcters are: "+str.length());
        sobj.close();
    }
}