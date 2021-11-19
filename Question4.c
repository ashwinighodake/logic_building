//Accept one number & check whether it is divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo1)
{
    if((iNo1 % 5) == 0)
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
    BOOL bret=FALSE;

    printf("\nEnter a number:");
    scanf("%d",&iValue);

    bret=Check(iValue);

    if(bret==TRUE)
    {
        printf("\nGiven number is Divisible by 5");
    }
    else
    {
        printf("\nGiven number is not divisible by 5");
    }
    
    return 0;
}