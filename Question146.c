/*1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input :
Output :
79
15*/
#include<stdio.h>

typedef unsigned int UINT;


UINT OffBit(UINT iNo)
{
    UINT iMask=0;
    UINT iResult=0;

    iMask=0X00000040;

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        printf("\nBit is On.");
    
        iResult=(iNo^iMask);
    }
         
    return iResult;

}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("\nEnter  number:");
    scanf("%d",&iValue);

    iRet=OffBit(iValue);

    printf("\n%d",iRet);
    return 0;
}