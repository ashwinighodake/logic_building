/*5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input :2395
Output : 3
Input :1018
Output : 3
Input :9440
Output : 3
Input :96672
Output : 1
*/
#include<stdio.h>
int Count(int iNo)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        
        if((iDigit>0) && (iDigit<6))
        {
          iCnt++;
        }

        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue1=0,iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue1);

    iRet=Count(iValue1);
 
    printf("The no. which are less than 6 is:%d",iRet);
    return 0;
}