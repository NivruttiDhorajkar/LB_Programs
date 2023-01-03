/*
Accept N number from user and Display it and
return the addition of that N numbers.

Input : 5   (10 20  30  40  50)
Output : 150

*/



class Program263
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40,50};

        int iSum = 0;
        for( int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        System.out.println("Addition is: "+iSum);

        
    }
}