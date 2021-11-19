/*4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input :%
Output : TRUE
Input :d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSpecial(char ch)
{
     if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))//(!((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z')||(ch>='0')&&(ch<='9')))
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

    printf("Enter a character:");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);
    if(bRet==TRUE)
    {
        printf("It ia an special Symbol.");
    }
    else
    {
        printf("It is not an special Symbol.");
    }
    

    return 0;
}