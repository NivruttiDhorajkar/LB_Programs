import java.util.Scanner;

/*

Accept number  from user and display below pattern.

Input : 4529
Output :  
            9   2   5   4
           
 */

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit+"\t");
            iNo = iNo / 10;
        }
    }
}

class Program299
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