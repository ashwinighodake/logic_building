/*Accept one character & one number from user .Display that character in specific number of times 
which is also specified by the user.

Input: $ -4
output: $$$$

Input: M 5
Output: MMMMM
*/

#include<stdio.h>

void Display(char ch,int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
       printf("%c",ch);
    }
}
int main()
{
    int iValue=0;
    char cValue='\0';

    printf("\nEnter the character:");
    scanf("%c",&cValue);

    printf("Enter number:");
    scanf("%d",&iValue);;

    Display(cValue,iValue);
    return 0;
}