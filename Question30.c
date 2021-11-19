/*5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12  16 20
*/
#include<stdio.h>

void Multiple_Display(int iNo)
{
    int i=0;
    int iMul=iNo;
  
    for(i=1;i<=5;i++)
    {
        printf("%d\t",iMul);
    
        iMul=iMul+iNo;
    }    
}
int main()
{
    int iValue=0;
    printf("\nEnter number:");
    scanf("%d",&iValue);

    Multiple_Display(iValue);
    return 0;
}