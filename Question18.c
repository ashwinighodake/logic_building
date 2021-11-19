/*3.Write a program which accept number from user and display all its non factors.
Input :12
Output :5 7 8 9 10 11
*/


#include<stdio.h>

void NonFactor(int iNo)
{
    int i=0;
    printf("\nFactors are:");
    for(i=1;i<=iNo;i++)
    { 
        if((iNo%i)!=0)
        { 
            printf("%d\t",i);
        
        }
    }
}
int main()
{
    int iValue=0;
    int iRet=0;


    printf("\nEnter number:");
    scanf("%d",&iValue);

    NonFactor(iValue);
    return 0;
} 