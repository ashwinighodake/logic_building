/* Write java program which accept N numbers from user and accept
Range, Display all elements from that range
*/

import java.util.*;

class Question201
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number of elements:");
        int iValue=sobj.nextInt();

        int Arr[]=new int[iValue];

        System.out.println("Enter the elements:");
        for(int i=0;i<iValue;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Enter start:");
        int iStart=sobj.nextInt();

        System.out.println("Enter End:");
        int iEnd=sobj.nextInt();

        Number nobj=new Number();
        nobj.ChkNumber(Arr,iStart,iEnd);
        
    }
}
class Number
{
      public void ChkNumber(int Arr[],int iStart,int iEnd)
      {
          int iCnt=0,i=0,pos=0;

          System.out.println("Elements are:");
          for(i=0;i<Arr.length;i++)
          {
              if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
              {
                 System.out.println(Arr[i]);
              }
          }
        
      }
}