/*
Accept two number from user and perform its addition. 
*/
import java.util.Scanner;

class Arithmatic
{
    public int Addition(int i, int j)
    {
        int iSum = 0;
        iSum = i + j;
        return iSum;
    }
}

class Program248
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic();

        int iAns = aobj.Addition(iNo1, iNo2);

        System.out.println("Addition is: "+iAns);
        sobj.close();

    }
}