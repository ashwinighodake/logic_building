/*Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL SparseMat(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    BOOL flag=TRUE;
    
}
int main()
{
    int iRow=0,iCol=0,i=0,j=0;
    BOOL bret=FALSE;
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


    bret=SparseMat(p,iRow,iCol);

    if(bret==TRUE)
    {
        printf("\nIt is Sparse matrix.");
    }
    else
    {
        printf("\nIt is not Sparse matrix.");
    }
    

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}