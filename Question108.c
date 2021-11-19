/*3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
*/
#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iLast=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iLast=iCnt;
        }
        
    }
    return iLast+1;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iNo;
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
    iRet=LastOccurence(p,iSize,iNo);
    printf("Frequency of %d is %d",iNo,iRet);

    free(p);
    return 0;
}