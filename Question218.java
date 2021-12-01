/*
 Write Java program which accept String from user and display below pattern.
 Input:Hello
 Output:
          H
          H e
          H e l
          H e l l
          H e l l o
 */

import java.util.*;

class Question218
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
         
        System.out.println("Enter the string:");
        String str=sobj.next();

        
        Matrix mobj=new Matrix();

        mobj.Pattern(str);

    }
}
class Matrix
{
    public void Pattern(String str)
    {
        int i=0,j=0;

        char Arr[]=str.toCharArray();

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}