/*Write a program which accept matrix from user and display transpose of the
matrix.
The transpose of a given matrix is formed by interchanging the rows and
columns of a matrix.
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Transpos(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,temp=0;
    int  transpos[iRow][iCol];

   
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
           transpos[j][i]=Arr[i][j];
        }
        
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
           printf("%d\t",transpos[i][j]);
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

    Transpos(p,iRow,iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}