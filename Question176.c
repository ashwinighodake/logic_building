/*Accept a number from user & check whether second number is factor of first number or not

Input: 15 15
output: TRUE

Input: 15 1
output:TRUE

Input:-15 5
Output:TRUE

Input: 21 5
Output: FALSE 
*/

#include<stdio.h>
#define SUCCESS 1
#define FAILURE 0
typedef int BOOL;

BOOL CheckFactor(int iNo1,int iNo2)
{
   if((iNo1%iNo2) == 0)
   {
       return SUCCESS;
   }
   else
   {
       return FAILURE;
   }
   
}
int main()
{
    int iValue1=0,iValue2=0;
    BOOL bRet=FAILURE;

    printf("\nEnter two Number:");
    scanf("%d %d",&iValue1,&iValue2);
 
    bRet=CheckFactor(iValue1,iValue2);
    if(bRet==SUCCESS)
    {
        printf("%d is Factor of %d ",iValue2,iValue2);
    }
    else
    {
        printf("%d is not Factor of %d",iValue2,iValue1);
    }
    
    return 0;
}