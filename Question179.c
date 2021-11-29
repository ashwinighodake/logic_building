/*Accept number from user & display its factor in reverse order

Input:12
Output:6 4 3 2 1
*/

#include<stdio.h>

void DisplayFactor(int iNo)
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
            printf("%d\t",i);
        }

    }

}
int main()
{
    int iValue=0;

    printf("\nEnter the number:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}
