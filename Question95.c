/*5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol=4
Output : 1 2 3 4
         1 2   4
         1   3 4
         1 2 3 4
*/       
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iCnt;
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
    iCnt=iCol;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==j)||(i==1)||(j==1)||(i==iRow)||(i==iCol)||(j==iRow)||(j==iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
            
            
            
        }
        iCnt--;
        printf("\n");
    }

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("\nEnter number of rows:");
    scanf("%d",&iValue1);

    printf("\nEnter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}

