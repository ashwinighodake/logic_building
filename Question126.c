/*1.Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt=0,iSum=0;
    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iSum++;
        }
        str++;
    }
    return iSum;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    iRet=CountCapital(arr);

    printf("%d",iRet);
    return 0;
}