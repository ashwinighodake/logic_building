/*
Write a program which accept number from user and return the
count of odd digits.
*/


import java.util.*;

class Question194
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue=sobj.nextInt();

        Odd eobj=new Odd();

        int iRet=eobj.OddDigit(iValue);

        System.out.println("Count is:"+iRet);

    }
}
class  Odd
{
    public int OddDigit(int iNo)
    {
         int iDigit=0,i=0;

         while(iNo!=0)
         {
             iDigit=iNo%10;
             if((iDigit%2)!=0)
             {
                 i++;
             }
             iNo=iNo/10;
         }
         return i;
    }
}