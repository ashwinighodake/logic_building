/* Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
Note : If third parameter is greater than the size of second string
then concat whole string after first string.
*/
import java.util.*;

class Question204
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("\nEnter the First string:");

        String str1=sobj.nextLine();
        
        System.out.println("\nEnter the Second string:");

        String str2=sobj.nextLine();

        System.out.println("Enter how many characters you want to compare:");
        int No=sobj.nextInt();
        
        Check cobj=new Check();

        

        boolean bRet=cobj.ChkEqual(str1,str2,No);
        
        if(bRet==true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");

        }
    }
}
class Check
{
      public boolean ChkEqual(String str1,String str2,int No)
      {
          boolean flag=true;
        
          char Arr1[]=str1.toCharArray();
        char Arr2[]=str2.toCharArray();
        
        int i=0;
        for(i=0;i<No;i++)
        {
            if(Arr1[i]!=Arr2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            return true;
        }
        else
        {
            return false;
        }
      }
}