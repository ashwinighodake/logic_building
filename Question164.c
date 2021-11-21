/* 
Write a program which accept matrix and display addition of elements From each column.
*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void Addition(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iSum=0;

    printf("Summation is:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
          iSum=iSum+Arr[j][i];
        }
        printf("%d\t",iSum);
        iSum=0;

    }
   
}

int main()
{
    int iRow=0,iCol=0,i=0,j=0,iRet=0;
    int **p=NULL;

    printf("\nEnter the number of Rows:");
    scanf("%d",&iRow);

    printf("\nEnter the number of columns:");
    scanf("%d",&iCol);

    p=(int**)malloc(iRow*(sizeof(int*)));

    for(i=0;i<iRow;i++)
    {
        p[i]=(int*)malloc(iCol*(sizeof(int)));
    }

    printf("\nEnter the values:");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    printf("\nEntered  values are:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }

    Addition(p,iRow,iCol);
    return 0;
}