/*2.Write a program which accept number from user and display its factors in
decreasing order.
Input: 12
output: 6 4 3 2 1
*/


#include<stdio.h>

void Factor(int iNo)
{
    int i=0;
    printf("\nFactors are:");
    for(i=(iNo/2);i>0;i--)
    { 
        if((iNo%i)==0)
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

    Factor(iValue);
    return 0;
}