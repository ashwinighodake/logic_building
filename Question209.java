/*
 Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input: Row:4
       col:4
       abcd
       
OutPut:   a a a a
          b b b b
          c c c c
          d d d d

*/
import java.util.*;

class Question209
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
         
        System.out.println("Enter number of Rows:");
        int iRow=sobj.nextInt();

        System.out.println("Enter number of Columns:");
        int iCol=sobj.nextInt();

        System.out.println("Enter the string:");
        String str=sobj.next();
        
        Matrix mobj=new Matrix();

        mobj.PatternX(str,iRow, iCol);

    }
}
class Matrix
{
    public void PatternX(String str,int iRow,int iCol)
    {
        int i=0,j=0;
        char Arr[]=str.toCharArray();

        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(Arr[i]+"\t");
               
            }
            System.out.println();
        }

    }
}