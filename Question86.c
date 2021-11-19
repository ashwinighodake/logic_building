/*1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : *
         * *
         * * *
         * * * *
         
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }
    if(iRow!=iCol)
    {
        return;
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
 
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}