import java.util.Scanner;

/*

Accept number  from user and display below pattern.

Input : 4529
Output :  
            9   2   5   4
            9   2   5   4
            9   2   5   4
            9   2   5   4
           
*/

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;
        int itemp = iNo;
        int itemp2 = iNo;

        while(itemp != 0)
        {

            while(itemp2 != 0)
            {
                iDigit = itemp2 % 10;
                System.out.print(iDigit+"\t");
                itemp2 = itemp2 / 10;
            }
            itemp2 = iNo;
            System.out.println();
            itemp = itemp / 10;
        }
        System.out.println();
    }
}

class Program300
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter the number:");
        int iNo1 = sobj.nextInt();
        pobj.Display(iNo1);

        sobj.close();
    }
}