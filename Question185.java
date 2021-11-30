/* Write a java program which accept string from user and return
difference between frequency of small characters and frequency
of capital characters.
*/

import java.util.*;

class Question185
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
        int i=0,iSum1=0,iSum2=0;  
        char arr[]=str.toCharArray();
          for(i=0;i<arr.length;i++)
          {
            if((arr[i]>='A')&&(arr[i]<='Z'))
            {
              iSum1++;
            }
            else if((arr[i]>='a')&&(arr[i]<='z'))
              {
                iSum2++;
              }
          }
          return iSum2-iSum1;
      }
}