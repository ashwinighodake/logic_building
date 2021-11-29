/*Accept number from user & display its factors
Input:15
Output:1 3 5

Input: 23
Output:1

Input:10
Output:1 2 5

Input:-15
Output:1 3 5
*/

#include<stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    DisplayFactor(iValue);

    return 0;
}