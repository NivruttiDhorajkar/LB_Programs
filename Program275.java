import java.util.Scanner;

/*
************************* Strings in java ***********************

Accept string from user and 
convert it into charcter array.

*/



class Program275
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("entered your string:");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        
        sobj.close();
    }
}
