/* Write Java program which accept N numbers from user and display
all such elements which are divisible by 5.
*/
import java.util.*;

class Question189
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("\nEnter the how many numbers you want to insert:");
        int iValue=sobj.nextInt();

        int Arr[]=new int[iValue];

        System.out.println("\nEnter the Elements:");
        
        for(int i=0;i<iValue;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        Division aobj=new Division();
        aobj.Divisible5(Arr);

    }
}
class Division
{
    public void Divisible5(int Arr[])
    {
        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i]%5)==0)
            {
                System.out.print(Arr[i]+"\t");
            }
        }
    } 
}