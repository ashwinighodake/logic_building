/* Write a java program which accept string from user and display
it in reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
import java.util.*;

class Question187
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("\nEnter the string:");

        String str=sobj.nextLine();
        
        Line lobj=new Line();

        lobj.Rev(str);

    }
}
class Line
{
    public void Rev(String str)
    {
        char arr[]=str.toCharArray();

        char brr[]=new char[arr.length];
        
        for(int i=arr.length-1,j=0;(i>=0)&&(j<arr.length);i--,j++)
        {
            brr[j]=arr[i];           
        }
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(brr[i]);
        }
    }
}