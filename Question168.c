// Write a program which accept matrix and reverse the contents of each column.

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void ReverseCol(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,k=0;
    int Rev[iRow][iCol];

    for(i=0;i<iRow;i++)
    {
        for(j=0,k=iCol-1;(j<iCol)&&(k>=0);j++,k--)
        {
            Rev[k][i]=Arr[j][i];
        }
    }
    printf("\nReversed contents of column:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0,k=iCol;(j<iCol)&&(k>=0);j++,k--)
        {
            printf("%d\t",Rev[i][j]);
        }
        printf("\n");
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
    printf("\nEntered values are:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }

    ReverseCol(p,iRow,iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}