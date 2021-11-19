/*3. Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal
*/
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;
    BOOL bRet=FALSE;
    
    printf("\nEnter a number:");
    scanf("%d",&iValue1);
    
    printf("\nEnter a number:");
    scanf("%d",&iValue2);
    
    bRet=ChkGreater(iValue1,iValue2);

    if(bRet==TRUE)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nNon-Equal");
    }
    
    return 0;
}