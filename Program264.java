import java.util.Scanner;

/*
Accept N number from user and Display it and
return the addition of that N numbers.

Input : 5   (10 20  30  40  50)
Output : 150

*/


class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int iNo = sobj.nextInt();

        int Arr[] = new int [iNo];

        System.out.println("Enter the elements oa array:");
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        int iSum = 0;
        for( int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        System.out.println("Addition is: "+iSum);

        sobj.close();
    }
}