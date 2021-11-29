/*Accept number from user & return the summation of its factors
Input: 10
Output:8

Input:-10
Output:8

Input:7
Output:1

Input:0
Output:0
*/

#include<stdio.h>
int SumFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;

}
int SumFactorX(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=SumFactor(iValue);

    printf("Summation of factor is:%d",iRet);

    iRet=SumFactorX(iValue);

    printf("\nSummation of factor is:%d",iRet);


    return 0;

}