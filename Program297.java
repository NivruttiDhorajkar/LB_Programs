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
       char Arr[] = str.toCharArray();
       int i = 0;
       int j = 0;

       for(i=0; i<Arr.length; i++)
       {
        for(j=0; j<Arr.length; j++)
        {
            System.out.print(Arr[j]+"\t");
        }
        System.out.println();
       }

       
    }
}

class Program297
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