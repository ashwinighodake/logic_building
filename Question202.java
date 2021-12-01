/* Write java program which accept N numbers from user and return product of all odd elements.
*/

import java.util.*;

class Question202
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
        
        Number nobj=new Number();
        int bret=nobj.Product(Arr);

        System.out.println("Product is:"+bret);

    }
}

class Number
{
      public int Product(int Arr[])
      {
          int i=0,iMul=1;
          for(i=0;i<Arr.length;i++)
          {
              if((Arr[i]%2)!=0)
              {
                 iMul=iMul*Arr[i];
            
              }
          }
          return iMul;
      }
}