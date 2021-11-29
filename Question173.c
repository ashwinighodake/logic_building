/* Accept number from user & display that number $ on screen*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("\t $ \t");
    }
}
int main()
{
    int iValue=0;
    
    printf("\nEnter Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}