/*
4. Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.
Solution :
*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{

    UINT iMask1=128;    //7th
    UINT iMask2=256;    //8th
    UINT iMask3=512;    //9th
    
    UINT iResult1=0,iResult2=0,iResult3=0;

    iResult1= iNo & iMask1;
    iResult2= iNo & iMask2;
    iResult3= iNo & iMask3;
    if((iResult1==iMask1)&&(iResult2==iMask2)&&(iResult3==iMask3))
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
    UINT iValue=0;
    int iRet=0;

    printf("\nEnter  number:");
    scanf("%d",&iValue);

    iRet=ChkBit(iValue);

    if(iRet==TRUE)
    {
        printf("7th,8th & 9th bit is ON.");
    }
    else
    {
        printf("7th,8th & 9th bit is Off.");
    }
    return 0;   

}