/* Write a program which accept matrix and check whether the matrix is
identity matrix or not.
Identity matrix is a square matrix with 1’s along the diagonal from upper left to
lower right and 0’s in all other positions.
If it satisfies the structure as explained before then the matrix is called as
identity matrix.
*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL IdentityMat(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    BOOL flag=TRUE;

    for(i=0;(i<iRow)&&(flag==TRUE);i++)
    {
        for(j=0;(j<iCol);j++)
        {
            if(i==j)
            {
                if(Arr[i][j]!=1)
                {
                    flag=FALSE;
                    break;
                }
            }
            else
            {
                if(Arr[i][j]!=0)
                {
                    flag=FALSE;
                    break;
                }
            }
            
        }
    }
    return flag;
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

    bret=IdentityMat(p,iRow,iCol);

    if(bret==TRUE)
    {
        printf("\nIt is Identity matrix.");
    }
    else
    {
        printf("\nIt is not identity matrix.");
    }
    

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}