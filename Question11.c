/*Write a program which accept one number from user and print that number of
even numbers on screen.

Input: 7
output: 2 4 6 8 10 12 14
*/

#include<stdio.h>

void PrintEven(int iNo1)
{
    int i=0;
    int iDigit=2;
    if(iNo1<=0)
    {
        return;
    }
    for(i=1;i<=iNo1;i++)
    {
        if((iDigit%2)==0)
        {
            printf("%d\t",iDigit);
        }
        iDigit=iDigit+2;
    }
}

int main()
{
    int iValue=0;

    printf("\nEnter number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;

}