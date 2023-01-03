/*
Accept two number from user and perform its addition. 
*/
import java.util.Scanner;

class Arithmatic
{
    public int iValue1;
    public int iValue2;

    public Arithmatic(int i, int j)
    {
        iValue1 = i;
        iValue2 = j;
    }
    public int Addition()
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}

class Program249
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number:");
        int iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo1, iNo2);

        int iAns = aobj.Addition();

        System.out.println("Addition is: "+iAns);
        sobj.close();

    }
}