//Accept one number from user & check whether the number is  even or odd .

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define  FALSE 0

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
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
    int iValue=0;
    BOOL bRet=FALSE;

    printf("\nEnter a number:");
    scanf("%d",&iValue);
     
    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("\nGiven number is Even number.");

    }
    else
    {
        printf("\nGiven number is odd number.");
    }
    
    
    return 0;
}