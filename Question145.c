/*5. Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
Solution :
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1=0X00000001; //1st bit
    UINT iMask2=0X40000000;  //32th bit
    
    UINT iResult1=0,iResult2=0;

    iResult1= iNo & iMask1;
    iResult2= iNo & iMask2;
    
    if((iResult1==iMask1)&&(iResult2==iMask2))
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
        printf("1st& 32th bit is ON.");
    }
    else
    {
        printf("1st& 32th bit is Off.");
    }
    return 0;   

}