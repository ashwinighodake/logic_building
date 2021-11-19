/*5. Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000 745
Output : 74.5%
*/
#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float percent=0.0f;

    percent=iNo1/iNo2;

    return percent;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet = 0.0;

    printf("\nPlease enter total marks");
    scanf("%d",&iValue1);
    
    printf("\nPlease enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("\nPercentage is:%f",fRet);
    return 0;
}