/* Write a java program which accept string from user and check
whether it contains vowels in it or not.
*/

import java.util.*;

class Question186
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("\nEnter the string:");

        String str=sobj.nextLine();
        
        Vowel vobj=new Vowel();

        boolean bRet=false;

        bRet=vobj.ChkVowel(str);
        
        if(bRet==true)
        {
            System.out.println("\nIt contains Vowel");
        }
        else
        {
            System.out.println("\nIt is not contain Vowel");
        }


    }
}
class Vowel
{
      public boolean ChkVowel(String str)
      {
        int i=0,iCnt=0; 
        char arr[]=str.toCharArray();

        for(i=0;i<arr.length;i++)
        {
            if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
            {
                iCnt++;
            }
        }
        if(iCnt!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
       }
}