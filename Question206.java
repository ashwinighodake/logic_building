/*
 Accept string from user and check whether the string is palindrome or not without considering its case.
Input : “1abccBA1”
*/
import java.util.*;

class Question206
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter a string:");
        String str=sobj.nextLine();

        Palindrome pobj=new Palindrome();
        
        boolean bret=pobj.ChkPalindrome(str);
        
        if(bret==true)
        {
            System.out.println("It is Palindrome");
        }
        else
        {
            System.out.println("It is not Palindrome");
        }
        

    }
}
class Palindrome
{
    public boolean ChkPalindrome(String str)
    {
        char Arr[]=str.toCharArray();
        char Brr[]=new char[Arr.length];
      
        for(int i=Arr.length-1,j=0;(i>=0)&&(j<Arr.length);i--,j++)
        {
            Brr[j]=Arr[i];
        }
        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]!=Brr[i])
            {
                break;
            }
        }
        if(i==Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}