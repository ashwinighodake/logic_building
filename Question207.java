/*
 Write Java program which accept number of rows and number of columns from user and display below pattern.
Input: row:4
       col:4
       a s h w
       a s h w
       a s h w 
       a s h w
*/

import java.util.*;

class Question207
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

        mobj.Pattern(str,iRow, iCol);

    }
}
class Matrix
{
    public void Pattern(String str,int iRow,int iCol)
    {
        int i=0,j=0;

        char Arr[]=str.toCharArray();

        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}