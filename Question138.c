/*3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
*/

#include<stdio.h>
void StrCpyCap(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {

            *src=*src-32;

        }
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
 
}
int main()
{
    char Arr[30]={'\0'};
    char Brr[30]={'\0'};

    printf("\nEnter a string:");
    scanf("%[^\n]%*c",Arr);
    printf("%s",Arr);

    StrCpyCap(Arr,Brr);

    printf("\n%s",Brr);

    return 0;
}