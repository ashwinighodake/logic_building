/*2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iValue=0;

    printf("\nEnter a number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}