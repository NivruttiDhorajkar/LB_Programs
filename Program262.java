/*
Accept N number from user and Display it and
return the addition of that N numbers.

Input : 5   (10 20  30  40  50)
Output : 150

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

    public int Addition()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class Program262
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int iNo = sobj.nextInt();

        MarvellousX obj =new MarvellousX(iNo);

        obj.Accept();
        obj.Display();

        int iRet = obj.Addition();
        System.out.println("Addition of all elements is : "+iRet);
        sobj.close();
    }
}