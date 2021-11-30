/* Write a java program which accept string from user and count
number of small characters.
Input : “Marvellous”
*/

import java.util.*;

class Question184
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
              if((arr[i]>='a')&&(arr[i]<='z'))
              {
                iCnt++;
              }
          }
          return iCnt;
      }
}