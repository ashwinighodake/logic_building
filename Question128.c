/*3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt=0,iCap=0,iSmall=0;
    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
       if((*str>='A')&&(*str<='Z'))
       {
           iCap++;
       }
       else if((*str>='a')&&(*str<='z'))
       {
           iSmall++;
       }
       str++;
    }
    return iSmall-iCap;
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    
    iRet=Difference(arr);
    printf("%d",iRet);
    return 0;
}