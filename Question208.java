/*
 Write Java program which accept number of rows and number of columns from user and display below pattern.

Input: row:4
       col:4

       A B C D
       a b c d
       A B C D
       a b c d
*/
import java.util.*;

class Question208
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
                if((i%2)!=0)
                {
                    if((Arr[j]>='A')&&(Arr[j]<='Z'))
                    {
                        System.out.print((char)((int)Arr[j]+32)
                        +"\t");
            
                    }
                    else if((Arr[j]>='a')&&(Arr[j]<='z'))
                    {
                        System.out.print((char)((int)Arr[j]-32)
                        +"\t");

                    }
                   
                }
                else if((i%2)==0)
                {
                    System.out.print(Arr[j]+"\t");
                
                }
            }
            System.out.println();
        }

    }
}