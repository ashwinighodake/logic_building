/*Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("The Ascii value of '%c'\tdecimal value:%d\toctal value:%o\tHex small:%x\tHex Cap:%X\n",iCnt,iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}