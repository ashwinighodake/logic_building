/*Display the maximum number by comparing the two numbers.*/
#include<stdio.h>

int Maximum(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
       return iNo1;        
    }
    else
    {
        return iNo2;
    }
    
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    iRet=Maximum(iValue1,iValue2);
    printf("Maximum number is %d",iRet);
    return 0;

}