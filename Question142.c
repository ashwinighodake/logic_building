/*1.Write a program which checks whether 15th bit is On or OFF.*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
    int iMask=32768;

    int iResult=0;
     
    iResult= (iNo & iMask);

    if(iResult==iMask)
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
    int iRet=0;

    printf("\nEnter a number:");
    scanf("%d",&iValue);

    iRet=ChkBit(iValue);

    if(iRet==TRUE)
    {
        printf("\n 15th bit is ON.");
    }
    else
    {
        printf("\n15th Bit is OFF.");
    }
    
    return 0;
}