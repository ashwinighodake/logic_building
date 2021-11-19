/*4. Accept N numbers from user and accept Range, Display all elements from
that range

Input :N :6
Elements : 85 66 3 15 93 88
Start:60
End:90
Output : 85 66 88

Input : N :6
Elements : 85 11 3 15 11 111
start:10
end:20
Output :11 15 
*/
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0,iLast=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]>iStart)&&(Arr[iCnt]<iEnd))
        {
           printf("%d\t",Arr[iCnt]);
        }
        
    }
}
int main()
{
    int iSize=0,iCnt=0,iStart=0,iEnd=0;
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
    printf("Enter the range start:");
    scanf("%d",&iStart);
   
    printf("Enter the range end:");
    scanf("%d",&iEnd);
   
    Range(p,iSize,iStart,iEnd);

    free(p);
    return 0;
}