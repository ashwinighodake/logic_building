/*5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input :5
Output : -7 (8 - 15)
Input :-5
Output : -7 (8 - 15)
Input :10
Output : 2895 (3840 - 945)
*/
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i=0,iFact1=1,iFact2=1,iFact=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
      if((i%2)==0)
      {
          iFact1=iFact1*i;
      }
    }
    for(i=1;i<=iNo;i++)
    {
      if(!(i%2)==0)
      {
          iFact2=iFact2*i;
      }
    }
    iFact=iFact1-iFact2;
    
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}