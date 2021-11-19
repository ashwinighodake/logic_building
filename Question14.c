/*Accept one character from user and convert case of that character.

Input: A     output:a
Input:a      output:A
*/

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >='A')&&(cValue<='Z'))
    {
        printf("%c\n",cValue+32);
        
    }
    else if((cValue>='a')&&(cValue<='z'))
    {
        printf("%c\n",cValue-32);
        
    }


} 
int main()
{
    char cValue='\0';

    printf("\nEnter the character:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}