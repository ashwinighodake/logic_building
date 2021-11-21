/*
Write a program which accept matrix from user and return addition of diagonal
elements.
Input : 3 2 5 9
        4 3 2 2
        8 4 1 5
        3 9 7 5
Output :12
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


int AddDiagonal(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iSum=0;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
          if(i==j)
          {
              iSum=iSum+Arr[i][j];
          }
        }
    }
    return iSum;
}
int main()
{
    int iRet=0,i=0,j=0,iRow=0,iCol=0;

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

    printf("\nEnter the values:");
    for(i=0;i<iRow;i++)
    {
       for(j=0;j<iCol;j++)
       {
         scanf("%d",&p[i][j]);   
       }

    }

    iRet=AddDiagonal(p,iRow,iCol);
    printf("%d",iRet);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}