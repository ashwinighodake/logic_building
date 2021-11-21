//2. Write a program which accept matrix and reverse the contents of each row.

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void ReverseRow(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,k=0;
    int rev[iRow][iCol];

    for(i=0;i<iRow;i++)
    {
        for(j=0,k=iCol-1;(j<iCol)&&(k>=0);j++,k--)
        {
            rev[i][k]=Arr[i][j];
            
        }
        
    }
    printf("\nReversed contents are:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0,k=iCol-1;(j<iCol)&&(k>=0);j++,k--)
        {
          printf("%d\t",rev[i][j]);
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

    ReverseRow(p,iRow,iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}