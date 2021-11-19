//string in lower case
#include<stdio.h>
void StrCpyCap(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
           *src=*src+32;
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
    fgets(Arr,30,stdin);
    printf("%s",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}