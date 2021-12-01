/* Write Java program which accept number of rows and number of columns from user and display below pattern.
   Input: Row:4
          Col:4

    Output:
           1   2  3  4
           5   6  7  8
           9  10 11 12
           13 14 15 16
    */
import java.util.*;

class Question210
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
        int i=0,j=0,iCnt=1;
        

        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(iCnt+"\t");
                iCnt++;
            }
            System.out.println();
        }

    }
}