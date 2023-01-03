/*
Accept N number from user and store it into the array
and check wheather array is palindrome or not.


Input : 5   (10 20  30  40  50)
Output : not palindrome 

Input : 5   (10 20  30  20  10)
Output : palindrome 

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

    public boolean CheckPalindrome()
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;
        boolean bFlag = true;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}

class Program266
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int iNo = sobj.nextInt();

        MarvellousX obj =new MarvellousX(iNo);

        obj.Accept();
        obj.Display();

        boolean bRet = obj.CheckPalindrome();
        if(bRet == true)
        {
            System.out.println("Array is palindrome");
        }
        else
        {
            System.out.println("Array is not palindrome");
        }
        
        sobj.close();
    }
}