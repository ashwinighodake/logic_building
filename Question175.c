/*Accept 3 numbers from user & return the largest number.

input:15 10 21
output:21

input: 15 15 15 
output:15

input:40 0 -40
output: 40

*/

#include<stdio.h>

int Maximum(int iNo1,int iNo2,int iNo3)
{
    if((iNo1>=iNo2)&&(iNo1>=iNo3))
    {
        return iNo1;
    }
    else if((iNo2>=iNo1) && (iNo2>=iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
    
    
} 
int main()
{
    int iValue1=0, iValue2=0,iValue3=0;
    int iRet=0;

    printf("\nEnter three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Maximum(iValue1,iValue2,iValue3);
    printf("Maximum number is :%d",iRet);

    return 0; 
}