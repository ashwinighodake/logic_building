/*2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input :“Marvel lous Pyth on”
Output :“MarvelloPython"
*/
#include<stdio.h>
void StrCpyX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if(*src==32)
        {
           src++;
        }
        *dest=*src;
        src++;
        dest++;

    }
   
}
int main()
{
    char Arr[30]={'\0'};
    char Brr[30]={'\0'};

    printf("\nEnter a string:");
    fgets(Arr,30,stdin);

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}