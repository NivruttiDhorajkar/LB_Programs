import java.util.Scanner;

/*

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
       int i = 0;
       int j = 0;

       for(i=0; i<str.length(); i++)
       {
        for(j=0; j<str.length(); j++)
        {
            System.out.print(str.charAt(j)+"\t");
        }
        System.out.println();
       }

       
    }
}

class Program298
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