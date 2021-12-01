/*Accept sing from user and reverse the contents of that string by toggling the case.
Input : “aCBdef”
Output : “FEDcbA”
*/

import java.util.*;

class Question205
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter a string:");
        String str=sobj.nextLine();

        Toggle tobj=new Toggle();
        tobj.ReverseToggle(str);

//       String newStr=tobj.ReverseToggle(str);

  //     System.out.println("String is:"+newStr);

    }
}
class Toggle
{
    public void  ReverseToggle(String str)
    {
         char Arr[]=str.toCharArray();
         char rev[]=new char[Arr.length];
          int i=0,j=0;
         for(i=0,j=Arr.length-1;((i<=Arr.length-1)&&(j>=0));i++,j--)
         {
             if((Arr[i]>='A')&&(Arr[i]<='Z'))
             {

                 rev[j]=(char)((int)Arr[i]+32);
             }
             else if((Arr[i]>='a')&&(Arr[i]<='z'))
             {
                 rev[j]=(char)((int)Arr[i]-32);
             }
            
         }
         for(i=0;i<Arr.length;i++)
         {
             System.out.print(rev[i]+"\t");
         }
         
    } 
}