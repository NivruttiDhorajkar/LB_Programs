/*
*************** Template *******************
Accept N number from user and Display it.
*/

import java.util.Scanner;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr =new int[iSize];
    }

    public void Accept()
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

    public void Display()
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

class Program259
{
    public static void main(String arg[])
    {
        
        ArrayX obj =new ArrayX(5);

        obj.Accept();
        obj.Display();
    
    }
}