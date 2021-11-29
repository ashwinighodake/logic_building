/*Check whether number is perfect or not with the least complexity*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkPerfectX(int iNo)
{
    int iCnt=0,iSum=0;
    
    if((iNo==1)||(iNo==-1))
    {
        return TRUE;
    }
    if(iNo<0)
    {
      iNo=-iNo;
    }
    for(iCnt=(iNo/2);(iCnt>=1)&&(iSum<=iNo);iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
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

    bret=ChkPerfectX(iValue);

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

