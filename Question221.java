/* Write Java program which accept String from user and display below pattern.
Input : hello
Output: 
        h * * * *
        h e * * *
        h e l * *
        h e l l *
        h e l l o
*/

import java.util.*;

class Question221
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
            for(j=0;j<Arr.length;j++)
            {
                if(j<=i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
       
    }
}