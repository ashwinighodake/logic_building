#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0X00000040;

    iResult=iNo & iMask;

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
    UINT iValue=0,iRet=0;

    printf("\nEnter a number:");
    scanf("%d",&iValue);

    iRet=ChkBit(iValue);

    if(iRet==TRUE)
    {
        printf("23rd bit is On.");
    }
    else
    {
        printf("\n23 rd bit is OFF.");
    }
    
    return 0;
}