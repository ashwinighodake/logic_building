/*4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt=0,iNo=0,iDigitcnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iDigitcnt=0;
        iNo=Arr[iCnt];
        while(iNo>0)
        {
            iDigitcnt++;
            iNo=iNo/10;
        }
        if(iDigitcnt==3)
        {
          printf("%d\t",Arr[iCnt]);
        }    
    }
    
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
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
    Digits(p,iSize);    
    free(p);
    return 0;
}