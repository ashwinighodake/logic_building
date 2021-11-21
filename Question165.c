/*
 Write a program which accept matrix and swap the contents of consecutive rows.

*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void SwapRows(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,temp=0;

    printf("\nSwapped contents are:\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(((i%2)==0)&&(i+1<iRow))
            {
                temp=Arr[i][j];
                Arr[i][j]=Arr[i+1][j];
                Arr[i+1][j]=temp;
            }
            
            
         printf("%d\t",Arr[i][j]);    
           
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


    SwapRows(p,iRow,iCol);

    for(i=0;i<iRow;i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}