/*
 Write Java program which accept number of rows and number of columns from user and display below pattern.
 Input: Row:4
        Col:4
 Output:
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
 */
import java.util.*;

class Question215
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
        int i=0,j=0,k=0;
        

        for(i=0,k=1;i<iRow;i++,k++)
        {
            
            for(j=0;j<(iCol);j++)
            {
              
                System.out.print(k+"\t");
                
            }
            System.out.println();
        }

    }
}