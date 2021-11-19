/*1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input :
Output :
10
2
TRUE
*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask=0;
    UINT iResult=0;

    iMask=0X00000001;
    iMask=iMask<<(iPos-1);

    iResult=(iNo &iMask);

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
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("\nEnter number:");
    scanf("%d",&iValue1);

    printf("\nEnter position:");
    scanf("%d",&iValue2);
 
    iRet=ChkBit(iValue1,iValue2);

    if(iRet==TRUE)
    {
        printf("TRUE");
    }
    else
    {
       printf("\nOFF");
    }
    

}