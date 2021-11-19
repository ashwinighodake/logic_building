/*
3. Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.
Solution :
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1=128; //7th bit
    UINT iMask2=32768;  //15th bit
    UINT iMask3=2097152;  //21st bit
    UINT iMask4=268435456; //28th bit

    UINT iResult1=0,iResult2=0,iResult3=0,iResult4=0;

    iResult1= iNo & iMask1;
    iResult2= iNo & iMask2;
    iResult3= iNo & iMask3;
    iResult4= iNo & iMask4;
    
    if((iResult1==iMask1)&&(iResult2==iMask2)&&(iResult3==iMask3)&&(iResult4==iMask4))
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
        printf("7th,15th,21st &28th bit is ON.");
    }
    else
    {
        printf("7th,15th,21st & 28th bit is Off.");
    }
    return 0;   

}