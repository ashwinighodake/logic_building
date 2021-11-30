/* Write Java program which accept N numbers from user and return
difference between summation of even elements and summation of
odd elements. 
*/

import java.util.*;

class Question188
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("\nEnter the how many numbers you want to insert:");
        int iValue=sobj.nextInt();

        int Arr[]=new int[iValue];

        System.out.println("\nEnter the Elements:");
        
        for(int i=0;i<iValue;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        ArrayDemo aobj=new ArrayDemo();
        int iRet=aobj.Difference(Arr);
        System.out.println("\nDifference is:"+iRet);
    }
}
class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int iSum1=0,iSum2=0;
        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i]%2)==0)
            {
                iSum1=iSum1+Arr[i];
            }
            else
            {
                iSum2=iSum2+Arr[i];
            }
        }
        return iSum1-iSum2;
    }
}