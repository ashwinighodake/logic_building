/* Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>
void Pattern(int iNo)
{
    int i=0;
    char ch='A';
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=0;i<iNo;i++)
    {
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}