/*2. Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input : 101
Output : Greater
*/
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    bRet=ChkGreater(iValue);

    if(bRet==TRUE)
    {
        printf("\nGreater");
    }
    else
    {
        printf("\nSmaller");
    }
    
    return 0;
}