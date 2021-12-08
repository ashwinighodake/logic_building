/* Write a java program which accept number of rows and number of columns from user and display below pattern.
   Input:Row:4  Col:4
   Output:
         * * * #
         * * # @
         * # @ @
         # @ @ @
*/

import java.util.*;

class Question227
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
        int i=0,j=0;
        

        for(i=0;i<iRow;i++)
        {
            
            for(j=0;j<(iCol);j++)
            {
              if(((i==iRow-1)&&(j==0))||((i==iRow-2)&&(j==1))||((i==1)&&(j==iRow-2))||((i==0)&&(j==iRow-1)))
              {
                  System.out.print("#\t");
    
              }
              else if(j<iRow-i)
              {
                System.out.print("*\t");
    
              }
              else
              {
                System.out.print("@\t");
    
              }          
            }
            System.out.println();
        }

    }
}