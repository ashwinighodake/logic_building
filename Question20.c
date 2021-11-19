/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.
*/

#include<stdio.h>

int Fact(int iNo)
{
    int i=0;
    int iSumFact=0,iSumNonFact=0,iSum=0;
   
    for(i=1;i<iNo;i++)
    { 
        if((iNo%i)==0)
        {
            iSumFact=iSumFact+i;    
        }
        else if((iNo%i)!=0)
        {
            iSumNonFact=iSumNonFact+i;
        }
        
    }
    printf("sum of fact:%d",iSumFact);
    printf("sum of NON fact:%d",iSumNonFact);
    
    iSum=iSumFact-iSumNonFact;

    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;


    printf("\nEnter number:");
    scanf("%d",&iValue);

    iRet=Fact(iValue);
    printf("addition of non factors  is:%d",iRet);

    return 0;
}