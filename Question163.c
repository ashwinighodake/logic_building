/*
3. Write a program which accept matrix and return largest number from both the
diagonals
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int MaxDiagonal(int **Arr,int iRow,int iCol)
{
    int iMax=0,i=0,j=0;
   
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(i==j)
            {
                if(Arr[i][j]>iMax)
                {
                    iMax=Arr[i][j];
                }
            }
            if((i+j)==(iRow-1))
            {
                if(Arr[i][j]>iMax)
                {
                    iMax=Arr[i][j];
                }
            }
          
            
        }
    }
    return iMax;
}
int main()
{
    int i=0,j=0,iRow=0,iCol=0,iRet;
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

    printf("\nEnter the the values:");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    iRet=MaxDiagonal(p,iRow,iCol);
    printf("%d",iRet);

     for(i=0;i<iRow;i++)
     {
         free(p[i]);
     }

     free(p);

    return 0;
}