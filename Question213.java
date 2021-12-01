/*
 Write Java program which accept number of rows and number of columns from user and display below pattern.

Input: Row:4 Col:5
Output: 5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
*/
import java.util.*;

class Question213
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
         
        System.out.println("Enter number of Rows:");
        int iRow=sobj.nextInt();

        System.out.println("Enter number of Columns:");
        int iCol=sobj.nextInt();

        
        Matrix mobj=new Matrix();

        mobj.PatternX(iRow, iCol);

    }
}
class Matrix
{
    public void PatternX(int iRow,int iCol)
    {
        int i=0,j=0,k=1;
        

        for(i=0;i<iRow;i++)
        {
            
            for(j=0,k=iCol;j<iCol;j++,k--)
            {
              
                System.out.print(k+"\t");
                
            }
            System.out.println();
        }

    }
}