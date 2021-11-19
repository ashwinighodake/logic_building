/*2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/

#include<stdio.h>

double RectArea(float width,float height)
{
    double Area=0.0;

    Area = width * height;
    
    return Area;
}
int main()
{
    float height=0.0,width=0.0;
    double dRet=0.0;

    printf("Enter the width of rectangle:");
    scanf("%f",&width);

    printf("Enter the height of the rectangle:");
    scanf("%f",&height);

    dRet=RectArea(width,height);

    printf("Area of rectangle is:%f",dRet);

    return 0;
}