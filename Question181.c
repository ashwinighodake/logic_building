/*Write program which accept number from user & check whether that number is perfect number or not.
Perfect number is such number whose summation of the factor is same as that number

Input:12    Output:FALSE
Input:6     Output:TRUE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkPerfect(int iNo)
{
    int i=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo/2;i>0;i--)
    {
        if((iNo%i)==0)
        {
           iSum=iSum+i;
        }
    }
    if(iSum==iNo)
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
    int iValue=0;
    BOOL bret=0;

    printf("\nEnter the number:");
    scanf("%d",&iValue);

    bret=ChkPerfect(iValue);

    if(bret==TRUE)
    {
        printf("\nThe given number is perfect");
    }
    else
    {
        printf("\nThe given number is not perfect number");
    }
    
    return 0;
}
