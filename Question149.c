/*
4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input :
Output :
137
713
*/
#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0,iMask1=0,iMask2=0;
    UINT iResult=0;

    iMask1=0X00000040;
    iMask2=0X00000200;

    iMask=iMask1|iMask2;

    iResult=(iNo ^ iMask);
         
    return iResult;

}
int main()
{
     UINT iValue=0;
    UINT iRet=0;

    printf("\nEnter  number:");
    scanf("%d",&iValue);

    iRet=ToggleBit(iValue);

    printf("\n%d",iRet);
    return 0;
}