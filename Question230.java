/*
 write java program to transpose a matrix.  
*/
import java.lang.*;
import java.util.*;

public class Question230 
{

    public static void main(String args[])
    {
        int row,col;
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter number of rows:");
        row=sobj.nextInt();
  
        System.out.println("Enter number of columns:");
        col=sobj.nextInt();

        int a[][]=new int[row][col];
        System.out.println("Enter elements in the matrix:");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.println("Elements["+i+"]["+j+"]:");
                a[i][j]=sobj.nextInt();
            }
        }
        System.out.println("Matrix is:");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }
        System.out.println("Transpose matrix is:");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print(a[j][i]+"\t");
            }
            System.out.println();
        }
        
    }

    
}
