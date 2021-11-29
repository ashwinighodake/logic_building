/*Accept number from user & return its largest factor

Input:12
Output:6

Input:13
Output:1

Input:25
Output:5

Input:100
Output:50

Input:27
Output:9
*/

#include<stdio.h>

int MaxFactor(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo/2;i>0;i--)
    {
        if((iNo%i)==0)
        {
            break;
        }
    }
    return i;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=MaxFactor(iValue);

    printf("Largest factor is:%d",iRet);
    return 0;
}