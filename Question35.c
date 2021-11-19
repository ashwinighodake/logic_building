/*5. Write a program which accept number from user and display its table in reverse
order.
Input :2
Output : 20 18 16 14 12 10 8 6 4 2

Input :5
Output : 50 45 40 35 30 25 20 15 10 5

Input :-5
Output : 50 45 40 35 30 25 20 15 10 5
*/
#include<stdio.h>

int TableRev(int iNo)
{
    int iSum=0;
    int iCnt=10;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iSum=iCnt*iNo;
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iSum);
        iSum=iSum-iNo;
    }

}
int main()
{
    int iValue=0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;

}