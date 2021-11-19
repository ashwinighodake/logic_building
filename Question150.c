/*
5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input :
Output :
73
79
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask=0;
    UINT iResult=0;

    iMask=0X0000000F;

    iResult=iNo | iMask;
         
    return iResult;

}
int main()
{
     UINT iValue=0;
    UINT iRet=0;

    printf("\nEnter  number:");
    scanf("%d",&iValue);

    iRet=OnBit(iValue);

    printf("\n%d",iRet);
    return 0;
}