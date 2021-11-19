/*3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input :5
Output : 5000
Input :12
Output : 12000
*/

#include<stdio.h>
int KMtoMeter(int iNo)
{
    int meter=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    meter=iNo*1000;

    return meter;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the Distance:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Total meter are:%d",iRet);
    return 0;
}