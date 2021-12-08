/*
 Program to check given string are Anagram or not.
  this java program will read two strings & check whether they are anagram string or not.

  Input : Peek
          Keep
  Output:Anagram
*/
import java.lang.*;
import java.util.*;

class Question229
{
    public boolean Frequency(String str1, String str2)
    {

        if(str1.length()!=str2.length())
        {
            return false;
        }
        else
        {
            char arr[]=str1.toLowerCase().toCharArray();
            char brr[]=str2.toLowerCase().toCharArray();
        
            Arrays.sort(arr);
            Arrays.sort(brr);
 
            if(Arrays.equals(arr,brr))
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter a string1:");
        String str1=sobj.nextLine();
        
        System.out.println("Enter a String2:");
        String str2=sobj.nextLine();

        Question229 qobj=new Question229();
        
        boolean bret=qobj.Frequency(str1,str2);
        if(bret==true)
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("Strings are not Anagram");
        }
    }
}