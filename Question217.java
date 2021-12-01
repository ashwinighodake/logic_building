/*
 Write Java program which accept String from user and display below pattern.
 Input:Hello
 Output:
        H e l l o
        H e l l
        H e l
        H e
        H
 */

import java.util.*;

class Question217
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
            for(j=0;j<(Arr.length-i);j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}