/* Write a java program which accept number of rows and number of
columns from user and display below pattern.
Input:Row:4 col:4
output:
       * * * *
       *   * *
       * *   *
       * * * *
*/

import java.util.*;

class Question228
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
            
            if(i==0)
            {
                for(j=0;j<(iCol);j++)
                {
                    System.out.print("*\t");
                }    
            }
            System.out.println();
            for(j=0;j<(iCol);j++)
            {
              if(((i==iRow-1)&&(j==0))||((i==iRow-2)&&(j==iRow-3))||((i==iRow-3)&&(j==iRow-2))||((i==0)&&(j==iRow-1)))
              {
                  System.out.print("*\t");
    
              }
              else if(j==0)
              {
                  System.out.print("*\t");
              }
              else
              {
                  System.out.print(" \t");
              }
                        
            }
            System.out.println();
        }

    }
}