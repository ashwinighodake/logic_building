/*
3. Write java program which accept N numbers from user and accept
one another number as NO , return index of last occurrence of that NO.
*/

import java.util.*;

class Question200
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
        System.out.println("Enter the number which you want to search:");
        int iNo=sobj.nextInt();

        Number nobj=new Number();
        int bret=nobj.ChkNumber(Arr,iNo);
        
        System.out.println("Position is:"+bret);

    }
}

class Number
{
      public int ChkNumber(int Arr[],int iNo)
      {
          int iCnt=0,i=0,pos=0;
          for(i=0;i<Arr.length;i++)
          {
              if((Arr[i]==iNo)&&(pos<i))
              {
                 pos=i;
            
              }
          }
          return pos+1;
      }
}