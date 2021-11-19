/*1.Write a program which accept number from user and display its multiplication of
factors.
Input :12
Output :144 (1 * 2 * 3 * 4 * 6)
 
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int i=0;
    int iMult=1;
    if(iNo==0)
    {
        return 0;
    }
    for(i=1;i<=(iNo/2);i++)
    { 
        if((iNo%i)==0)
        {
            iMult=iMult*i;
        }
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;


    printf("\nEnter number:");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("Multiplication is:%d",iRet);

    return 0;
}