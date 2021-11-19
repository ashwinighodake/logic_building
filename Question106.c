/*5. Accept N numbers from user and accept one another number as NO ,
check whether no is present or not.
Input :N :6
Elements : 85 66 3 15 93 88
No:11
Output : False

Input : N :6
Elements : 85 11 3 15 11 111
No:11
Output :TRUE

*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
        
    }
    if(iCnt==iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    
    }
    
}
int main()
{
    int iSize=0,iCnt=0,iNo=0;
    BOOL bRet=FALSE;
    int *p=NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory!");
        return -1;
    }    
    printf("Enter the %d element:",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter which number do you want to search:");
    scanf("%d",&iNo);

    bRet=Check(p,iSize,iNo);

    if(bRet==TRUE)
    {
        printf("TRUE");
    }   
    else
    {
        printf("FALSE");
    }
    
    free(p);
    return 0;
}