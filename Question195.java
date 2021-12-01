/*
Write a program which accept number from user and return the
count of digits in between 3 and 7.
*/

import java.util.*;

class Question195
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
         int iDigit=0,i=0;

         while(iNo!=0)
         {
             iDigit=iNo%10;
             if((iDigit>3)&&(iDigit<7))
             {
                 i++;
             }
             iNo=iNo/10;
         }
         return i;
    }
}