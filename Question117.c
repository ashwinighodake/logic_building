/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input :F
Output : TRUE
Input :d
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bRet=ChkCapital(cValue);
    
    if(bRet==TRUE)
    {
        printf("Given letter is capital letter");
    }
    else
    {
        printf("Givenletter is not capital letter");
    }
    
    return 0;

}