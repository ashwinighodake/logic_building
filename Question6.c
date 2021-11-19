//Accept one number from user & print that number of * on screen.

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt=0;
    if(iNo1<0)
    {
       iNo1=-iNo1;
    }
    while(iCnt<iNo1)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue1=0;
    printf("\nEnter a number:");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}