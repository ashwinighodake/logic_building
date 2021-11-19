/*write a program which accept number from user & print even factors of that number .

input:24
output: 1 2 4 6 8 12
*/

#include<stdio.h>

void DisplayFactor(int iNo1)
{
    int i=0;
    if(iNo1<=0)
    {
        iNo1=-iNo1;
    }
    for(i=1;i<=(iNo1/2);i++)
    {
        if(i==1)
        {
            printf("%d\t",i);
            
        }
        if(((iNo1%i)==0)&&((i%2)==0))
        {
            printf("%d\t",i);
            
        }
    }
}
int main()
{
    int iValue=0;
    printf("\nEnter number:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}