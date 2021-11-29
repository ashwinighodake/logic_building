/*Accept number from user & check whether that number is divisible by 3 or not*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Divisible(int iNo)
{
    if((iNo%3)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    int iValue1=0;
    BOOL iRet=FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue1);

    iRet=Divisible(iValue1);

    if(iRet==TRUE)
    {
        printf("\nNumber is divisible by 3");
    }
    else
    {
        printf("\nNumber is not divisible by 3");
    }
    
    return 0;
}