import java.util.Scanner;

/*
************************* Strings in java ***********************

Accept string from user and 
convert it into charcter array.

*/



class Program274
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println("Data is: "+Arr);
        
        sobj.close();
    }
}