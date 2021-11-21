/* Write a program which accept matrix and one number from user and return
frequency of that number.
Input :
        3 2 5 9
        4 3 2 2
        8 4 1 9
        3 9 7 5
Number : 9

Output :3
*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Frequency(int **Arr,int iRow,int iCol,int iNo)
{
    int i=0,j=0,iCnt=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(Arr[i][j]==iNo)
            {
              iCnt++;
            }
        }
    }
    return iCnt;
}
int main()
{
    int iRow=0,iCol=0,i=0,j=0,iRet=0,iValue=0;
    int **p=NULL;

    printf("\nEnter the number of rows:");
    scanf("%d",&iRow);

    printf("\nEnter the number of columns:");
    scanf("%d",&iCol);

    p=(int**)malloc(iRow*(sizeof(int*)));

    for(i=0;i<iRow;i++)
    {
        p[i]=(int*)malloc(iCol*(sizeof(int)));
    }

    printf("\nEnter the Values:");

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    printf("\nEnter the number which you want to frequency of that number:");
    scanf("%d",&iValue);

    iRet=Frequency(p,iRow,iCol,iValue);
    
    printf("\nEntered Values are:\n");

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }


    printf("Frequency:%d",iRet);


    for(i=0;i<iRow;i++)
    {
        free(p[i]);

    }
    free(p);
    return 0;
}