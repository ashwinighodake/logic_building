/*1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
         5 6 7 8
         9 1 2 3
         4 5 6 7
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iCnt=1;
    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        { 
            if(iCnt>9)
           {
               iCnt=1;
           }
           printf("%d\t",iCnt);
          
           iCnt++;
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}