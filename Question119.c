/*4. Accept Character from user and check whether it is small case or
not (a-z).
Input :g
Output : TRUE
Input :D
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the Character:");
    scanf("%c",&cValue);

    bRet=ChkSmall(cValue);
    
    if(bRet==TRUE)
    {
        printf("Given letter small case letter");
    }
    else
    {
        printf("Given letter is not Small case letter");
    }
    
    return 0;

}