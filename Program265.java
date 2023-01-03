/*
Accept N number from user and store it into the array
and display in reverse order using swapping.


Input : 5   (10 20  30  40  50)
Output : 50 40  30  20  10  

*/

import java.util.Scanner;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr =new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+Arr.length +" elements");
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public void DisplayReverse()
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;
        int iTemp = 0;

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
    }
}

class Program265
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int iNo = sobj.nextInt();

        MarvellousX obj =new MarvellousX(iNo);

        obj.Accept();
        obj.Display();

        obj.DisplayReverse();
        System.out.println("Array after reverse operation : ");

        obj.Display();
        sobj.close();
    }
}