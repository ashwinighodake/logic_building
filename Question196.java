/*
Write a program which accept number from user and return multiplication of all digits.
*/

import java.util.*;

class Question196
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue=sobj.nextInt();

        Range eobj=new Range();

        int iRet=eobj.RangeX(iValue);

        System.out.println("Count is:"+iRet);

    }
}
class  Range
{
    public int RangeX(int iNo)
    {
         int iDigit=0,i=0,iMul=1;

        if(iNo==0)
        {
            return 0;
        }
         while(iNo!=0)
         {
             iDigit=iNo%10;
             iMul=iMul*iDigit;
             iNo=iNo/10;
         }
         return iMul;
    }
}