//Program to find the area and circumference of the circle
#include<stdio.h>
int main()
{
    float radius,area,circumference;
    //enter the radius
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radius);
    area=3.142*radius*radius;
    circumference=2*3.142*radius;
    printf("area of the circle=%f\n circumference of the circle=%f",area,circumference);
    return 0;
}

