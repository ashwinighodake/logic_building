
/*5. Accept one character from user and check whether that character is vowel
(a,e,i,o,u) or  not.

input:a   output:TRUE
input:d   output:FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char cValue)
{
    if((cValue=='a')||(cValue=='A')||(cValue=='e')||(cValue=='E')||(cValue=='i')||(cValue=='I')||(cValue=='o')||(cValue=='O')||(cValue=='u')||(cValue=='U'))
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
 
    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
       printf("\nTRUE,It is vowel.");
    }
    else
    {
        printf("\nFALSE,It is not vowel.");
    }
    
    return 0;
}