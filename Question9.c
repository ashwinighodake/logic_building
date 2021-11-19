//Accept two numbers from users & Display first number in second number of times.
/* input:12 5
   output:12 12 12 12 12
*/
#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int i=0;
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    for(i=1;i<=iFrequency;i++)
    {
        printf("\n%d",iNo);
    }

}
int main()
{
    int iValue1=0;
    int iCount=0;
    printf("\nEnter a number:");
    scanf("%d",&iValue1);

    printf("\nEnter a frequency:");
    scanf("%d",&iCount);

    Display(iValue1,iCount);

    return 0;

}