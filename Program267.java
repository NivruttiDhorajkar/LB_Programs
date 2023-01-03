import java.util.Scanner;

/*
************************* Strings in java ***********************

*/

class Program267
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your full name:");

        String str = sobj.nextLine();

        System.out.println("Welcome "+str);
        sobj.close();
    }
}