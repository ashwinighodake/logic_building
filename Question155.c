/*5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/
#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask=0;
    UINT iResult=0;

    iMask=0XF000000F;

    iResult=(iNo ^iMask);
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
