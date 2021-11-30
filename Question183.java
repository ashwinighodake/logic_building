/*1.Write a Java program which accept string from user and count
number of capital characters.
Input : “Marvellous Multi OS”
Output : 4

*/
import java.util.*;

class Question183
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("\nEnter the string:");

        String str=sobj.nextLine();
        
        Count cobj=new Count();

        int iRet=0;

        iRet=cobj.CountCapital(str);
        System.out.println("Count is:"+iRet);

    }
}
class Count
{
      public int CountCapital(String str)
      {
        int i=0,iCnt=0;  
        char arr[]=str.toCharArray();
          for(i=0;i<arr.length;i++)
          {
              if((arr[i]>='A')&&(arr[i]<='Z'))
              {
                iCnt++;
              }
          }
          return iCnt;
      }
}