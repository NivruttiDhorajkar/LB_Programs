import java.util.Scanner;

/*
************** String template ******************
Accept string from user and display below pattern.

Input : Hello
Output :    
            H   e   l   l   o 
            H   e   l   l   o
            H   e   l   l   o
            H   e   l   l   o
            H   e   l   l   o
 */

class Pattern
{
    public void Display(String str)
    {
       
    }
}

class Program296
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter string:");
        String s = sobj.nextLine();
        pobj.Display(s);

        sobj.close();
    }
}