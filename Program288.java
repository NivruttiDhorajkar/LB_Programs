import java.util.Scanner;

/*

Accept number of column and rows from user and display below pattern.

Input : Row : 4    Col : 4
Output :    
            *  *   *   * 
            *  *   *   *
            *  *   *   *
            *  *   *   *
 */

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println("");
        }
    }
}

class Program288
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern pobj = new Pattern();

        System.out.println("Enter number of rows:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iNo2 = sobj.nextInt();

        pobj.Display(iNo1,iNo2);

        sobj.close();
    }
}