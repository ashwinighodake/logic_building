/*Write a java program which accept number from user and return the
count of even digits.
*/
import java.util.*;

class Question193
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue=sobj.nextInt();

        Even eobj=new Even();

        int iRet=eobj.EvenDigit(iValue);

        System.out.println("Count is:"+iRet);

    }
}
class  Even
{
    public int EvenDigit(int iNo)
    {
         int iDigit=0,i=0;

         while(iNo!=0)
         {
             iDigit=iNo%10;
             if((iDigit%2)==0)
             {
                 i++;
             }
             iNo=iNo/10;
         }
         return i;
    }
}