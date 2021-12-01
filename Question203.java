/* Write a program which 2 strings from user and check whether contents of two strings are equal or not.
Input :
“Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE
*/
import java.util.*;

class Question203
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("\nEnter the First string:");

        String str1=sobj.nextLine();
        
        System.out.println("\nEnter the Second string:");

        String str2=sobj.nextLine();
        
        Check cobj=new Check();

        

        boolean bRet=cobj.ChkEqual(str1,str2);
        
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
      public boolean ChkEqual(String str1,String str2)
      {
          boolean flag=true;
        
          char Arr1[]=str1.toCharArray();
        char Arr2[]=str2.toCharArray();
        if(Arr1.length!=Arr2.length)
        {
            return false;
        }
        int i=0;
        for(i=0;i<Arr1.length;i++)
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