/*1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”
*/
#include<stdio.h>
void StrCpyRev(char *src,char *dest)
{
    char *str;      
    str=src;
    
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        src++;
    }
    src--;
    while(src!=str-1)
    {
        *dest=*src;
        src--;
        dest++;
    }
}
int main()
{
    char Arr[30]={'\0'};
    char Brr[30]={'\0'};

    printf("\nEnter the string:");
    fgets(Arr,30,stdin);

    StrCpyRev(Arr,Brr);

    printf("%s",Brr);
    return 0;
}



















