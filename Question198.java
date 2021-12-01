/*
 Write java program which accept N numbers from user and accept
one another number as NO , check whether NO is present or not.
*/
import java.util.*;

class Question198
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
        boolean bret=nobj.ChkNumber(Arr,iNo);

        if(bret==true)
        {
            System.out.println("Number is Present!");
        }
        else
        {
            System.out.println("Number is not present!!");
        }

    }
}

class Number
{
      public boolean ChkNumber(int Arr[],int iNo)
      {
          int iCnt=0;
          for(int i=0;i<Arr.length;i++)
          {
              if(Arr[i]==iNo)
              {
                  iCnt++;
                  break;
              }
          }
          if(iCnt!=0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
}