/*
4. Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input :
Output :
10
14
3
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
   UINT iMask=0;
    UINT iResult=0;

    iMask=0X00000001;
    
    iMask=iMask<<(iPos-1);

    iResult=(iNo^iMask);

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
 
    iRet=OnBit(iValue1,iValue2);
    printf("%d",iRet);
}