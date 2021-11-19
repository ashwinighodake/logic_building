/*5. Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input :5
Output : 0.464515
Input :7
Output : 0.650321
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
     double squaremeter=0.0;

     squaremeter=iValue *0.0929;

     return squaremeter;    
}
int main()
{
    int iValue=0;
    double dRet=0;

    printf("Area in square foot:");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Conversion of square foot of %d into square meter is %f",iValue,dRet);

    return 0;
}