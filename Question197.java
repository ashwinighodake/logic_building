/*
Write a program which accept number from user and return
difference between summation of even digits and summation of odd
digits.
*/


import java.util.*;

class Question197
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue=sobj.nextInt();

        Difference eobj=new Difference();

        int iRet=eobj.Summation(iValue);

        System.out.println("Count is:"+iRet);

    }
}
class  Difference
{
    public int Summation(int iNo)
    {
         int iDigit=0,i=0;
         int EvenSum=0,OddSum=0;

         while(iNo!=0)
         {
             iDigit=iNo%10;
             if((iDigit%2)==0)
             {
                 EvenSum=EvenSum+iDigit;
             }
             else
             {
                 OddSum=OddSum+iDigit;
             }
             iNo=iNo/10;
         }
         return EvenSum-OddSum;
    }
}