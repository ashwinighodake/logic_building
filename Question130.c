/* Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<stdio.h>

void Reverse(char *str)
{
    char temp;
    char *iStart=str;
    char *iEnd=str;

    if(str==NULL)
    {
        return;
    }
    while(*iEnd!='\0')
    {
        iEnd++;
    }
    iEnd--;
    while(iStart<iEnd)
    {
        temp=(*iStart);
        *iStart=(*iEnd);
        *iEnd=temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    printf("Reverse String is:%s",arr);
    return 0;

}