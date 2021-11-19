/*
2. Write a program which accept one number and position from user and off
that bit. Return modified number.
Input :
Output :
10
8
2
*/
#include<stdio.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask=0;
    UINT iResult=0;

    iMask=0X00000001;
    
    iMask=iMask<<(iPos-1);

    iResult=iNo & iMask;

    if(iResult==iMask)
    {
    
        iResult=(iNo^iMask);
    }
         
    return iResult;

}
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("\nEnter number:");
    scanf("%d",&iValue1);

    printf("\nEnter position:");
    scanf("%d",&iValue2);
 
    iRet=OffBit(iValue1,iValue2);
    printf("%d",iRet);
}