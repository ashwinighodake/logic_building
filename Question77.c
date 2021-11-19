/*2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 2 4 6 8
         1 3 5 7
         2 4 6 8
         1 3 5 7
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
        iCnt=0;
        if((i%2)!=0)
        {
            iCnt=1;
 
          for(j=0;j<iCol;j++)
          { 
              printf("%d\t",iCnt);
              iCnt=iCnt+2;
          }
        }
        else
        {
          iCnt=2;
            
          for(j=0;j<iCol;j++)
          { 
              printf("%d\t",iCnt);
              iCnt=iCnt+2;
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

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}